/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-qapi_commands_dump_trace_events.h"

uint16_t _TRACE_QMP_ENTER_DUMP_GUEST_MEMORY_DSTATE;
uint16_t _TRACE_QMP_EXIT_DUMP_GUEST_MEMORY_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_DUMP_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_DUMP_DSTATE;
uint16_t _TRACE_QMP_ENTER_QUERY_DUMP_GUEST_MEMORY_CAPABILITY_DSTATE;
uint16_t _TRACE_QMP_EXIT_QUERY_DUMP_GUEST_MEMORY_CAPABILITY_DSTATE;
TraceEvent _TRACE_QMP_ENTER_DUMP_GUEST_MEMORY_EVENT = {
    .id = 0,
    .name = "qmp_enter_dump_guest_memory",
    .sstate = TRACE_QMP_ENTER_DUMP_GUEST_MEMORY_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_DUMP_GUEST_MEMORY_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_DUMP_GUEST_MEMORY_EVENT = {
    .id = 0,
    .name = "qmp_exit_dump_guest_memory",
    .sstate = TRACE_QMP_EXIT_DUMP_GUEST_MEMORY_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_DUMP_GUEST_MEMORY_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_DUMP_EVENT = {
    .id = 0,
    .name = "qmp_enter_query_dump",
    .sstate = TRACE_QMP_ENTER_QUERY_DUMP_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_DUMP_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_DUMP_EVENT = {
    .id = 0,
    .name = "qmp_exit_query_dump",
    .sstate = TRACE_QMP_EXIT_QUERY_DUMP_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_DUMP_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_QUERY_DUMP_GUEST_MEMORY_CAPABILITY_EVENT = {
    .id = 0,
    .name = "qmp_enter_query_dump_guest_memory_capability",
    .sstate = TRACE_QMP_ENTER_QUERY_DUMP_GUEST_MEMORY_CAPABILITY_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_QUERY_DUMP_GUEST_MEMORY_CAPABILITY_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_QUERY_DUMP_GUEST_MEMORY_CAPABILITY_EVENT = {
    .id = 0,
    .name = "qmp_exit_query_dump_guest_memory_capability",
    .sstate = TRACE_QMP_EXIT_QUERY_DUMP_GUEST_MEMORY_CAPABILITY_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_QUERY_DUMP_GUEST_MEMORY_CAPABILITY_DSTATE 
};
TraceEvent *qapi_commands_dump_trace_events_trace_events[] = {
    &_TRACE_QMP_ENTER_DUMP_GUEST_MEMORY_EVENT,
    &_TRACE_QMP_EXIT_DUMP_GUEST_MEMORY_EVENT,
    &_TRACE_QMP_ENTER_QUERY_DUMP_EVENT,
    &_TRACE_QMP_EXIT_QUERY_DUMP_EVENT,
    &_TRACE_QMP_ENTER_QUERY_DUMP_GUEST_MEMORY_CAPABILITY_EVENT,
    &_TRACE_QMP_EXIT_QUERY_DUMP_GUEST_MEMORY_CAPABILITY_EVENT,
  NULL,
};

static void trace_qapi_commands_dump_trace_events_register_events(void)
{
    trace_event_register_group(qapi_commands_dump_trace_events_trace_events);
}
trace_init(trace_qapi_commands_dump_trace_events_register_events)