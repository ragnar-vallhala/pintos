/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_AUDIO_GENERATED_TRACERS_H
#define TRACE_AUDIO_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_ALSA_REVENTS_EVENT;
extern TraceEvent _TRACE_ALSA_POLLOUT_EVENT;
extern TraceEvent _TRACE_ALSA_SET_HANDLER_EVENT;
extern TraceEvent _TRACE_ALSA_WROTE_ZERO_EVENT;
extern TraceEvent _TRACE_ALSA_READ_ZERO_EVENT;
extern TraceEvent _TRACE_ALSA_XRUN_OUT_EVENT;
extern TraceEvent _TRACE_ALSA_XRUN_IN_EVENT;
extern TraceEvent _TRACE_ALSA_RESUME_OUT_EVENT;
extern TraceEvent _TRACE_OSS_VERSION_EVENT;
extern TraceEvent _TRACE_DBUS_AUDIO_REGISTER_EVENT;
extern TraceEvent _TRACE_DBUS_AUDIO_PUT_BUFFER_OUT_EVENT;
extern TraceEvent _TRACE_DBUS_AUDIO_READ_EVENT;
extern TraceEvent _TRACE_PW_STATE_CHANGED_EVENT;
extern TraceEvent _TRACE_PW_READ_EVENT;
extern TraceEvent _TRACE_PW_WRITE_EVENT;
extern TraceEvent _TRACE_PW_VOL_EVENT;
extern TraceEvent _TRACE_PW_PERIOD_EVENT;
extern TraceEvent _TRACE_PW_AUDIO_INIT_EVENT;
extern TraceEvent _TRACE_AUDIO_TIMER_START_EVENT;
extern TraceEvent _TRACE_AUDIO_TIMER_STOP_EVENT;
extern TraceEvent _TRACE_AUDIO_TIMER_DELAYED_EVENT;
extern uint16_t _TRACE_ALSA_REVENTS_DSTATE;
extern uint16_t _TRACE_ALSA_POLLOUT_DSTATE;
extern uint16_t _TRACE_ALSA_SET_HANDLER_DSTATE;
extern uint16_t _TRACE_ALSA_WROTE_ZERO_DSTATE;
extern uint16_t _TRACE_ALSA_READ_ZERO_DSTATE;
extern uint16_t _TRACE_ALSA_XRUN_OUT_DSTATE;
extern uint16_t _TRACE_ALSA_XRUN_IN_DSTATE;
extern uint16_t _TRACE_ALSA_RESUME_OUT_DSTATE;
extern uint16_t _TRACE_OSS_VERSION_DSTATE;
extern uint16_t _TRACE_DBUS_AUDIO_REGISTER_DSTATE;
extern uint16_t _TRACE_DBUS_AUDIO_PUT_BUFFER_OUT_DSTATE;
extern uint16_t _TRACE_DBUS_AUDIO_READ_DSTATE;
extern uint16_t _TRACE_PW_STATE_CHANGED_DSTATE;
extern uint16_t _TRACE_PW_READ_DSTATE;
extern uint16_t _TRACE_PW_WRITE_DSTATE;
extern uint16_t _TRACE_PW_VOL_DSTATE;
extern uint16_t _TRACE_PW_PERIOD_DSTATE;
extern uint16_t _TRACE_PW_AUDIO_INIT_DSTATE;
extern uint16_t _TRACE_AUDIO_TIMER_START_DSTATE;
extern uint16_t _TRACE_AUDIO_TIMER_STOP_DSTATE;
extern uint16_t _TRACE_AUDIO_TIMER_DELAYED_DSTATE;
#define TRACE_ALSA_REVENTS_ENABLED 1
#define TRACE_ALSA_POLLOUT_ENABLED 1
#define TRACE_ALSA_SET_HANDLER_ENABLED 1
#define TRACE_ALSA_WROTE_ZERO_ENABLED 1
#define TRACE_ALSA_READ_ZERO_ENABLED 1
#define TRACE_ALSA_XRUN_OUT_ENABLED 1
#define TRACE_ALSA_XRUN_IN_ENABLED 1
#define TRACE_ALSA_RESUME_OUT_ENABLED 1
#define TRACE_OSS_VERSION_ENABLED 1
#define TRACE_DBUS_AUDIO_REGISTER_ENABLED 1
#define TRACE_DBUS_AUDIO_PUT_BUFFER_OUT_ENABLED 1
#define TRACE_DBUS_AUDIO_READ_ENABLED 1
#define TRACE_PW_STATE_CHANGED_ENABLED 1
#define TRACE_PW_READ_ENABLED 1
#define TRACE_PW_WRITE_ENABLED 1
#define TRACE_PW_VOL_ENABLED 1
#define TRACE_PW_PERIOD_ENABLED 1
#define TRACE_PW_AUDIO_INIT_ENABLED 1
#define TRACE_AUDIO_TIMER_START_ENABLED 1
#define TRACE_AUDIO_TIMER_STOP_ENABLED 1
#define TRACE_AUDIO_TIMER_DELAYED_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_ALSA_REVENTS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ALSA_REVENTS) || \
    false)

static inline void _nocheck__trace_alsa_revents(int revents)
{
    if (trace_event_get_state(TRACE_ALSA_REVENTS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:alsa_revents " "revents = %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , revents);
#line 91 "trace/trace-audio.h"
        } else {
#line 4 "../audio/trace-events"
            qemu_log("alsa_revents " "revents = %d" "\n", revents);
#line 95 "trace/trace-audio.h"
        }
    }
}

static inline void trace_alsa_revents(int revents)
{
    if (true) {
        _nocheck__trace_alsa_revents(revents);
    }
}

#define TRACE_ALSA_POLLOUT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ALSA_POLLOUT) || \
    false)

static inline void _nocheck__trace_alsa_pollout(int i, int fd)
{
    if (trace_event_get_state(TRACE_ALSA_POLLOUT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:alsa_pollout " "i = %d fd = %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , i, fd);
#line 122 "trace/trace-audio.h"
        } else {
#line 5 "../audio/trace-events"
            qemu_log("alsa_pollout " "i = %d fd = %d" "\n", i, fd);
#line 126 "trace/trace-audio.h"
        }
    }
}

static inline void trace_alsa_pollout(int i, int fd)
{
    if (true) {
        _nocheck__trace_alsa_pollout(i, fd);
    }
}

#define TRACE_ALSA_SET_HANDLER_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ALSA_SET_HANDLER) || \
    false)

static inline void _nocheck__trace_alsa_set_handler(int events, int index, int fd, int err)
{
    if (trace_event_get_state(TRACE_ALSA_SET_HANDLER) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:alsa_set_handler " "events=0x%x index=%d fd=%d err=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , events, index, fd, err);
#line 153 "trace/trace-audio.h"
        } else {
#line 6 "../audio/trace-events"
            qemu_log("alsa_set_handler " "events=0x%x index=%d fd=%d err=%d" "\n", events, index, fd, err);
#line 157 "trace/trace-audio.h"
        }
    }
}

static inline void trace_alsa_set_handler(int events, int index, int fd, int err)
{
    if (true) {
        _nocheck__trace_alsa_set_handler(events, index, fd, err);
    }
}

#define TRACE_ALSA_WROTE_ZERO_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ALSA_WROTE_ZERO) || \
    false)

static inline void _nocheck__trace_alsa_wrote_zero(int len)
{
    if (trace_event_get_state(TRACE_ALSA_WROTE_ZERO) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:alsa_wrote_zero " "Failed to write %d frames (wrote zero)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , len);
#line 184 "trace/trace-audio.h"
        } else {
#line 7 "../audio/trace-events"
            qemu_log("alsa_wrote_zero " "Failed to write %d frames (wrote zero)" "\n", len);
#line 188 "trace/trace-audio.h"
        }
    }
}

static inline void trace_alsa_wrote_zero(int len)
{
    if (true) {
        _nocheck__trace_alsa_wrote_zero(len);
    }
}

#define TRACE_ALSA_READ_ZERO_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ALSA_READ_ZERO) || \
    false)

static inline void _nocheck__trace_alsa_read_zero(long len)
{
    if (trace_event_get_state(TRACE_ALSA_READ_ZERO) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:alsa_read_zero " "Failed to read %ld frames (read zero)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , len);
#line 215 "trace/trace-audio.h"
        } else {
#line 8 "../audio/trace-events"
            qemu_log("alsa_read_zero " "Failed to read %ld frames (read zero)" "\n", len);
#line 219 "trace/trace-audio.h"
        }
    }
}

static inline void trace_alsa_read_zero(long len)
{
    if (true) {
        _nocheck__trace_alsa_read_zero(len);
    }
}

#define TRACE_ALSA_XRUN_OUT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ALSA_XRUN_OUT) || \
    false)

static inline void _nocheck__trace_alsa_xrun_out(void)
{
    if (trace_event_get_state(TRACE_ALSA_XRUN_OUT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 9 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:alsa_xrun_out " "Recovering from playback xrun" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 246 "trace/trace-audio.h"
        } else {
#line 9 "../audio/trace-events"
            qemu_log("alsa_xrun_out " "Recovering from playback xrun" "\n");
#line 250 "trace/trace-audio.h"
        }
    }
}

static inline void trace_alsa_xrun_out(void)
{
    if (true) {
        _nocheck__trace_alsa_xrun_out();
    }
}

#define TRACE_ALSA_XRUN_IN_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ALSA_XRUN_IN) || \
    false)

static inline void _nocheck__trace_alsa_xrun_in(void)
{
    if (trace_event_get_state(TRACE_ALSA_XRUN_IN) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 10 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:alsa_xrun_in " "Recovering from capture xrun" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 277 "trace/trace-audio.h"
        } else {
#line 10 "../audio/trace-events"
            qemu_log("alsa_xrun_in " "Recovering from capture xrun" "\n");
#line 281 "trace/trace-audio.h"
        }
    }
}

static inline void trace_alsa_xrun_in(void)
{
    if (true) {
        _nocheck__trace_alsa_xrun_in();
    }
}

#define TRACE_ALSA_RESUME_OUT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_ALSA_RESUME_OUT) || \
    false)

static inline void _nocheck__trace_alsa_resume_out(void)
{
    if (trace_event_get_state(TRACE_ALSA_RESUME_OUT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 11 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:alsa_resume_out " "Resuming suspended output stream" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 308 "trace/trace-audio.h"
        } else {
#line 11 "../audio/trace-events"
            qemu_log("alsa_resume_out " "Resuming suspended output stream" "\n");
#line 312 "trace/trace-audio.h"
        }
    }
}

static inline void trace_alsa_resume_out(void)
{
    if (true) {
        _nocheck__trace_alsa_resume_out();
    }
}

#define TRACE_OSS_VERSION_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_OSS_VERSION) || \
    false)

static inline void _nocheck__trace_oss_version(int version)
{
    if (trace_event_get_state(TRACE_OSS_VERSION) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 14 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:oss_version " "OSS version = 0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , version);
#line 339 "trace/trace-audio.h"
        } else {
#line 14 "../audio/trace-events"
            qemu_log("oss_version " "OSS version = 0x%x" "\n", version);
#line 343 "trace/trace-audio.h"
        }
    }
}

static inline void trace_oss_version(int version)
{
    if (true) {
        _nocheck__trace_oss_version(version);
    }
}

#define TRACE_DBUS_AUDIO_REGISTER_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_DBUS_AUDIO_REGISTER) || \
    false)

static inline void _nocheck__trace_dbus_audio_register(const char * s, const char * dir)
{
    if (trace_event_get_state(TRACE_DBUS_AUDIO_REGISTER) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 17 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:dbus_audio_register " "sender = %s, dir = %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , s, dir);
#line 370 "trace/trace-audio.h"
        } else {
#line 17 "../audio/trace-events"
            qemu_log("dbus_audio_register " "sender = %s, dir = %s" "\n", s, dir);
#line 374 "trace/trace-audio.h"
        }
    }
}

static inline void trace_dbus_audio_register(const char * s, const char * dir)
{
    if (true) {
        _nocheck__trace_dbus_audio_register(s, dir);
    }
}

#define TRACE_DBUS_AUDIO_PUT_BUFFER_OUT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_DBUS_AUDIO_PUT_BUFFER_OUT) || \
    false)

static inline void _nocheck__trace_dbus_audio_put_buffer_out(size_t pos, size_t size)
{
    if (trace_event_get_state(TRACE_DBUS_AUDIO_PUT_BUFFER_OUT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 18 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:dbus_audio_put_buffer_out " "buf_pos = %zu, buf_size = %zu" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , pos, size);
#line 401 "trace/trace-audio.h"
        } else {
#line 18 "../audio/trace-events"
            qemu_log("dbus_audio_put_buffer_out " "buf_pos = %zu, buf_size = %zu" "\n", pos, size);
#line 405 "trace/trace-audio.h"
        }
    }
}

static inline void trace_dbus_audio_put_buffer_out(size_t pos, size_t size)
{
    if (true) {
        _nocheck__trace_dbus_audio_put_buffer_out(pos, size);
    }
}

#define TRACE_DBUS_AUDIO_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_DBUS_AUDIO_READ) || \
    false)

static inline void _nocheck__trace_dbus_audio_read(size_t len)
{
    if (trace_event_get_state(TRACE_DBUS_AUDIO_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 19 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:dbus_audio_read " "len = %zu" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , len);
#line 432 "trace/trace-audio.h"
        } else {
#line 19 "../audio/trace-events"
            qemu_log("dbus_audio_read " "len = %zu" "\n", len);
#line 436 "trace/trace-audio.h"
        }
    }
}

static inline void trace_dbus_audio_read(size_t len)
{
    if (true) {
        _nocheck__trace_dbus_audio_read(len);
    }
}

#define TRACE_PW_STATE_CHANGED_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PW_STATE_CHANGED) || \
    false)

static inline void _nocheck__trace_pw_state_changed(int nodeid, const char * s)
{
    if (trace_event_get_state(TRACE_PW_STATE_CHANGED) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 22 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:pw_state_changed " "node id: %d stream state: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , nodeid, s);
#line 463 "trace/trace-audio.h"
        } else {
#line 22 "../audio/trace-events"
            qemu_log("pw_state_changed " "node id: %d stream state: %s" "\n", nodeid, s);
#line 467 "trace/trace-audio.h"
        }
    }
}

static inline void trace_pw_state_changed(int nodeid, const char * s)
{
    if (true) {
        _nocheck__trace_pw_state_changed(nodeid, s);
    }
}

#define TRACE_PW_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PW_READ) || \
    false)

static inline void _nocheck__trace_pw_read(int32_t avail, uint32_t index, size_t len)
{
    if (trace_event_get_state(TRACE_PW_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 23 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:pw_read " "avail=%d index=%u len=%zu" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , avail, index, len);
#line 494 "trace/trace-audio.h"
        } else {
#line 23 "../audio/trace-events"
            qemu_log("pw_read " "avail=%d index=%u len=%zu" "\n", avail, index, len);
#line 498 "trace/trace-audio.h"
        }
    }
}

static inline void trace_pw_read(int32_t avail, uint32_t index, size_t len)
{
    if (true) {
        _nocheck__trace_pw_read(avail, index, len);
    }
}

#define TRACE_PW_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PW_WRITE) || \
    false)

static inline void _nocheck__trace_pw_write(int32_t filled, int32_t avail, uint32_t index, size_t len)
{
    if (trace_event_get_state(TRACE_PW_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 24 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:pw_write " "filled=%d avail=%d index=%u len=%zu" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , filled, avail, index, len);
#line 525 "trace/trace-audio.h"
        } else {
#line 24 "../audio/trace-events"
            qemu_log("pw_write " "filled=%d avail=%d index=%u len=%zu" "\n", filled, avail, index, len);
#line 529 "trace/trace-audio.h"
        }
    }
}

static inline void trace_pw_write(int32_t filled, int32_t avail, uint32_t index, size_t len)
{
    if (true) {
        _nocheck__trace_pw_write(filled, avail, index, len);
    }
}

#define TRACE_PW_VOL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PW_VOL) || \
    false)

static inline void _nocheck__trace_pw_vol(const char * ret)
{
    if (trace_event_get_state(TRACE_PW_VOL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 25 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:pw_vol " "set volume: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , ret);
#line 556 "trace/trace-audio.h"
        } else {
#line 25 "../audio/trace-events"
            qemu_log("pw_vol " "set volume: %s" "\n", ret);
#line 560 "trace/trace-audio.h"
        }
    }
}

static inline void trace_pw_vol(const char * ret)
{
    if (true) {
        _nocheck__trace_pw_vol(ret);
    }
}

#define TRACE_PW_PERIOD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PW_PERIOD) || \
    false)

static inline void _nocheck__trace_pw_period(uint64_t quantum, uint32_t rate)
{
    if (trace_event_get_state(TRACE_PW_PERIOD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 26 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:pw_period " "period =%" PRIu64 "/%u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , quantum, rate);
#line 587 "trace/trace-audio.h"
        } else {
#line 26 "../audio/trace-events"
            qemu_log("pw_period " "period =%" PRIu64 "/%u" "\n", quantum, rate);
#line 591 "trace/trace-audio.h"
        }
    }
}

static inline void trace_pw_period(uint64_t quantum, uint32_t rate)
{
    if (true) {
        _nocheck__trace_pw_period(quantum, rate);
    }
}

#define TRACE_PW_AUDIO_INIT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_PW_AUDIO_INIT) || \
    false)

static inline void _nocheck__trace_pw_audio_init(void)
{
    if (trace_event_get_state(TRACE_PW_AUDIO_INIT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 27 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:pw_audio_init " "Initialize PipeWire context" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 618 "trace/trace-audio.h"
        } else {
#line 27 "../audio/trace-events"
            qemu_log("pw_audio_init " "Initialize PipeWire context" "\n");
#line 622 "trace/trace-audio.h"
        }
    }
}

static inline void trace_pw_audio_init(void)
{
    if (true) {
        _nocheck__trace_pw_audio_init();
    }
}

#define TRACE_AUDIO_TIMER_START_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_AUDIO_TIMER_START) || \
    false)

static inline void _nocheck__trace_audio_timer_start(int interval)
{
    if (trace_event_get_state(TRACE_AUDIO_TIMER_START) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 30 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:audio_timer_start " "interval %d ms" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , interval);
#line 649 "trace/trace-audio.h"
        } else {
#line 30 "../audio/trace-events"
            qemu_log("audio_timer_start " "interval %d ms" "\n", interval);
#line 653 "trace/trace-audio.h"
        }
    }
}

static inline void trace_audio_timer_start(int interval)
{
    if (true) {
        _nocheck__trace_audio_timer_start(interval);
    }
}

#define TRACE_AUDIO_TIMER_STOP_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_AUDIO_TIMER_STOP) || \
    false)

static inline void _nocheck__trace_audio_timer_stop(void)
{
    if (trace_event_get_state(TRACE_AUDIO_TIMER_STOP) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 31 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:audio_timer_stop " "" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 680 "trace/trace-audio.h"
        } else {
#line 31 "../audio/trace-events"
            qemu_log("audio_timer_stop " "" "\n");
#line 684 "trace/trace-audio.h"
        }
    }
}

static inline void trace_audio_timer_stop(void)
{
    if (true) {
        _nocheck__trace_audio_timer_stop();
    }
}

#define TRACE_AUDIO_TIMER_DELAYED_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_AUDIO_TIMER_DELAYED) || \
    false)

static inline void _nocheck__trace_audio_timer_delayed(int interval)
{
    if (trace_event_get_state(TRACE_AUDIO_TIMER_DELAYED) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 32 "../audio/trace-events"
            qemu_log("%d@%zu.%06zu:audio_timer_delayed " "interval %d ms" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , interval);
#line 711 "trace/trace-audio.h"
        } else {
#line 32 "../audio/trace-events"
            qemu_log("audio_timer_delayed " "interval %d ms" "\n", interval);
#line 715 "trace/trace-audio.h"
        }
    }
}

static inline void trace_audio_timer_delayed(int interval)
{
    if (true) {
        _nocheck__trace_audio_timer_delayed(interval);
    }
}
#endif /* TRACE_AUDIO_GENERATED_TRACERS_H */