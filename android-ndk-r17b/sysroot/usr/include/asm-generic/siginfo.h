/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_ASM_GENERIC_SIGINFO_H
#define _UAPI_ASM_GENERIC_SIGINFO_H
#include <linux/compiler.h>
#include <linux/types.h>
typedef union sigval {
  int sival_int;
  void __user * sival_ptr;
} sigval_t;
#ifndef __ARCH_SI_PREAMBLE_SIZE
#define __ARCH_SI_PREAMBLE_SIZE (3 * sizeof(int))
#endif
#define SI_MAX_SIZE 128
#ifndef SI_PAD_SIZE
#define SI_PAD_SIZE ((SI_MAX_SIZE - __ARCH_SI_PREAMBLE_SIZE) / sizeof(int))
#endif
#ifndef __ARCH_SI_UID_T
#define __ARCH_SI_UID_T __kernel_uid32_t
#endif
#ifndef __ARCH_SI_BAND_T
#define __ARCH_SI_BAND_T long
#endif
#ifndef __ARCH_SI_CLOCK_T
#define __ARCH_SI_CLOCK_T __kernel_clock_t
#endif
#ifndef __ARCH_SI_ATTRIBUTES
#define __ARCH_SI_ATTRIBUTES
#endif
#ifndef HAVE_ARCH_SIGINFO_T
typedef struct siginfo {
  int si_signo;
  int si_errno;
  int si_code;
  union {
    int _pad[SI_PAD_SIZE];
    struct {
      __kernel_pid_t _pid;
      __ARCH_SI_UID_T _uid;
    } _kill;
    struct {
      __kernel_timer_t _tid;
      int _overrun;
      char _pad[sizeof(__ARCH_SI_UID_T) - sizeof(int)];
      sigval_t _sigval;
      int _sys_private;
    } _timer;
    struct {
      __kernel_pid_t _pid;
      __ARCH_SI_UID_T _uid;
      sigval_t _sigval;
    } _rt;
    struct {
      __kernel_pid_t _pid;
      __ARCH_SI_UID_T _uid;
      int _status;
      __ARCH_SI_CLOCK_T _utime;
      __ARCH_SI_CLOCK_T _stime;
    } _sigchld;
    struct {
      void __user * _addr;
#ifdef __ARCH_SI_TRAPNO
      int _trapno;
#endif
      short _addr_lsb;
      union {
        struct {
          void __user * _lower;
          void __user * _upper;
        } _addr_bnd;
        __u32 _pkey;
      };
    } _sigfault;
    struct {
      __ARCH_SI_BAND_T _band;
      int _fd;
    } _sigpoll;
    struct {
      void __user * _call_addr;
      int _syscall;
      unsigned int _arch;
    } _sigsys;
  } _sifields;
} __ARCH_SI_ATTRIBUTES siginfo_t;
#define __ARCH_SIGSYS
#endif
#define si_pid _sifields._kill._pid
#define si_uid _sifields._kill._uid
#define si_tid _sifields._timer._tid
#define si_overrun _sifields._timer._overrun
#define si_sys_private _sifields._timer._sys_private
#define si_status _sifields._sigchld._status
#define si_utime _sifields._sigchld._utime
#define si_stime _sifields._sigchld._stime
#define si_value _sifields._rt._sigval
#define si_int _sifields._rt._sigval.sival_int
#define si_ptr _sifields._rt._sigval.sival_ptr
#define si_addr _sifields._sigfault._addr
#ifdef __ARCH_SI_TRAPNO
#define si_trapno _sifields._sigfault._trapno
#endif
#define si_addr_lsb _sifields._sigfault._addr_lsb
#define si_lower _sifields._sigfault._addr_bnd._lower
#define si_upper _sifields._sigfault._addr_bnd._upper
#define si_pkey _sifields._sigfault._pkey
#define si_band _sifields._sigpoll._band
#define si_fd _sifields._sigpoll._fd
#ifdef __ARCH_SIGSYS
#define si_call_addr _sifields._sigsys._call_addr
#define si_syscall _sifields._sigsys._syscall
#define si_arch _sifields._sigsys._arch
#endif
#define SI_USER 0
#define SI_KERNEL 0x80
#define SI_QUEUE - 1
#define SI_TIMER - 2
#define SI_MESGQ - 3
#define SI_ASYNCIO - 4
#define SI_SIGIO - 5
#define SI_TKILL - 6
#define SI_DETHREAD - 7
#define SI_FROMUSER(siptr) ((siptr)->si_code <= 0)
#define SI_FROMKERNEL(siptr) ((siptr)->si_code > 0)
#define ILL_ILLOPC 1
#define ILL_ILLOPN 2
#define ILL_ILLADR 3
#define ILL_ILLTRP 4
#define ILL_PRVOPC 5
#define ILL_PRVREG 6
#define ILL_COPROC 7
#define ILL_BADSTK 8
#define NSIGILL 8
#define FPE_INTDIV 1
#define FPE_INTOVF 2
#define FPE_FLTDIV 3
#define FPE_FLTOVF 4
#define FPE_FLTUND 5
#define FPE_FLTRES 6
#define FPE_FLTINV 7
#define FPE_FLTSUB 8
#define NSIGFPE 8
#define SEGV_MAPERR 1
#define SEGV_ACCERR 2
#define SEGV_BNDERR 3
#define SEGV_PKUERR 4
#define NSIGSEGV 4
#define BUS_ADRALN 1
#define BUS_ADRERR 2
#define BUS_OBJERR 3
#define BUS_MCEERR_AR 4
#define BUS_MCEERR_AO 5
#define NSIGBUS 5
#define TRAP_BRKPT 1
#define TRAP_TRACE 2
#define TRAP_BRANCH 3
#define TRAP_HWBKPT 4
#define NSIGTRAP 4
#define CLD_EXITED 1
#define CLD_KILLED 2
#define CLD_DUMPED 3
#define CLD_TRAPPED 4
#define CLD_STOPPED 5
#define CLD_CONTINUED 6
#define NSIGCHLD 6
#define POLL_IN 1
#define POLL_OUT 2
#define POLL_MSG 3
#define POLL_ERR 4
#define POLL_PRI 5
#define POLL_HUP 6
#define NSIGPOLL 6
#define SYS_SECCOMP 1
#define NSIGSYS 1
#define SIGEV_SIGNAL 0
#define SIGEV_NONE 1
#define SIGEV_THREAD 2
#define SIGEV_THREAD_ID 4
#ifndef __ARCH_SIGEV_PREAMBLE_SIZE
#define __ARCH_SIGEV_PREAMBLE_SIZE (sizeof(int) * 2 + sizeof(sigval_t))
#endif
#define SIGEV_MAX_SIZE 64
#define SIGEV_PAD_SIZE ((SIGEV_MAX_SIZE - __ARCH_SIGEV_PREAMBLE_SIZE) / sizeof(int))
typedef struct sigevent {
  sigval_t sigev_value;
  int sigev_signo;
  int sigev_notify;
  union {
    int _pad[SIGEV_PAD_SIZE];
    int _tid;
    struct {
      void(* _function) (sigval_t);
      void * _attribute;
    } _sigev_thread;
  } _sigev_un;
} sigevent_t;
#define sigev_notify_function _sigev_un._sigev_thread._function
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define sigev_notify_thread_id _sigev_un._tid
#endif
