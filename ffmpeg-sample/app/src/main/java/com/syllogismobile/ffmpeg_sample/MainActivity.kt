package com.syllogismobile.ffmpeg_sample

import android.Manifest
import android.os.AsyncTask
import android.os.Bundle
import android.os.Environment
import android.view.View
import androidx.appcompat.app.AppCompatActivity
import androidx.core.app.ActivityCompat
import kotlinx.android.synthetic.main.activity_main.*
import java.io.*
import java.lang.ref.WeakReference


class MainActivity : AppCompatActivity() {
    private lateinit var videoOut: String
    private lateinit var videoIn: String
    private lateinit var watermark: String

    private val videoKit = VideoKit()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        buttonProcess.setOnClickListener { processClicked() }

        videoOut = "${getExternalFilesDir(Environment.DIRECTORY_DCIM)}${File.separator}out.mp4"
        videoIn = "${getExternalFilesDir(Environment.DIRECTORY_DCIM)}${File.separator}in.mp4"
        watermark = "${getExternalFilesDir(Environment.DIRECTORY_DCIM)}${File.separator}watermark.png"

        File(videoOut).let {
            if (it.exists()) {
                it.delete()
            }
        }

        ActivityCompat.requestPermissions(
            this,
            arrayOf(Manifest.permission.WRITE_EXTERNAL_STORAGE),
            1337
        )

        try {
            val videoIn: InputStream = assets.open("video.mp4")
            val videoOut: OutputStream = FileOutputStream(File(this.videoIn))

            copyFile(videoIn, videoOut)

            val watermarkIn: InputStream = assets.open("watermark.png")
            val watermarkOut: OutputStream = FileOutputStream(watermark)

            copyFile(watermarkIn, watermarkOut)
        } catch (e: IOException) {
            e.printStackTrace()
        }
    }

    @Throws(IOException::class)
    private fun copyFile(`in`: InputStream, out: OutputStream) {
        val buffer = ByteArray(1024)
        var read: Int
        while (`in`.read(buffer).also { read = it } != -1) {
            out.write(buffer, 0, read)
        }
    }

    private fun processClicked() {
        spinnerContainer.visibility = View.VISIBLE
        val task = Task(this)

        val args = mutableListOf(
            "ffmpeg",
            "-y",
            "-ss",
            "0",
            "-i",
            videoIn,
            "-i",
            watermark,
            "-filter_complex",
            "overlay=10:10",
            "-t",
            "25"
        )

        if (BuildConfig.LIB_X264_ENABLED) {
            args.add("-preset")
            args.add("ultrafast")
        }

        args.add(videoOut)

        task.execute(*args.toTypedArray())
    }

    fun finished() {
        videoPlayer.setVideoPath(videoOut)
        videoPlayer.start()
        spinnerContainer.visibility = View.GONE
    }

    private class Task constructor(activity: MainActivity): AsyncTask<String, Void, Void?>() {
        private val activityWeakReference: WeakReference<MainActivity> = WeakReference(activity)

        override fun doInBackground(vararg strings: String): Void? {
            val out = activityWeakReference.get()?.videoKit?.run(strings as Array<String>)
            return null
        }

        override fun onPostExecute(aVoid: Void?) {
            val activity: MainActivity? = activityWeakReference.get()
            activity?.finished()
        }
    }
}
