/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_NET_GENERATED_TRACERS_H
#define TRACE_NET_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_QEMU_ANNOUNCE_SELF_ITER_EVENT;
extern TraceEvent _TRACE_QEMU_ANNOUNCE_TIMER_DEL_EVENT;
extern TraceEvent _TRACE_VHOST_USER_EVENT_EVENT;
extern TraceEvent _TRACE_COLO_PROXY_MAIN_EVENT;
extern TraceEvent _TRACE_COLO_PROXY_MAIN_VNET_INFO_EVENT;
extern TraceEvent _TRACE_COLO_COMPARE_MAIN_EVENT;
extern TraceEvent _TRACE_COLO_COMPARE_DROP_PACKET_EVENT;
extern TraceEvent _TRACE_COLO_COMPARE_UDP_MISCOMPARE_EVENT;
extern TraceEvent _TRACE_COLO_COMPARE_ICMP_MISCOMPARE_EVENT;
extern TraceEvent _TRACE_COLO_COMPARE_IP_INFO_EVENT;
extern TraceEvent _TRACE_COLO_OLD_PACKET_CHECK_FOUND_EVENT;
extern TraceEvent _TRACE_COLO_COMPARE_TCP_INFO_EVENT;
extern TraceEvent _TRACE_COLO_FILTER_REWRITER_PKT_INFO_EVENT;
extern TraceEvent _TRACE_COLO_FILTER_REWRITER_CONN_OFFSET_EVENT;
extern TraceEvent _TRACE_VHOST_VDPA_SET_ADDRESS_SPACE_ID_EVENT;
extern TraceEvent _TRACE_VHOST_VDPA_NET_LOAD_CMD_EVENT;
extern TraceEvent _TRACE_VHOST_VDPA_NET_LOAD_CMD_RETVAL_EVENT;
extern TraceEvent _TRACE_VHOST_VDPA_NET_LOAD_MQ_EVENT;
extern uint16_t _TRACE_QEMU_ANNOUNCE_SELF_ITER_DSTATE;
extern uint16_t _TRACE_QEMU_ANNOUNCE_TIMER_DEL_DSTATE;
extern uint16_t _TRACE_VHOST_USER_EVENT_DSTATE;
extern uint16_t _TRACE_COLO_PROXY_MAIN_DSTATE;
extern uint16_t _TRACE_COLO_PROXY_MAIN_VNET_INFO_DSTATE;
extern uint16_t _TRACE_COLO_COMPARE_MAIN_DSTATE;
extern uint16_t _TRACE_COLO_COMPARE_DROP_PACKET_DSTATE;
extern uint16_t _TRACE_COLO_COMPARE_UDP_MISCOMPARE_DSTATE;
extern uint16_t _TRACE_COLO_COMPARE_ICMP_MISCOMPARE_DSTATE;
extern uint16_t _TRACE_COLO_COMPARE_IP_INFO_DSTATE;
extern uint16_t _TRACE_COLO_OLD_PACKET_CHECK_FOUND_DSTATE;
extern uint16_t _TRACE_COLO_COMPARE_TCP_INFO_DSTATE;
extern uint16_t _TRACE_COLO_FILTER_REWRITER_PKT_INFO_DSTATE;
extern uint16_t _TRACE_COLO_FILTER_REWRITER_CONN_OFFSET_DSTATE;
extern uint16_t _TRACE_VHOST_VDPA_SET_ADDRESS_SPACE_ID_DSTATE;
extern uint16_t _TRACE_VHOST_VDPA_NET_LOAD_CMD_DSTATE;
extern uint16_t _TRACE_VHOST_VDPA_NET_LOAD_CMD_RETVAL_DSTATE;
extern uint16_t _TRACE_VHOST_VDPA_NET_LOAD_MQ_DSTATE;
#define TRACE_QEMU_ANNOUNCE_SELF_ITER_ENABLED 1
#define TRACE_QEMU_ANNOUNCE_TIMER_DEL_ENABLED 1
#define TRACE_VHOST_USER_EVENT_ENABLED 1
#define TRACE_COLO_PROXY_MAIN_ENABLED 1
#define TRACE_COLO_PROXY_MAIN_VNET_INFO_ENABLED 1
#define TRACE_COLO_COMPARE_MAIN_ENABLED 1
#define TRACE_COLO_COMPARE_DROP_PACKET_ENABLED 1
#define TRACE_COLO_COMPARE_UDP_MISCOMPARE_ENABLED 1
#define TRACE_COLO_COMPARE_ICMP_MISCOMPARE_ENABLED 1
#define TRACE_COLO_COMPARE_IP_INFO_ENABLED 1
#define TRACE_COLO_OLD_PACKET_CHECK_FOUND_ENABLED 1
#define TRACE_COLO_COMPARE_TCP_INFO_ENABLED 1
#define TRACE_COLO_FILTER_REWRITER_PKT_INFO_ENABLED 1
#define TRACE_COLO_FILTER_REWRITER_CONN_OFFSET_ENABLED 1
#define TRACE_VHOST_VDPA_SET_ADDRESS_SPACE_ID_ENABLED 1
#define TRACE_VHOST_VDPA_NET_LOAD_CMD_ENABLED 1
#define TRACE_VHOST_VDPA_NET_LOAD_CMD_RETVAL_ENABLED 1
#define TRACE_VHOST_VDPA_NET_LOAD_MQ_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_QEMU_ANNOUNCE_SELF_ITER_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QEMU_ANNOUNCE_SELF_ITER) || \
    false)

static inline void _nocheck__trace_qemu_announce_self_iter(const char * id, const char * name, const char * mac, int skip)
{
    if (trace_event_get_state(TRACE_QEMU_ANNOUNCE_SELF_ITER) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:qemu_announce_self_iter " "%s:%s:%s skip: %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , id, name, mac, skip);
#line 82 "trace/trace-net.h"
        } else {
#line 4 "../net/trace-events"
            qemu_log("qemu_announce_self_iter " "%s:%s:%s skip: %d" "\n", id, name, mac, skip);
#line 86 "trace/trace-net.h"
        }
    }
}

static inline void trace_qemu_announce_self_iter(const char * id, const char * name, const char * mac, int skip)
{
    if (true) {
        _nocheck__trace_qemu_announce_self_iter(id, name, mac, skip);
    }
}

#define TRACE_QEMU_ANNOUNCE_TIMER_DEL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QEMU_ANNOUNCE_TIMER_DEL) || \
    false)

static inline void _nocheck__trace_qemu_announce_timer_del(bool free_named, bool free_timer, char * id)
{
    if (trace_event_get_state(TRACE_QEMU_ANNOUNCE_TIMER_DEL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:qemu_announce_timer_del " "free named: %d free timer: %d id: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , free_named, free_timer, id);
#line 113 "trace/trace-net.h"
        } else {
#line 5 "../net/trace-events"
            qemu_log("qemu_announce_timer_del " "free named: %d free timer: %d id: %s" "\n", free_named, free_timer, id);
#line 117 "trace/trace-net.h"
        }
    }
}

static inline void trace_qemu_announce_timer_del(bool free_named, bool free_timer, char * id)
{
    if (true) {
        _nocheck__trace_qemu_announce_timer_del(free_named, free_timer, id);
    }
}

#define TRACE_VHOST_USER_EVENT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VHOST_USER_EVENT) || \
    false)

static inline void _nocheck__trace_vhost_user_event(const char * chr, int event)
{
    if (trace_event_get_state(TRACE_VHOST_USER_EVENT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:vhost_user_event " "chr: %s got event: %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , chr, event);
#line 144 "trace/trace-net.h"
        } else {
#line 8 "../net/trace-events"
            qemu_log("vhost_user_event " "chr: %s got event: %d" "\n", chr, event);
#line 148 "trace/trace-net.h"
        }
    }
}

static inline void trace_vhost_user_event(const char * chr, int event)
{
    if (true) {
        _nocheck__trace_vhost_user_event(chr, event);
    }
}

#define TRACE_COLO_PROXY_MAIN_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_COLO_PROXY_MAIN) || \
    false)

static inline void _nocheck__trace_colo_proxy_main(const char * chr)
{
    if (trace_event_get_state(TRACE_COLO_PROXY_MAIN) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 11 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:colo_proxy_main " ": %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , chr);
#line 175 "trace/trace-net.h"
        } else {
#line 11 "../net/trace-events"
            qemu_log("colo_proxy_main " ": %s" "\n", chr);
#line 179 "trace/trace-net.h"
        }
    }
}

static inline void trace_colo_proxy_main(const char * chr)
{
    if (true) {
        _nocheck__trace_colo_proxy_main(chr);
    }
}

#define TRACE_COLO_PROXY_MAIN_VNET_INFO_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_COLO_PROXY_MAIN_VNET_INFO) || \
    false)

static inline void _nocheck__trace_colo_proxy_main_vnet_info(const char * sta, uint32_t vnet_hdr, int size)
{
    if (trace_event_get_state(TRACE_COLO_PROXY_MAIN_VNET_INFO) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 12 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:colo_proxy_main_vnet_info " ": %s pkt->vnet_hdr_len = %u, pkt->size = %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , sta, vnet_hdr, size);
#line 206 "trace/trace-net.h"
        } else {
#line 12 "../net/trace-events"
            qemu_log("colo_proxy_main_vnet_info " ": %s pkt->vnet_hdr_len = %u, pkt->size = %d" "\n", sta, vnet_hdr, size);
#line 210 "trace/trace-net.h"
        }
    }
}

static inline void trace_colo_proxy_main_vnet_info(const char * sta, uint32_t vnet_hdr, int size)
{
    if (true) {
        _nocheck__trace_colo_proxy_main_vnet_info(sta, vnet_hdr, size);
    }
}

#define TRACE_COLO_COMPARE_MAIN_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_COLO_COMPARE_MAIN) || \
    false)

static inline void _nocheck__trace_colo_compare_main(const char * chr)
{
    if (trace_event_get_state(TRACE_COLO_COMPARE_MAIN) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 15 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:colo_compare_main " ": %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , chr);
#line 237 "trace/trace-net.h"
        } else {
#line 15 "../net/trace-events"
            qemu_log("colo_compare_main " ": %s" "\n", chr);
#line 241 "trace/trace-net.h"
        }
    }
}

static inline void trace_colo_compare_main(const char * chr)
{
    if (true) {
        _nocheck__trace_colo_compare_main(chr);
    }
}

#define TRACE_COLO_COMPARE_DROP_PACKET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_COLO_COMPARE_DROP_PACKET) || \
    false)

static inline void _nocheck__trace_colo_compare_drop_packet(const char * queue, const char * chr)
{
    if (trace_event_get_state(TRACE_COLO_COMPARE_DROP_PACKET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 16 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:colo_compare_drop_packet " ": %s: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , queue, chr);
#line 268 "trace/trace-net.h"
        } else {
#line 16 "../net/trace-events"
            qemu_log("colo_compare_drop_packet " ": %s: %s" "\n", queue, chr);
#line 272 "trace/trace-net.h"
        }
    }
}

static inline void trace_colo_compare_drop_packet(const char * queue, const char * chr)
{
    if (true) {
        _nocheck__trace_colo_compare_drop_packet(queue, chr);
    }
}

#define TRACE_COLO_COMPARE_UDP_MISCOMPARE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_COLO_COMPARE_UDP_MISCOMPARE) || \
    false)

static inline void _nocheck__trace_colo_compare_udp_miscompare(const char * sta, int size)
{
    if (trace_event_get_state(TRACE_COLO_COMPARE_UDP_MISCOMPARE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 17 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:colo_compare_udp_miscompare " ": %s = %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , sta, size);
#line 299 "trace/trace-net.h"
        } else {
#line 17 "../net/trace-events"
            qemu_log("colo_compare_udp_miscompare " ": %s = %d" "\n", sta, size);
#line 303 "trace/trace-net.h"
        }
    }
}

static inline void trace_colo_compare_udp_miscompare(const char * sta, int size)
{
    if (true) {
        _nocheck__trace_colo_compare_udp_miscompare(sta, size);
    }
}

#define TRACE_COLO_COMPARE_ICMP_MISCOMPARE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_COLO_COMPARE_ICMP_MISCOMPARE) || \
    false)

static inline void _nocheck__trace_colo_compare_icmp_miscompare(const char * sta, int size)
{
    if (trace_event_get_state(TRACE_COLO_COMPARE_ICMP_MISCOMPARE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 18 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:colo_compare_icmp_miscompare " ": %s = %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , sta, size);
#line 330 "trace/trace-net.h"
        } else {
#line 18 "../net/trace-events"
            qemu_log("colo_compare_icmp_miscompare " ": %s = %d" "\n", sta, size);
#line 334 "trace/trace-net.h"
        }
    }
}

static inline void trace_colo_compare_icmp_miscompare(const char * sta, int size)
{
    if (true) {
        _nocheck__trace_colo_compare_icmp_miscompare(sta, size);
    }
}

#define TRACE_COLO_COMPARE_IP_INFO_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_COLO_COMPARE_IP_INFO) || \
    false)

static inline void _nocheck__trace_colo_compare_ip_info(int psize, const char * sta, const char * stb, int ssize, const char * stc, const char * std)
{
    if (trace_event_get_state(TRACE_COLO_COMPARE_IP_INFO) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 19 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:colo_compare_ip_info " "ppkt size = %d, ip_src = %s, ip_dst = %s, spkt size = %d, ip_src = %s, ip_dst = %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , psize, sta, stb, ssize, stc, std);
#line 361 "trace/trace-net.h"
        } else {
#line 19 "../net/trace-events"
            qemu_log("colo_compare_ip_info " "ppkt size = %d, ip_src = %s, ip_dst = %s, spkt size = %d, ip_src = %s, ip_dst = %s" "\n", psize, sta, stb, ssize, stc, std);
#line 365 "trace/trace-net.h"
        }
    }
}

static inline void trace_colo_compare_ip_info(int psize, const char * sta, const char * stb, int ssize, const char * stc, const char * std)
{
    if (true) {
        _nocheck__trace_colo_compare_ip_info(psize, sta, stb, ssize, stc, std);
    }
}

#define TRACE_COLO_OLD_PACKET_CHECK_FOUND_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_COLO_OLD_PACKET_CHECK_FOUND) || \
    false)

static inline void _nocheck__trace_colo_old_packet_check_found(int64_t old_time)
{
    if (trace_event_get_state(TRACE_COLO_OLD_PACKET_CHECK_FOUND) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 20 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:colo_old_packet_check_found " "%" PRId64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , old_time);
#line 392 "trace/trace-net.h"
        } else {
#line 20 "../net/trace-events"
            qemu_log("colo_old_packet_check_found " "%" PRId64 "\n", old_time);
#line 396 "trace/trace-net.h"
        }
    }
}

static inline void trace_colo_old_packet_check_found(int64_t old_time)
{
    if (true) {
        _nocheck__trace_colo_old_packet_check_found(old_time);
    }
}

#define TRACE_COLO_COMPARE_TCP_INFO_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_COLO_COMPARE_TCP_INFO) || \
    false)

static inline void _nocheck__trace_colo_compare_tcp_info(const char * pkt, uint32_t seq, uint32_t ack, int hdlen, int pdlen, int offset, int flags)
{
    if (trace_event_get_state(TRACE_COLO_COMPARE_TCP_INFO) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 21 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:colo_compare_tcp_info " "%s: seq/ack= %u/%u hdlen= %d pdlen= %d offset= %d flags=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , pkt, seq, ack, hdlen, pdlen, offset, flags);
#line 423 "trace/trace-net.h"
        } else {
#line 21 "../net/trace-events"
            qemu_log("colo_compare_tcp_info " "%s: seq/ack= %u/%u hdlen= %d pdlen= %d offset= %d flags=%d" "\n", pkt, seq, ack, hdlen, pdlen, offset, flags);
#line 427 "trace/trace-net.h"
        }
    }
}

static inline void trace_colo_compare_tcp_info(const char * pkt, uint32_t seq, uint32_t ack, int hdlen, int pdlen, int offset, int flags)
{
    if (true) {
        _nocheck__trace_colo_compare_tcp_info(pkt, seq, ack, hdlen, pdlen, offset, flags);
    }
}

#define TRACE_COLO_FILTER_REWRITER_PKT_INFO_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_COLO_FILTER_REWRITER_PKT_INFO) || \
    false)

static inline void _nocheck__trace_colo_filter_rewriter_pkt_info(const char * func, const char * src, const char * dst, uint32_t seq, uint32_t ack, uint32_t flag)
{
    if (trace_event_get_state(TRACE_COLO_FILTER_REWRITER_PKT_INFO) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 24 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:colo_filter_rewriter_pkt_info " "%s: src/dst: %s/%s p: seq/ack=%u/%u  flags=0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , func, src, dst, seq, ack, flag);
#line 454 "trace/trace-net.h"
        } else {
#line 24 "../net/trace-events"
            qemu_log("colo_filter_rewriter_pkt_info " "%s: src/dst: %s/%s p: seq/ack=%u/%u  flags=0x%x" "\n", func, src, dst, seq, ack, flag);
#line 458 "trace/trace-net.h"
        }
    }
}

static inline void trace_colo_filter_rewriter_pkt_info(const char * func, const char * src, const char * dst, uint32_t seq, uint32_t ack, uint32_t flag)
{
    if (true) {
        _nocheck__trace_colo_filter_rewriter_pkt_info(func, src, dst, seq, ack, flag);
    }
}

#define TRACE_COLO_FILTER_REWRITER_CONN_OFFSET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_COLO_FILTER_REWRITER_CONN_OFFSET) || \
    false)

static inline void _nocheck__trace_colo_filter_rewriter_conn_offset(uint32_t offset)
{
    if (trace_event_get_state(TRACE_COLO_FILTER_REWRITER_CONN_OFFSET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 25 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:colo_filter_rewriter_conn_offset " ": offset=%u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , offset);
#line 485 "trace/trace-net.h"
        } else {
#line 25 "../net/trace-events"
            qemu_log("colo_filter_rewriter_conn_offset " ": offset=%u" "\n", offset);
#line 489 "trace/trace-net.h"
        }
    }
}

static inline void trace_colo_filter_rewriter_conn_offset(uint32_t offset)
{
    if (true) {
        _nocheck__trace_colo_filter_rewriter_conn_offset(offset);
    }
}

#define TRACE_VHOST_VDPA_SET_ADDRESS_SPACE_ID_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VHOST_VDPA_SET_ADDRESS_SPACE_ID) || \
    false)

static inline void _nocheck__trace_vhost_vdpa_set_address_space_id(void * v, unsigned vq_group, unsigned asid_num)
{
    if (trace_event_get_state(TRACE_VHOST_VDPA_SET_ADDRESS_SPACE_ID) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 28 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:vhost_vdpa_set_address_space_id " "vhost_vdpa: %p vq_group: %u asid: %u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , v, vq_group, asid_num);
#line 516 "trace/trace-net.h"
        } else {
#line 28 "../net/trace-events"
            qemu_log("vhost_vdpa_set_address_space_id " "vhost_vdpa: %p vq_group: %u asid: %u" "\n", v, vq_group, asid_num);
#line 520 "trace/trace-net.h"
        }
    }
}

static inline void trace_vhost_vdpa_set_address_space_id(void * v, unsigned vq_group, unsigned asid_num)
{
    if (true) {
        _nocheck__trace_vhost_vdpa_set_address_space_id(v, vq_group, asid_num);
    }
}

#define TRACE_VHOST_VDPA_NET_LOAD_CMD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VHOST_VDPA_NET_LOAD_CMD) || \
    false)

static inline void _nocheck__trace_vhost_vdpa_net_load_cmd(void * s, uint8_t class, uint8_t cmd, int data_num, int data_size)
{
    if (trace_event_get_state(TRACE_VHOST_VDPA_NET_LOAD_CMD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 29 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:vhost_vdpa_net_load_cmd " "vdpa state: %p class: %u cmd: %u sg_num: %d size: %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , s, class, cmd, data_num, data_size);
#line 547 "trace/trace-net.h"
        } else {
#line 29 "../net/trace-events"
            qemu_log("vhost_vdpa_net_load_cmd " "vdpa state: %p class: %u cmd: %u sg_num: %d size: %d" "\n", s, class, cmd, data_num, data_size);
#line 551 "trace/trace-net.h"
        }
    }
}

static inline void trace_vhost_vdpa_net_load_cmd(void * s, uint8_t class, uint8_t cmd, int data_num, int data_size)
{
    if (true) {
        _nocheck__trace_vhost_vdpa_net_load_cmd(s, class, cmd, data_num, data_size);
    }
}

#define TRACE_VHOST_VDPA_NET_LOAD_CMD_RETVAL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VHOST_VDPA_NET_LOAD_CMD_RETVAL) || \
    false)

static inline void _nocheck__trace_vhost_vdpa_net_load_cmd_retval(void * s, uint8_t class, uint8_t cmd, int r)
{
    if (trace_event_get_state(TRACE_VHOST_VDPA_NET_LOAD_CMD_RETVAL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 30 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:vhost_vdpa_net_load_cmd_retval " "vdpa state: %p class: %u cmd: %u retval: %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , s, class, cmd, r);
#line 578 "trace/trace-net.h"
        } else {
#line 30 "../net/trace-events"
            qemu_log("vhost_vdpa_net_load_cmd_retval " "vdpa state: %p class: %u cmd: %u retval: %d" "\n", s, class, cmd, r);
#line 582 "trace/trace-net.h"
        }
    }
}

static inline void trace_vhost_vdpa_net_load_cmd_retval(void * s, uint8_t class, uint8_t cmd, int r)
{
    if (true) {
        _nocheck__trace_vhost_vdpa_net_load_cmd_retval(s, class, cmd, r);
    }
}

#define TRACE_VHOST_VDPA_NET_LOAD_MQ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VHOST_VDPA_NET_LOAD_MQ) || \
    false)

static inline void _nocheck__trace_vhost_vdpa_net_load_mq(void * s, int ncurqps)
{
    if (trace_event_get_state(TRACE_VHOST_VDPA_NET_LOAD_MQ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 31 "../net/trace-events"
            qemu_log("%d@%zu.%06zu:vhost_vdpa_net_load_mq " "vdpa state: %p current_qpairs: %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , s, ncurqps);
#line 609 "trace/trace-net.h"
        } else {
#line 31 "../net/trace-events"
            qemu_log("vhost_vdpa_net_load_mq " "vdpa state: %p current_qpairs: %d" "\n", s, ncurqps);
#line 613 "trace/trace-net.h"
        }
    }
}

static inline void trace_vhost_vdpa_net_load_mq(void * s, int ncurqps)
{
    if (true) {
        _nocheck__trace_vhost_vdpa_net_load_mq(s, ncurqps);
    }
}
#endif /* TRACE_NET_GENERATED_TRACERS_H */
