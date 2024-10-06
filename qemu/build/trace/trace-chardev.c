/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-chardev.h"

uint16_t _TRACE_WCT_INIT_DSTATE;
uint16_t _TRACE_WCT_CMD_RE_DSTATE;
uint16_t _TRACE_WCT_CMD_ST_DSTATE;
uint16_t _TRACE_WCT_CMD_SP_DSTATE;
uint16_t _TRACE_WCT_CMD_TS_DSTATE;
uint16_t _TRACE_WCT_CMD_OTHER_DSTATE;
uint16_t _TRACE_WCT_SPEED_DSTATE;
uint16_t _TRACE_SPICE_CHR_DISCARD_WRITE_DSTATE;
uint16_t _TRACE_SPICE_VMC_WRITE_DSTATE;
uint16_t _TRACE_SPICE_VMC_READ_DSTATE;
uint16_t _TRACE_SPICE_VMC_REGISTER_INTERFACE_DSTATE;
uint16_t _TRACE_SPICE_VMC_UNREGISTER_INTERFACE_DSTATE;
uint16_t _TRACE_SPICE_VMC_EVENT_DSTATE;
uint16_t _TRACE_CHR_SOCKET_POLL_ERR_DSTATE;
uint16_t _TRACE_CHR_SOCKET_RECV_ERR_DSTATE;
uint16_t _TRACE_CHR_SOCKET_RECV_EOF_DSTATE;
uint16_t _TRACE_CHR_SOCKET_WRITE_ERR_DSTATE;
uint16_t _TRACE_CHR_SOCKET_DISCONNECT_DSTATE;
uint16_t _TRACE_CHR_SOCKET_HANGUP_DSTATE;
uint16_t _TRACE_CHR_SOCKET_WS_HANDSHAKE_ERR_DSTATE;
uint16_t _TRACE_CHR_SOCKET_TLS_HANDSHAKE_ERR_DSTATE;
uint16_t _TRACE_CHR_SOCKET_TLS_INIT_ERR_DSTATE;
TraceEvent _TRACE_WCT_INIT_EVENT = {
    .id = 0,
    .name = "wct_init",
    .sstate = TRACE_WCT_INIT_ENABLED,
    .dstate = &_TRACE_WCT_INIT_DSTATE 
};
TraceEvent _TRACE_WCT_CMD_RE_EVENT = {
    .id = 0,
    .name = "wct_cmd_re",
    .sstate = TRACE_WCT_CMD_RE_ENABLED,
    .dstate = &_TRACE_WCT_CMD_RE_DSTATE 
};
TraceEvent _TRACE_WCT_CMD_ST_EVENT = {
    .id = 0,
    .name = "wct_cmd_st",
    .sstate = TRACE_WCT_CMD_ST_ENABLED,
    .dstate = &_TRACE_WCT_CMD_ST_DSTATE 
};
TraceEvent _TRACE_WCT_CMD_SP_EVENT = {
    .id = 0,
    .name = "wct_cmd_sp",
    .sstate = TRACE_WCT_CMD_SP_ENABLED,
    .dstate = &_TRACE_WCT_CMD_SP_DSTATE 
};
TraceEvent _TRACE_WCT_CMD_TS_EVENT = {
    .id = 0,
    .name = "wct_cmd_ts",
    .sstate = TRACE_WCT_CMD_TS_ENABLED,
    .dstate = &_TRACE_WCT_CMD_TS_DSTATE 
};
TraceEvent _TRACE_WCT_CMD_OTHER_EVENT = {
    .id = 0,
    .name = "wct_cmd_other",
    .sstate = TRACE_WCT_CMD_OTHER_ENABLED,
    .dstate = &_TRACE_WCT_CMD_OTHER_DSTATE 
};
TraceEvent _TRACE_WCT_SPEED_EVENT = {
    .id = 0,
    .name = "wct_speed",
    .sstate = TRACE_WCT_SPEED_ENABLED,
    .dstate = &_TRACE_WCT_SPEED_DSTATE 
};
TraceEvent _TRACE_SPICE_CHR_DISCARD_WRITE_EVENT = {
    .id = 0,
    .name = "spice_chr_discard_write",
    .sstate = TRACE_SPICE_CHR_DISCARD_WRITE_ENABLED,
    .dstate = &_TRACE_SPICE_CHR_DISCARD_WRITE_DSTATE 
};
TraceEvent _TRACE_SPICE_VMC_WRITE_EVENT = {
    .id = 0,
    .name = "spice_vmc_write",
    .sstate = TRACE_SPICE_VMC_WRITE_ENABLED,
    .dstate = &_TRACE_SPICE_VMC_WRITE_DSTATE 
};
TraceEvent _TRACE_SPICE_VMC_READ_EVENT = {
    .id = 0,
    .name = "spice_vmc_read",
    .sstate = TRACE_SPICE_VMC_READ_ENABLED,
    .dstate = &_TRACE_SPICE_VMC_READ_DSTATE 
};
TraceEvent _TRACE_SPICE_VMC_REGISTER_INTERFACE_EVENT = {
    .id = 0,
    .name = "spice_vmc_register_interface",
    .sstate = TRACE_SPICE_VMC_REGISTER_INTERFACE_ENABLED,
    .dstate = &_TRACE_SPICE_VMC_REGISTER_INTERFACE_DSTATE 
};
TraceEvent _TRACE_SPICE_VMC_UNREGISTER_INTERFACE_EVENT = {
    .id = 0,
    .name = "spice_vmc_unregister_interface",
    .sstate = TRACE_SPICE_VMC_UNREGISTER_INTERFACE_ENABLED,
    .dstate = &_TRACE_SPICE_VMC_UNREGISTER_INTERFACE_DSTATE 
};
TraceEvent _TRACE_SPICE_VMC_EVENT_EVENT = {
    .id = 0,
    .name = "spice_vmc_event",
    .sstate = TRACE_SPICE_VMC_EVENT_ENABLED,
    .dstate = &_TRACE_SPICE_VMC_EVENT_DSTATE 
};
TraceEvent _TRACE_CHR_SOCKET_POLL_ERR_EVENT = {
    .id = 0,
    .name = "chr_socket_poll_err",
    .sstate = TRACE_CHR_SOCKET_POLL_ERR_ENABLED,
    .dstate = &_TRACE_CHR_SOCKET_POLL_ERR_DSTATE 
};
TraceEvent _TRACE_CHR_SOCKET_RECV_ERR_EVENT = {
    .id = 0,
    .name = "chr_socket_recv_err",
    .sstate = TRACE_CHR_SOCKET_RECV_ERR_ENABLED,
    .dstate = &_TRACE_CHR_SOCKET_RECV_ERR_DSTATE 
};
TraceEvent _TRACE_CHR_SOCKET_RECV_EOF_EVENT = {
    .id = 0,
    .name = "chr_socket_recv_eof",
    .sstate = TRACE_CHR_SOCKET_RECV_EOF_ENABLED,
    .dstate = &_TRACE_CHR_SOCKET_RECV_EOF_DSTATE 
};
TraceEvent _TRACE_CHR_SOCKET_WRITE_ERR_EVENT = {
    .id = 0,
    .name = "chr_socket_write_err",
    .sstate = TRACE_CHR_SOCKET_WRITE_ERR_ENABLED,
    .dstate = &_TRACE_CHR_SOCKET_WRITE_ERR_DSTATE 
};
TraceEvent _TRACE_CHR_SOCKET_DISCONNECT_EVENT = {
    .id = 0,
    .name = "chr_socket_disconnect",
    .sstate = TRACE_CHR_SOCKET_DISCONNECT_ENABLED,
    .dstate = &_TRACE_CHR_SOCKET_DISCONNECT_DSTATE 
};
TraceEvent _TRACE_CHR_SOCKET_HANGUP_EVENT = {
    .id = 0,
    .name = "chr_socket_hangup",
    .sstate = TRACE_CHR_SOCKET_HANGUP_ENABLED,
    .dstate = &_TRACE_CHR_SOCKET_HANGUP_DSTATE 
};
TraceEvent _TRACE_CHR_SOCKET_WS_HANDSHAKE_ERR_EVENT = {
    .id = 0,
    .name = "chr_socket_ws_handshake_err",
    .sstate = TRACE_CHR_SOCKET_WS_HANDSHAKE_ERR_ENABLED,
    .dstate = &_TRACE_CHR_SOCKET_WS_HANDSHAKE_ERR_DSTATE 
};
TraceEvent _TRACE_CHR_SOCKET_TLS_HANDSHAKE_ERR_EVENT = {
    .id = 0,
    .name = "chr_socket_tls_handshake_err",
    .sstate = TRACE_CHR_SOCKET_TLS_HANDSHAKE_ERR_ENABLED,
    .dstate = &_TRACE_CHR_SOCKET_TLS_HANDSHAKE_ERR_DSTATE 
};
TraceEvent _TRACE_CHR_SOCKET_TLS_INIT_ERR_EVENT = {
    .id = 0,
    .name = "chr_socket_tls_init_err",
    .sstate = TRACE_CHR_SOCKET_TLS_INIT_ERR_ENABLED,
    .dstate = &_TRACE_CHR_SOCKET_TLS_INIT_ERR_DSTATE 
};
TraceEvent *chardev_trace_events[] = {
    &_TRACE_WCT_INIT_EVENT,
    &_TRACE_WCT_CMD_RE_EVENT,
    &_TRACE_WCT_CMD_ST_EVENT,
    &_TRACE_WCT_CMD_SP_EVENT,
    &_TRACE_WCT_CMD_TS_EVENT,
    &_TRACE_WCT_CMD_OTHER_EVENT,
    &_TRACE_WCT_SPEED_EVENT,
    &_TRACE_SPICE_CHR_DISCARD_WRITE_EVENT,
    &_TRACE_SPICE_VMC_WRITE_EVENT,
    &_TRACE_SPICE_VMC_READ_EVENT,
    &_TRACE_SPICE_VMC_REGISTER_INTERFACE_EVENT,
    &_TRACE_SPICE_VMC_UNREGISTER_INTERFACE_EVENT,
    &_TRACE_SPICE_VMC_EVENT_EVENT,
    &_TRACE_CHR_SOCKET_POLL_ERR_EVENT,
    &_TRACE_CHR_SOCKET_RECV_ERR_EVENT,
    &_TRACE_CHR_SOCKET_RECV_EOF_EVENT,
    &_TRACE_CHR_SOCKET_WRITE_ERR_EVENT,
    &_TRACE_CHR_SOCKET_DISCONNECT_EVENT,
    &_TRACE_CHR_SOCKET_HANGUP_EVENT,
    &_TRACE_CHR_SOCKET_WS_HANDSHAKE_ERR_EVENT,
    &_TRACE_CHR_SOCKET_TLS_HANDSHAKE_ERR_EVENT,
    &_TRACE_CHR_SOCKET_TLS_INIT_ERR_EVENT,
  NULL,
};

static void trace_chardev_register_events(void)
{
    trace_event_register_group(chardev_trace_events);
}
trace_init(trace_chardev_register_events)
