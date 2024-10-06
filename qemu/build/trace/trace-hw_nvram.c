/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-hw_nvram.h"

uint16_t _TRACE_NVRAM_READ_DSTATE;
uint16_t _TRACE_NVRAM_WRITE_DSTATE;
uint16_t _TRACE_FW_CFG_SELECT_DSTATE;
uint16_t _TRACE_FW_CFG_READ_DSTATE;
uint16_t _TRACE_FW_CFG_ADD_BYTES_DSTATE;
uint16_t _TRACE_FW_CFG_ADD_FILE_DSTATE;
uint16_t _TRACE_FW_CFG_ADD_STRING_DSTATE;
uint16_t _TRACE_FW_CFG_ADD_I16_DSTATE;
uint16_t _TRACE_FW_CFG_ADD_I32_DSTATE;
uint16_t _TRACE_FW_CFG_ADD_I64_DSTATE;
uint16_t _TRACE_MACIO_NVRAM_READ_DSTATE;
uint16_t _TRACE_MACIO_NVRAM_WRITE_DSTATE;
TraceEvent _TRACE_NVRAM_READ_EVENT = {
    .id = 0,
    .name = "nvram_read",
    .sstate = TRACE_NVRAM_READ_ENABLED,
    .dstate = &_TRACE_NVRAM_READ_DSTATE 
};
TraceEvent _TRACE_NVRAM_WRITE_EVENT = {
    .id = 0,
    .name = "nvram_write",
    .sstate = TRACE_NVRAM_WRITE_ENABLED,
    .dstate = &_TRACE_NVRAM_WRITE_DSTATE 
};
TraceEvent _TRACE_FW_CFG_SELECT_EVENT = {
    .id = 0,
    .name = "fw_cfg_select",
    .sstate = TRACE_FW_CFG_SELECT_ENABLED,
    .dstate = &_TRACE_FW_CFG_SELECT_DSTATE 
};
TraceEvent _TRACE_FW_CFG_READ_EVENT = {
    .id = 0,
    .name = "fw_cfg_read",
    .sstate = TRACE_FW_CFG_READ_ENABLED,
    .dstate = &_TRACE_FW_CFG_READ_DSTATE 
};
TraceEvent _TRACE_FW_CFG_ADD_BYTES_EVENT = {
    .id = 0,
    .name = "fw_cfg_add_bytes",
    .sstate = TRACE_FW_CFG_ADD_BYTES_ENABLED,
    .dstate = &_TRACE_FW_CFG_ADD_BYTES_DSTATE 
};
TraceEvent _TRACE_FW_CFG_ADD_FILE_EVENT = {
    .id = 0,
    .name = "fw_cfg_add_file",
    .sstate = TRACE_FW_CFG_ADD_FILE_ENABLED,
    .dstate = &_TRACE_FW_CFG_ADD_FILE_DSTATE 
};
TraceEvent _TRACE_FW_CFG_ADD_STRING_EVENT = {
    .id = 0,
    .name = "fw_cfg_add_string",
    .sstate = TRACE_FW_CFG_ADD_STRING_ENABLED,
    .dstate = &_TRACE_FW_CFG_ADD_STRING_DSTATE 
};
TraceEvent _TRACE_FW_CFG_ADD_I16_EVENT = {
    .id = 0,
    .name = "fw_cfg_add_i16",
    .sstate = TRACE_FW_CFG_ADD_I16_ENABLED,
    .dstate = &_TRACE_FW_CFG_ADD_I16_DSTATE 
};
TraceEvent _TRACE_FW_CFG_ADD_I32_EVENT = {
    .id = 0,
    .name = "fw_cfg_add_i32",
    .sstate = TRACE_FW_CFG_ADD_I32_ENABLED,
    .dstate = &_TRACE_FW_CFG_ADD_I32_DSTATE 
};
TraceEvent _TRACE_FW_CFG_ADD_I64_EVENT = {
    .id = 0,
    .name = "fw_cfg_add_i64",
    .sstate = TRACE_FW_CFG_ADD_I64_ENABLED,
    .dstate = &_TRACE_FW_CFG_ADD_I64_DSTATE 
};
TraceEvent _TRACE_MACIO_NVRAM_READ_EVENT = {
    .id = 0,
    .name = "macio_nvram_read",
    .sstate = TRACE_MACIO_NVRAM_READ_ENABLED,
    .dstate = &_TRACE_MACIO_NVRAM_READ_DSTATE 
};
TraceEvent _TRACE_MACIO_NVRAM_WRITE_EVENT = {
    .id = 0,
    .name = "macio_nvram_write",
    .sstate = TRACE_MACIO_NVRAM_WRITE_ENABLED,
    .dstate = &_TRACE_MACIO_NVRAM_WRITE_DSTATE 
};
TraceEvent *hw_nvram_trace_events[] = {
    &_TRACE_NVRAM_READ_EVENT,
    &_TRACE_NVRAM_WRITE_EVENT,
    &_TRACE_FW_CFG_SELECT_EVENT,
    &_TRACE_FW_CFG_READ_EVENT,
    &_TRACE_FW_CFG_ADD_BYTES_EVENT,
    &_TRACE_FW_CFG_ADD_FILE_EVENT,
    &_TRACE_FW_CFG_ADD_STRING_EVENT,
    &_TRACE_FW_CFG_ADD_I16_EVENT,
    &_TRACE_FW_CFG_ADD_I32_EVENT,
    &_TRACE_FW_CFG_ADD_I64_EVENT,
    &_TRACE_MACIO_NVRAM_READ_EVENT,
    &_TRACE_MACIO_NVRAM_WRITE_EVENT,
  NULL,
};

static void trace_hw_nvram_register_events(void)
{
    trace_event_register_group(hw_nvram_trace_events);
}
trace_init(trace_hw_nvram_register_events)
