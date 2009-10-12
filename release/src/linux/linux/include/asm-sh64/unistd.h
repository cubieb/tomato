#ifndef __ASM_SH64_UNISTD_H
#define __ASM_SH64_UNISTD_H

/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * include/asm-sh64/unistd.h
 *
 * Copyright (C) 2000, 2001  Paolo Alberelli
 *
 * This file contains the system call numbers.
 *
 */

#define __NR_setup		  0	/* used only by init, to get system going */
#define __NR_exit		  1
#define __NR_fork		  2
#define __NR_read		  3
#define __NR_write		  4
#define __NR_open		  5
#define __NR_close		  6
#define __NR_waitpid		  7
#define __NR_creat		  8
#define __NR_link		  9
#define __NR_unlink		 10
#define __NR_execve		 11
#define __NR_chdir		 12
#define __NR_time		 13
#define __NR_mknod		 14
#define __NR_chmod		 15
#define __NR_lchown		 16
#define __NR_break		 17
#define __NR_oldstat		 18
#define __NR_lseek		 19
#define __NR_getpid		 20
#define __NR_mount		 21
#define __NR_umount		 22
#define __NR_setuid		 23
#define __NR_getuid		 24
#define __NR_stime		 25
#define __NR_ptrace		 26
#define __NR_alarm		 27
#define __NR_oldfstat		 28
#define __NR_pause		 29
#define __NR_utime		 30
#define __NR_stty		 31
#define __NR_gtty		 32
#define __NR_access		 33
#define __NR_nice		 34
#define __NR_ftime		 35
#define __NR_sync		 36
#define __NR_kill		 37
#define __NR_rename		 38
#define __NR_mkdir		 39
#define __NR_rmdir		 40
#define __NR_dup		 41
#define __NR_pipe		 42
#define __NR_times		 43
#define __NR_prof		 44
#define __NR_brk		 45
#define __NR_setgid		 46
#define __NR_getgid		 47
#define __NR_signal		 48
#define __NR_geteuid		 49
#define __NR_getegid		 50
#define __NR_acct		 51
#define __NR_umount2		 52
#define __NR_lock		 53
#define __NR_ioctl		 54
#define __NR_fcntl		 55
#define __NR_mpx		 56
#define __NR_setpgid		 57
#define __NR_ulimit		 58
#define __NR_oldolduname	 59
#define __NR_umask		 60
#define __NR_chroot		 61
#define __NR_ustat		 62
#define __NR_dup2		 63
#define __NR_getppid		 64
#define __NR_getpgrp		 65
#define __NR_setsid		 66
#define __NR_sigaction		 67
#define __NR_sgetmask		 68
#define __NR_ssetmask		 69
#define __NR_setreuid		 70
#define __NR_setregid		 71
#define __NR_sigsuspend		 72
#define __NR_sigpending		 73
#define __NR_sethostname	 74
#define __NR_setrlimit		 75
#define __NR_getrlimit	 	 76	/* Back compatible 2Gig limited rlimit */
#define __NR_getrusage		 77
#define __NR_gettimeofday	 78
#define __NR_settimeofday	 79
#define __NR_getgroups		 80
#define __NR_setgroups		 81
#define __NR_select		 82
#define __NR_symlink		 83
#define __NR_oldlstat		 84
#define __NR_readlink		 85
#define __NR_uselib		 86
#define __NR_swapon		 87
#define __NR_reboot		 88
#define __NR_readdir		 89
#define __NR_mmap		 90
#define __NR_munmap		 91
#define __NR_truncate		 92
#define __NR_ftruncate		 93
#define __NR_fchmod		 94
#define __NR_fchown		 95
#define __NR_getpriority	 96
#define __NR_setpriority	 97
#define __NR_profil		 98
#define __NR_statfs		 99
#define __NR_fstatfs		100
#define __NR_ioperm		101
#define __NR_socketcall		102	/* old implementation of socket systemcall */
#define __NR_syslog		103
#define __NR_setitimer		104
#define __NR_getitimer		105
#define __NR_stat		106
#define __NR_lstat		107
#define __NR_fstat		108
#define __NR_olduname		109
#define __NR_iopl		110
#define __NR_vhangup		111
#define __NR_idle		112
#define __NR_vm86old		113
#define __NR_wait4		114
#define __NR_swapoff		115
#define __NR_sysinfo		116
#define __NR_ipc		117
#define __NR_fsync		118
#define __NR_sigreturn		119
#define __NR_clone		120
#define __NR_setdomainname	121
#define __NR_uname		122
#define __NR_modify_ldt		123
#define __NR_adjtimex		124
#define __NR_mprotect		125
#define __NR_sigprocmask	126
#define __NR_create_module	127
#define __NR_init_module	128
#define __NR_delete_module	129
#define __NR_get_kernel_syms	130
#define __NR_quotactl		131
#define __NR_getpgid		132
#define __NR_fchdir		133
#define __NR_bdflush		134
#define __NR_sysfs		135
#define __NR_personality	136
#define __NR_afs_syscall	137 /* Syscall for Andrew File System */
#define __NR_setfsuid		138
#define __NR_setfsgid		139
#define __NR__llseek		140
#define __NR_getdents		141
#define __NR__newselect		142
#define __NR_flock		143
#define __NR_msync		144
#define __NR_readv		145
#define __NR_writev		146
#define __NR_getsid		147
#define __NR_fdatasync		148
#define __NR__sysctl		149
#define __NR_mlock		150
#define __NR_munlock		151
#define __NR_mlockall		152
#define __NR_munlockall		153
#define __NR_sched_setparam		154
#define __NR_sched_getparam		155
#define __NR_sched_setscheduler		156
#define __NR_sched_getscheduler		157
#define __NR_sched_yield		158
#define __NR_sched_get_priority_max	159
#define __NR_sched_get_priority_min	160
#define __NR_sched_rr_get_interval	161
#define __NR_nanosleep		162
#define __NR_mremap		163
#define __NR_setresuid		164
#define __NR_getresuid		165
#define __NR_vm86		166
#define __NR_query_module	167
#define __NR_poll		168
#define __NR_nfsservctl		169
#define __NR_setresgid		170
#define __NR_getresgid		171
#define __NR_prctl              172
#define __NR_rt_sigreturn	173
#define __NR_rt_sigaction	174
#define __NR_rt_sigprocmask	175
#define __NR_rt_sigpending	176
#define __NR_rt_sigtimedwait	177
#define __NR_rt_sigqueueinfo	178
#define __NR_rt_sigsuspend	179
#define __NR_pread		180
#define __NR_pwrite		181
#define __NR_chown		182
#define __NR_getcwd		183
#define __NR_capget		184
#define __NR_capset		185
#define __NR_sigaltstack	186
#define __NR_sendfile		187
#define __NR_streams1		188	/* some people actually want it */
#define __NR_streams2		189	/* some people actually want it */
#define __NR_vfork		190
#define __NR_ugetrlimit		191	/* SuS compliant getrlimit */
#define __NR_mmap2		192
#define __NR_truncate64		193
#define __NR_ftruncate64	194
#define __NR_stat64		195
#define __NR_lstat64		196
#define __NR_fstat64		197
#define __NR_lchown32		198
#define __NR_getuid32		199
#define __NR_getgid32		200
#define __NR_geteuid32		201
#define __NR_getegid32		202
#define __NR_setreuid32		203
#define __NR_setregid32		204
#define __NR_getgroups32	205
#define __NR_setgroups32	206
#define __NR_fchown32		207
#define __NR_setresuid32	208
#define __NR_getresuid32	209
#define __NR_setresgid32	210
#define __NR_getresgid32	211
#define __NR_chown32		212
#define __NR_setuid32		213
#define __NR_setgid32		214
#define __NR_setfsuid32		215
#define __NR_setfsgid32		216
#define __NR_pivot_root		217
#define __NR_mincore		218
#define __NR_madvise		219
#define __NR_socket		220	/* New socket system calls implementation */
#define __NR_bind		221
#define __NR_connect		222
#define __NR_listen		223
#define __NR_accept		224
#define __NR_getsockname	225
#define __NR_getpeername	226
#define __NR_socketpair		227
#define __NR_send		228
#define __NR_sendto		229
#define __NR_recv		230
#define __NR_recvfrom		231
#define __NR_shutdown		232
#define __NR_setsockopt		233
#define __NR_getsockopt		234
#define __NR_sendmsg		235
#define __NR_recvmsg		236
#define __NR_semop		237	/* New ipc system calls implementation */
#define __NR_semget		238
#define __NR_semctl		239
#define __NR_msgsnd		240
#define __NR_msgrcv		241
#define __NR_msgget		242
#define __NR_msgctl		243
#define __NR_shmatcall		244
#define __NR_shmdt		245
#define __NR_shmget		246
#define __NR_shmctl		247


/* user-visible error numbers are in the range -1 - -125: see <asm-sh64/errno.h> */

#define __syscall_return(type, res) \
do { \
	/* Note: when returning from kernel the return value is in r9	    \
	**       This prevents conflicts between return value and arg1      \
	**       when dispatching signal handler, in other words makes	    \
	**       life easier in the system call epilogue (see entry.S)      \
	*/								    \
        register unsigned long __sr2 __asm__ ("r2") = res;		    \
	if ((unsigned long)(res) >= (unsigned long)(-125)) { \
		errno = -(res);						    \
		__sr2 = -1; 						    \
	} \
	return (type) (__sr2); 						    \
} while (0)

/* XXX - _foo needs to be __foo, while __NR_bar could be _NR_bar. */

#define _syscall0(type,name) \
type name(void) \
{ \
register unsigned long __sc0 __asm__ ("r9") = ((0x10 << 16) | __NR_##name); \
__asm__ __volatile__ ("trapa	%1 !\t\t\t" #name "()"			    \
	: "=r" (__sc0) 							    \
	: "r" (__sc0) ); 						    \
__syscall_return(type,__sc0); 						    \
}

	/*
	 * The apparent spurious "dummy" assembler comment is *needed*,
	 * as without it, the compiler treats the arg<n> variables
	 * as no longer live just before the asm. The compiler can
	 * then optimize the storage into any registers it wishes.
	 * The additional dummy statement forces the compiler to put
	 * the arguments into the correct registers before the TRAPA.
	 */ 
#define _syscall1(type,name,type1,arg1) \
type name(type1 arg1) \
{ \
register unsigned long __sc0 __asm__ ("r9") = ((0x11 << 16) | __NR_##name); \
register unsigned long __sc2 __asm__ ("r2") = (unsigned long) arg1;	    \
__asm__ __volatile__ ("trapa	%1 !\t\t\t" #name "(%2)"		    \
	: "=r" (__sc0) 							    \
	: "r" (__sc0), "r" (__sc2));					    \
__asm__ __volatile__ ("!dummy	%0 %1"				   	    \
	:								    \
	: "r" (__sc0), "r" (__sc2));					    \
__syscall_return(type,__sc0); 						    \
}

#define _syscall2(type,name,type1,arg1,type2,arg2) \
type name(type1 arg1,type2 arg2) \
{ \
register unsigned long __sc0 __asm__ ("r9") = ((0x12 << 16) | __NR_##name); \
register unsigned long __sc2 __asm__ ("r2") = (unsigned long) arg1;	    \
register unsigned long __sc3 __asm__ ("r3") = (unsigned long) arg2;	    \
__asm__ __volatile__ ("trapa	%1 !\t\t\t" #name "(%2,%3)"		    \
	: "=r" (__sc0) 							    \
	: "r" (__sc0), "r" (__sc2), "r" (__sc3) );			    \
__asm__ __volatile__ ("!dummy	%0 %1 %2"			   	    \
	:								    \
	: "r" (__sc0), "r" (__sc2), "r" (__sc3) );			    \
__syscall_return(type,__sc0); 						    \
}

#define _syscall3(type,name,type1,arg1,type2,arg2,type3,arg3) \
type name(type1 arg1,type2 arg2,type3 arg3) \
{ \
register unsigned long __sc0 __asm__ ("r9") = ((0x13 << 16) | __NR_##name); \
register unsigned long __sc2 __asm__ ("r2") = (unsigned long) arg1;	    \
register unsigned long __sc3 __asm__ ("r3") = (unsigned long) arg2;	    \
register unsigned long __sc4 __asm__ ("r4") = (unsigned long) arg3;	    \
__asm__ __volatile__ ("trapa	%1 !\t\t\t" #name "(%2,%3,%4)"		    \
	: "=r" (__sc0) 							    \
	: "r" (__sc0), "r" (__sc2), "r" (__sc3), "r" (__sc4) );		    \
__asm__ __volatile__ ("!dummy	%0 %1 %2 %3"			   	    \
	:								    \
	: "r" (__sc0), "r" (__sc2), "r" (__sc3), "r" (__sc4) );	   	    \
__syscall_return(type,__sc0); 						    \
}

#define _syscall4(type,name,type1,arg1,type2,arg2,type3,arg3,type4,arg4) \
type name (type1 arg1, type2 arg2, type3 arg3, type4 arg4) \
{ \
register unsigned long __sc0 __asm__ ("r9") = ((0x14 << 16) | __NR_##name); \
register unsigned long __sc2 __asm__ ("r2") = (unsigned long) arg1;	    \
register unsigned long __sc3 __asm__ ("r3") = (unsigned long) arg2;	    \
register unsigned long __sc4 __asm__ ("r4") = (unsigned long) arg3;	    \
register unsigned long __sc5 __asm__ ("r5") = (unsigned long) arg4;	    \
__asm__ __volatile__ ("trapa	%1 !\t\t\t" #name "(%2,%3,%4,%5)"	    \
	: "=r" (__sc0) 							    \
	: "r" (__sc0), "r" (__sc2), "r" (__sc3), "r" (__sc4), "r" (__sc5) );\
__asm__ __volatile__ ("!dummy	%0 %1 %2 %3 %4"			   	    \
	:								    \
	: "r" (__sc0), "r" (__sc2), "r" (__sc3), "r" (__sc4), "r" (__sc5) );\
__syscall_return(type,__sc0); 						    \
}

#define _syscall5(type,name,type1,arg1,type2,arg2,type3,arg3,type4,arg4,type5,arg5) \
type name (type1 arg1, type2 arg2, type3 arg3, type4 arg4, type5 arg5) \
{ \
register unsigned long __sc0 __asm__ ("r9") = ((0x15 << 16) | __NR_##name); \
register unsigned long __sc2 __asm__ ("r2") = (unsigned long) arg1;	    \
register unsigned long __sc3 __asm__ ("r3") = (unsigned long) arg2;	    \
register unsigned long __sc4 __asm__ ("r4") = (unsigned long) arg3;	    \
register unsigned long __sc5 __asm__ ("r5") = (unsigned long) arg4;	    \
register unsigned long __sc6 __asm__ ("r6") = (unsigned long) arg5;	    \
__asm__ __volatile__ ("trapa	%1 !\t\t\t" #name "(%2,%3,%4,%5,%6)"	    \
	: "=r" (__sc0) 							    \
	: "r" (__sc0), "r" (__sc2), "r" (__sc3), "r" (__sc4), "r" (__sc5),  \
	  "r" (__sc6));							    \
__asm__ __volatile__ ("!dummy	%0 %1 %2 %3 %4 %5"		   	    \
	:								    \
	: "r" (__sc0), "r" (__sc2), "r" (__sc3), "r" (__sc4), "r" (__sc5),  \
	  "r" (__sc6));							    \
__syscall_return(type,__sc0); 						    \
}

#define _syscall6(type,name,type1,arg1,type2,arg2,type3,arg3,type4,arg4,type5,arg5, type6, arg6) \
type name (type1 arg1, type2 arg2, type3 arg3, type4 arg4, type5 arg5, type6 arg6) \
{ \
register unsigned long __sc0 __asm__ ("r9") = ((0x16 << 16) | __NR_##name); \
register unsigned long __sc2 __asm__ ("r2") = (unsigned long) arg1;	    \
register unsigned long __sc3 __asm__ ("r3") = (unsigned long) arg2;	    \
register unsigned long __sc4 __asm__ ("r4") = (unsigned long) arg3;	    \
register unsigned long __sc5 __asm__ ("r5") = (unsigned long) arg4;	    \
register unsigned long __sc6 __asm__ ("r6") = (unsigned long) arg5;	    \
register unsigned long __sc7 __asm__ ("r7") = (unsigned long) arg6;	    \
__asm__ __volatile__ ("trapa	%1 !\t\t\t" #name "(%2,%3,%4,%5,%6,%7)"	    \
	: "=r" (__sc0) 							    \
	: "r" (__sc0), "r" (__sc2), "r" (__sc3), "r" (__sc4), "r" (__sc5),  \
	  "r" (__sc6), "r" (__sc7));					    \
__asm__ __volatile__ ("!dummy	%0 %1 %2 %3 %4 %5 %6"		   	    \
	:								    \
	: "r" (__sc0), "r" (__sc2), "r" (__sc3), "r" (__sc4), "r" (__sc5),  \
	  "r" (__sc6), "r" (__sc7));					    \
__syscall_return(type,__sc0); 						    \
}


#ifdef __KERNEL_SYSCALLS__

/*
 * we need this inline - forking from kernel space will result
 * in NO COPY ON WRITE (!!!), until an execve is executed. This
 * is no problem, but for the stack. This is handled by not letting
 * main() use the stack at all after fork(). Thus, no function
 * calls - which means inline code for fork too, as otherwise we
 * would use the stack upon exit from 'fork()'.
 *
 * Actually only pause and fork are needed inline, so that there
 * won't be any messing with the stack from main(), but we define
 * some others too.
 */
#define __NR__exit __NR_exit
static __inline__ _syscall0(int,pause)
static __inline__ _syscall1(int,setup,int,magic)
static __inline__ _syscall0(int,sync)
static __inline__ _syscall0(pid_t,setsid)
static __inline__ _syscall3(int,write,int,fd,const char *,buf,off_t,count)
static __inline__ _syscall3(int,read,int,fd,char *,buf,off_t,count)
static __inline__ _syscall3(off_t,lseek,int,fd,off_t,offset,int,count)
static __inline__ _syscall1(int,dup,int,fd)
static __inline__ _syscall3(int,execve,const char *,file,char **,argv,char **,envp)
static __inline__ _syscall3(int,open,const char *,file,int,flag,int,mode)
static __inline__ _syscall1(int,close,int,fd)
static __inline__ _syscall1(int,_exit,int,exitcode)
static __inline__ _syscall3(pid_t,waitpid,pid_t,pid,int *,wait_stat,int,options)
static __inline__ _syscall1(int,delete_module,const char *,name)

static __inline__ pid_t wait(int * wait_stat)
{
	return waitpid(-1,wait_stat,0);
}
#endif

#endif /* __ASM_SH64_UNISTD_H */