//
// Created by Ilja Kosynkin on 25.03.2016.
//
#include "logjam.h"

#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

JavaVM *sVm = NULL;

int main(int argc, char **argv);

jint JNI_OnLoad(JavaVM* vm, void* reserved) {
    sVm = vm;
    start_logger("VideoKit");
    return JNI_VERSION_1_6;
}

JNIEXPORT jint JNICALL Java_com_syllogismobile_jni_VideoKit_run(JNIEnv *env, jobject instance, jobjectArray args) {
    int i = 0;
    int argc = 0;
    char **argv = NULL;
    jstring *strr = NULL;
    
    if (args != NULL) {
        argc = (*env)->GetArrayLength(env, args);
        argv = (char **) malloc(sizeof(char *) * argc);
        strr = (jstring *) malloc(sizeof(jstring) * argc);
        
        for (i = 0; i < argc; ++i) {
            strr[i] = (jstring)(*env)->GetObjectArrayElement(env, args, i);
            argv[i] = (char *)(*env)->GetStringUTFChars(env, strr[i], 0);
        }
    }
    
    jint retcode = 0;
    retcode = main(argc, argv);
    LOGI("Main ended");
    
    for (i = 0; i < argc; ++i) {
        (*env)->ReleaseStringUTFChars(env, strr[i], argv[i]);
    }
    
    free(argv);
    free(strr);
    
    return retcode;
}
