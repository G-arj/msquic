#include <clog.h>
#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER CLOG_DATAPATH_LINUX_C
#undef TRACEPOINT_PROBE_DYNAMIC_LINKAGE
#define  TRACEPOINT_PROBE_DYNAMIC_LINKAGE
#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "datapath_linux.c.clog.h.lttng.h"
#if !defined(DEF_CLOG_DATAPATH_LINUX_C) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define DEF_CLOG_DATAPATH_LINUX_C
#include <lttng/tracepoint.h>
#define __int64 __int64_t
#include "datapath_linux.c.clog.h.lttng.h"
#endif
#include <lttng/tracepoint-event.h>
#ifndef _clog_MACRO_QuicTraceLogInfo
#define _clog_MACRO_QuicTraceLogInfo  1
#define QuicTraceLogInfo(a, ...) _clog_CAT(_clog_ARGN_SELECTOR(__VA_ARGS__), _clog_CAT(_,a(#a, __VA_ARGS__)))
#endif
#ifndef _clog_MACRO_QuicTraceLogError
#define _clog_MACRO_QuicTraceLogError  1
#define QuicTraceLogError(a, ...) _clog_CAT(_clog_ARGN_SELECTOR(__VA_ARGS__), _clog_CAT(_,a(#a, __VA_ARGS__)))
#endif
#ifndef _clog_MACRO_QuicTraceEvent
#define _clog_MACRO_QuicTraceEvent  1
#define QuicTraceEvent(a, ...) _clog_CAT(_clog_ARGN_SELECTOR(__VA_ARGS__), _clog_CAT(_,a(#a, __VA_ARGS__)))
#endif
#ifdef __cplusplus
extern "C" {
#endif
#ifndef _clog_3_ARGS_TRACE_DatapathWorkerThreadStart



/*----------------------------------------------------------
// Decoder Ring for DatapathWorkerThreadStart
// [data][%p] Worker start
// QuicTraceLogInfo(
        DatapathWorkerThreadStart,
        "[data][%p] Worker start",
        ProcContext);
// arg2 = arg2 = ProcContext
----------------------------------------------------------*/
#define _clog_3_ARGS_TRACE_DatapathWorkerThreadStart(uniqueId, encoded_arg_string, arg2)\
tracepoint(CLOG_DATAPATH_LINUX_C, DatapathWorkerThreadStart , arg2);\

#endif




#ifndef _clog_3_ARGS_TRACE_DatapathWorkerThreadStop



/*----------------------------------------------------------
// Decoder Ring for DatapathWorkerThreadStop
// [data][%p] Worker stop
// QuicTraceLogInfo(
        DatapathWorkerThreadStop,
        "[data][%p] Worker stop",
        ProcContext);
// arg2 = arg2 = ProcContext
----------------------------------------------------------*/
#define _clog_3_ARGS_TRACE_DatapathWorkerThreadStop(uniqueId, encoded_arg_string, arg2)\
tracepoint(CLOG_DATAPATH_LINUX_C, DatapathWorkerThreadStop , arg2);\

#endif




#ifndef _clog_4_ARGS_TRACE_DatapathResolveHostNameFailed



/*----------------------------------------------------------
// Decoder Ring for DatapathResolveHostNameFailed
// [%p] Couldn't resolve hostname '%s' to an IP address
// QuicTraceLogError(
        DatapathResolveHostNameFailed,
        "[%p] Couldn't resolve hostname '%s' to an IP address",
        Datapath,
        HostName);
// arg2 = arg2 = Datapath
// arg3 = arg3 = HostName
----------------------------------------------------------*/
#define _clog_4_ARGS_TRACE_DatapathResolveHostNameFailed(uniqueId, encoded_arg_string, arg2, arg3)\
tracepoint(CLOG_DATAPATH_LINUX_C, DatapathResolveHostNameFailed , arg2, arg3);\

#endif




#ifndef _clog_4_ARGS_TRACE_LibraryErrorStatus



/*----------------------------------------------------------
// Decoder Ring for LibraryErrorStatus
// [ lib] ERROR, %u, %s.
// QuicTraceEvent(
            LibraryErrorStatus,
            "[ lib] ERROR, %u, %s.",
            Status,
            "epoll_create1(EPOLL_CLOEXEC) failed");
// arg2 = arg2 = Status
// arg3 = arg3 = "epoll_create1(EPOLL_CLOEXEC) failed"
----------------------------------------------------------*/
#define _clog_4_ARGS_TRACE_LibraryErrorStatus(uniqueId, encoded_arg_string, arg2, arg3)\
tracepoint(CLOG_DATAPATH_LINUX_C, LibraryErrorStatus , arg2, arg3);\

#endif




#ifndef _clog_4_ARGS_TRACE_LibraryErrorStatus



/*----------------------------------------------------------
// Decoder Ring for LibraryErrorStatus
// [ lib] ERROR, %u, %s.
// QuicTraceEvent(
            LibraryErrorStatus,
            "[ lib] ERROR, %u, %s.",
            Status,
            "eventfd failed");
// arg2 = arg2 = Status
// arg3 = arg3 = "eventfd failed"
----------------------------------------------------------*/
#define _clog_4_ARGS_TRACE_LibraryErrorStatus(uniqueId, encoded_arg_string, arg2, arg3)\

#endif




#ifndef _clog_4_ARGS_TRACE_LibraryErrorStatus



/*----------------------------------------------------------
// Decoder Ring for LibraryErrorStatus
// [ lib] ERROR, %u, %s.
// QuicTraceEvent(
            LibraryErrorStatus,
            "[ lib] ERROR, %u, %s.",
            Status,
            "epoll_ctl(EPOLL_CTL_ADD) failed");
// arg2 = arg2 = Status
// arg3 = arg3 = "epoll_ctl(EPOLL_CTL_ADD) failed"
----------------------------------------------------------*/
#define _clog_4_ARGS_TRACE_LibraryErrorStatus(uniqueId, encoded_arg_string, arg2, arg3)\

#endif




#ifndef _clog_4_ARGS_TRACE_LibraryErrorStatus



/*----------------------------------------------------------
// Decoder Ring for LibraryErrorStatus
// [ lib] ERROR, %u, %s.
// QuicTraceEvent(
            LibraryErrorStatus,
            "[ lib] ERROR, %u, %s.",
            Status,
            "CxPlatThreadCreate failed");
// arg2 = arg2 = Status
// arg3 = arg3 = "CxPlatThreadCreate failed"
----------------------------------------------------------*/
#define _clog_4_ARGS_TRACE_LibraryErrorStatus(uniqueId, encoded_arg_string, arg2, arg3)\

#endif




#ifndef _clog_4_ARGS_TRACE_AllocFailure



/*----------------------------------------------------------
// Decoder Ring for AllocFailure
// Allocation of '%s' failed. (%llu bytes)
// QuicTraceEvent(
            AllocFailure,
            "Allocation of '%s' failed. (%llu bytes)",
            "CXPLAT_DATAPATH",
            DatapathLength);
// arg2 = arg2 = "CXPLAT_DATAPATH"
// arg3 = arg3 = DatapathLength
----------------------------------------------------------*/
#define _clog_4_ARGS_TRACE_AllocFailure(uniqueId, encoded_arg_string, arg2, arg3)\
tracepoint(CLOG_DATAPATH_LINUX_C, AllocFailure , arg2, arg3);\

#endif




#ifndef _clog_4_ARGS_TRACE_AllocFailure



/*----------------------------------------------------------
// Decoder Ring for AllocFailure
// Allocation of '%s' failed. (%llu bytes)
// QuicTraceEvent(
            AllocFailure,
            "Allocation of '%s' failed. (%llu bytes)",
            "CXPLAT_DATAPATH_RECV_BLOCK",
            0);
// arg2 = arg2 = "CXPLAT_DATAPATH_RECV_BLOCK"
// arg3 = arg3 = 0
----------------------------------------------------------*/
#define _clog_4_ARGS_TRACE_AllocFailure(uniqueId, encoded_arg_string, arg2, arg3)\

#endif




#ifndef _clog_3_ARGS_TRACE_LibraryError



/*----------------------------------------------------------
// Decoder Ring for LibraryError
// [ lib] ERROR, %s.
// QuicTraceEvent(
        LibraryError,
        "[ lib] ERROR, %s.",
        "Resolving hostname to IP");
// arg2 = arg2 = "Resolving hostname to IP"
----------------------------------------------------------*/
#define _clog_3_ARGS_TRACE_LibraryError(uniqueId, encoded_arg_string, arg2)\
tracepoint(CLOG_DATAPATH_LINUX_C, LibraryError , arg2);\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
            DatapathErrorStatus,
            "[data][%p] ERROR, %u, %s.",
            Binding,
            Status,
            "eventfd failed");
// arg2 = arg2 = Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "eventfd failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\
tracepoint(CLOG_DATAPATH_LINUX_C, DatapathErrorStatus , arg2, arg3, arg4);\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
            DatapathErrorStatus,
            "[data][%p] ERROR, %u, %s.",
            Binding,
            Status,
            "epoll_ctl(EPOLL_CTL_ADD) failed");
// arg2 = arg2 = Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "epoll_ctl(EPOLL_CTL_ADD) failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
            DatapathErrorStatus,
            "[data][%p] ERROR, %u, %s.",
            Binding,
            Status,
            "socket failed");
// arg2 = arg2 = Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "socket failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
            DatapathErrorStatus,
            "[data][%p] ERROR, %u, %s.",
            Binding,
            Status,
            "setsockopt(IPV6_V6ONLY) failed");
// arg2 = arg2 = Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "setsockopt(IPV6_V6ONLY) failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
            DatapathErrorStatus,
            "[data][%p] ERROR, %u, %s.",
            Binding,
            Status,
            "setsockopt(IP_MTU_DISCOVER) failed");
// arg2 = arg2 = Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "setsockopt(IP_MTU_DISCOVER) failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
            DatapathErrorStatus,
            "[data][%p] ERROR, %u, %s.",
            Binding,
            Status,
            "setsockopt(IPV6_DONTFRAG) failed");
// arg2 = arg2 = Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "setsockopt(IPV6_DONTFRAG) failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
            DatapathErrorStatus,
            "[data][%p] ERROR, %u, %s.",
            Binding,
            Status,
            "setsockopt(IPV6_RECVPKTINFO) failed");
// arg2 = arg2 = Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "setsockopt(IPV6_RECVPKTINFO) failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
            DatapathErrorStatus,
            "[data][%p] ERROR, %u, %s.",
            Binding,
            Status,
            "setsockopt(IP_PKTINFO) failed");
// arg2 = arg2 = Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "setsockopt(IP_PKTINFO) failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
            DatapathErrorStatus,
            "[data][%p] ERROR, %u, %s.",
            Binding,
            Status,
            "setsockopt(IPV6_RECVTCLASS) failed");
// arg2 = arg2 = Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "setsockopt(IPV6_RECVTCLASS) failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
            DatapathErrorStatus,
            "[data][%p] ERROR, %u, %s.",
            Binding,
            Status,
            "setsockopt(IP_RECVTOS) failed");
// arg2 = arg2 = Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "setsockopt(IP_RECVTOS) failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
            DatapathErrorStatus,
            "[data][%p] ERROR, %u, %s.",
            Binding,
            Status,
            "setsockopt(SO_RCVBUF) failed");
// arg2 = arg2 = Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "setsockopt(SO_RCVBUF) failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
            DatapathErrorStatus,
            "[data][%p] ERROR, %u, %s.",
            Binding,
            Status,
            "setsockopt(SO_REUSEADDR) failed");
// arg2 = arg2 = Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "setsockopt(SO_REUSEADDR) failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
            DatapathErrorStatus,
            "[data][%p] ERROR, %u, %s.",
            Binding,
            Status,
            "bind failed");
// arg2 = arg2 = Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "bind failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
                DatapathErrorStatus,
                "[data][%p] ERROR, %u, %s.",
                Binding,
                Status,
                "connect failed");
// arg2 = arg2 = Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "connect failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
            DatapathErrorStatus,
            "[data][%p] ERROR, %u, %s.",
            Binding,
            Status,
            "getsockname failed");
// arg2 = arg2 = Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "getsockname failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_4_ARGS_TRACE_AllocFailure



/*----------------------------------------------------------
// Decoder Ring for AllocFailure
// Allocation of '%s' failed. (%llu bytes)
// QuicTraceEvent(
                AllocFailure,
                "Allocation of '%s' failed. (%llu bytes)",
                "CXPLAT_DATAPATH_RECV_BLOCK",
                0);
// arg2 = arg2 = "CXPLAT_DATAPATH_RECV_BLOCK"
// arg3 = arg3 = 0
----------------------------------------------------------*/
#define _clog_4_ARGS_TRACE_AllocFailure(uniqueId, encoded_arg_string, arg2, arg3)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
            DatapathErrorStatus,
            "[data][%p] ERROR, %u, %s.",
            SocketContext->Binding,
            Status,
            "epoll_ctl failed");
// arg2 = arg2 = SocketContext->Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "epoll_ctl failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_9_ARGS_TRACE_DatapathRecv



/*----------------------------------------------------------
// Decoder Ring for DatapathRecv
// [data][%p] Recv %u bytes (segment=%hu) Src=%!ADDR! Dst=%!ADDR!
// QuicTraceEvent(
        DatapathRecv,
        "[data][%p] Recv %u bytes (segment=%hu) Src=%!ADDR! Dst=%!ADDR!",
        SocketContext->Binding,
        (uint32_t)BytesTransferred,
        (uint32_t)BytesTransferred,
        CLOG_BYTEARRAY(sizeof(*LocalAddr), LocalAddr),
        CLOG_BYTEARRAY(sizeof(*RemoteAddr), RemoteAddr));
// arg2 = arg2 = SocketContext->Binding
// arg3 = arg3 = (uint32_t)BytesTransferred
// arg4 = arg4 = (uint32_t)BytesTransferred
// arg5 = arg5 = CLOG_BYTEARRAY(sizeof(*LocalAddr), LocalAddr)
// arg6 = arg6 = CLOG_BYTEARRAY(sizeof(*RemoteAddr), RemoteAddr)
----------------------------------------------------------*/
#define _clog_9_ARGS_TRACE_DatapathRecv(uniqueId, encoded_arg_string, arg2, arg3, arg4, arg5, arg5_len, arg6, arg6_len)\
tracepoint(CLOG_DATAPATH_LINUX_C, DatapathRecv , arg2, arg3, arg4, arg5_len, arg5, arg6_len, arg6);\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
            DatapathErrorStatus,
            "[data][%p] ERROR, %u, %s.",
            SocketContext->Binding,
            Status,
            "epoll_ctl failed");
// arg2 = arg2 = SocketContext->Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "epoll_ctl failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
                DatapathErrorStatus,
                "[data][%p] ERROR, %u, %s.",
                SocketContext->Binding,
                errno,
                "getsockopt(SO_ERROR) failed");
// arg2 = arg2 = SocketContext->Binding
// arg3 = arg3 = errno
// arg4 = arg4 = "getsockopt(SO_ERROR) failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
                DatapathErrorStatus,
                "[data][%p] ERROR, %u, %s.",
                SocketContext->Binding,
                ErrNum,
                "Socket error event");
// arg2 = arg2 = SocketContext->Binding
// arg3 = arg3 = ErrNum
// arg4 = arg4 = "Socket error event"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
                        DatapathErrorStatus,
                        "[data][%p] ERROR, %u, %s.",
                        SocketContext->Binding,
                        errno,
                        "recvmsg failed");
// arg2 = arg2 = SocketContext->Binding
// arg3 = arg3 = errno
// arg4 = arg4 = "recvmsg failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_4_ARGS_TRACE_AllocFailure



/*----------------------------------------------------------
// Decoder Ring for AllocFailure
// Allocation of '%s' failed. (%llu bytes)
// QuicTraceEvent(
            AllocFailure,
            "Allocation of '%s' failed. (%llu bytes)",
            "CXPLAT_SOCKET",
            BindingLength);
// arg2 = arg2 = "CXPLAT_SOCKET"
// arg3 = arg3 = BindingLength
----------------------------------------------------------*/
#define _clog_4_ARGS_TRACE_AllocFailure(uniqueId, encoded_arg_string, arg2, arg3)\

#endif




#ifndef _clog_7_ARGS_TRACE_DatapathCreated



/*----------------------------------------------------------
// Decoder Ring for DatapathCreated
// [data][%p] Created, local=%!ADDR!, remote=%!ADDR!
// QuicTraceEvent(
        DatapathCreated,
        "[data][%p] Created, local=%!ADDR!, remote=%!ADDR!",
        Binding,
        CLOG_BYTEARRAY(LocalAddress ? sizeof(*LocalAddress) : 0, LocalAddress),
        CLOG_BYTEARRAY(RemoteAddress ? sizeof(*RemoteAddress) : 0, RemoteAddress));
// arg2 = arg2 = Binding
// arg3 = arg3 = CLOG_BYTEARRAY(LocalAddress ? sizeof(*LocalAddress) : 0, LocalAddress)
// arg4 = arg4 = CLOG_BYTEARRAY(RemoteAddress ? sizeof(*RemoteAddress) : 0, RemoteAddress)
----------------------------------------------------------*/
#define _clog_7_ARGS_TRACE_DatapathCreated(uniqueId, encoded_arg_string, arg2, arg3, arg3_len, arg4, arg4_len)\
tracepoint(CLOG_DATAPATH_LINUX_C, DatapathCreated , arg2, arg3_len, arg3, arg4_len, arg4);\

#endif




#ifndef _clog_3_ARGS_TRACE_DatapathDestroyed



/*----------------------------------------------------------
// Decoder Ring for DatapathDestroyed
// [data][%p] Destroyed
// QuicTraceEvent(
                DatapathDestroyed,
                "[data][%p] Destroyed",
                Binding);
// arg2 = arg2 = Binding
----------------------------------------------------------*/
#define _clog_3_ARGS_TRACE_DatapathDestroyed(uniqueId, encoded_arg_string, arg2)\
tracepoint(CLOG_DATAPATH_LINUX_C, DatapathDestroyed , arg2);\

#endif




#ifndef _clog_3_ARGS_TRACE_DatapathDestroyed



/*----------------------------------------------------------
// Decoder Ring for DatapathDestroyed
// [data][%p] Destroyed
// QuicTraceEvent(
        DatapathDestroyed,
        "[data][%p] Destroyed",
        Socket);
// arg2 = arg2 = Socket
----------------------------------------------------------*/
#define _clog_3_ARGS_TRACE_DatapathDestroyed(uniqueId, encoded_arg_string, arg2)\

#endif




#ifndef _clog_4_ARGS_TRACE_AllocFailure



/*----------------------------------------------------------
// Decoder Ring for AllocFailure
// Allocation of '%s' failed. (%llu bytes)
// QuicTraceEvent(
            AllocFailure,
            "Allocation of '%s' failed. (%llu bytes)",
            "CXPLAT_SEND_DATA",
            0);
// arg2 = arg2 = "CXPLAT_SEND_DATA"
// arg3 = arg3 = 0
----------------------------------------------------------*/
#define _clog_4_ARGS_TRACE_AllocFailure(uniqueId, encoded_arg_string, arg2, arg3)\

#endif




#ifndef _clog_3_ARGS_TRACE_LibraryError



/*----------------------------------------------------------
// Decoder Ring for LibraryError
// [ lib] ERROR, %s.
// QuicTraceEvent(
            LibraryError,
            "[ lib] ERROR, %s.",
            "Max batch size limit hit");
// arg2 = arg2 = "Max batch size limit hit"
----------------------------------------------------------*/
#define _clog_3_ARGS_TRACE_LibraryError(uniqueId, encoded_arg_string, arg2)\

#endif




#ifndef _clog_4_ARGS_TRACE_AllocFailure



/*----------------------------------------------------------
// Decoder Ring for AllocFailure
// Allocation of '%s' failed. (%llu bytes)
// QuicTraceEvent(
            AllocFailure,
            "Allocation of '%s' failed. (%llu bytes)",
            "Send Buffer",
            0);
// arg2 = arg2 = "Send Buffer"
// arg3 = arg3 = 0
----------------------------------------------------------*/
#define _clog_4_ARGS_TRACE_AllocFailure(uniqueId, encoded_arg_string, arg2, arg3)\

#endif




#ifndef _clog_10_ARGS_TRACE_DatapathSend



/*----------------------------------------------------------
// Decoder Ring for DatapathSend
// [data][%p] Send %u bytes in %hhu buffers (segment=%hu) Dst=%!ADDR!, Src=%!ADDR!
// QuicTraceEvent(
        DatapathSend,
        "[data][%p] Send %u bytes in %hhu buffers (segment=%hu) Dst=%!ADDR!, Src=%!ADDR!",
        Socket,
        TotalSize,
        SendData->BufferCount,
        SendData->Buffers[0].Length,
        CLOG_BYTEARRAY(sizeof(*RemoteAddress), RemoteAddress),
        CLOG_BYTEARRAY(sizeof(*LocalAddress), LocalAddress));
// arg2 = arg2 = Socket
// arg3 = arg3 = TotalSize
// arg4 = arg4 = SendData->BufferCount
// arg5 = arg5 = SendData->Buffers[0].Length
// arg6 = arg6 = CLOG_BYTEARRAY(sizeof(*RemoteAddress), RemoteAddress)
// arg7 = arg7 = CLOG_BYTEARRAY(sizeof(*LocalAddress), LocalAddress)
----------------------------------------------------------*/
#define _clog_10_ARGS_TRACE_DatapathSend(uniqueId, encoded_arg_string, arg2, arg3, arg4, arg5, arg6, arg6_len, arg7, arg7_len)\
tracepoint(CLOG_DATAPATH_LINUX_C, DatapathSend , arg2, arg3, arg4, arg5, arg6_len, arg6, arg7_len, arg7);\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
                    DatapathErrorStatus,
                    "[data][%p] ERROR, %u, %s.",
                    SocketContext->Binding,
                    errno,
                    "epoll_ctl failed");
// arg2 = arg2 = SocketContext->Binding
// arg3 = arg3 = errno
// arg4 = arg4 = "epoll_ctl failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifndef _clog_5_ARGS_TRACE_DatapathErrorStatus



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
                DatapathErrorStatus,
                "[data][%p] ERROR, %u, %s.",
                SocketContext->Binding,
                Status,
                "sendmsg failed");
// arg2 = arg2 = SocketContext->Binding
// arg3 = arg3 = Status
// arg4 = arg4 = "sendmsg failed"
----------------------------------------------------------*/
#define _clog_5_ARGS_TRACE_DatapathErrorStatus(uniqueId, encoded_arg_string, arg2, arg3, arg4)\

#endif




#ifdef __cplusplus
}
#endif
#ifdef CLOG_INLINE_IMPLEMENTATION
#include "quic.clog_datapath_linux.c.clog.h.c"
#endif
