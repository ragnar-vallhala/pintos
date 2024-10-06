/* AUTOMATICALLY GENERATED by qapi-gen.py DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP commands
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_COMMANDS_MACHINE_TARGET_H
#define QAPI_COMMANDS_MACHINE_TARGET_H

#include "qapi-commands-machine-common.h"
#include "qapi-types-machine-target.h"

#if defined(TARGET_S390X)
CpuModelCompareInfo *qmp_query_cpu_model_comparison(CpuModelInfo *modela, CpuModelInfo *modelb, Error **errp);
void qmp_marshal_query_cpu_model_comparison(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TARGET_S390X) */
#if defined(TARGET_S390X)
CpuModelBaselineInfo *qmp_query_cpu_model_baseline(CpuModelInfo *modela, CpuModelInfo *modelb, Error **errp);
void qmp_marshal_query_cpu_model_baseline(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TARGET_S390X) */
#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) || defined(TARGET_LOONGARCH64) || defined(TARGET_RISCV)
CpuModelExpansionInfo *qmp_query_cpu_model_expansion(CpuModelExpansionType type, CpuModelInfo *model, Error **errp);
void qmp_marshal_query_cpu_model_expansion(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) || defined(TARGET_LOONGARCH64) || defined(TARGET_RISCV) */
#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) || defined(TARGET_RISCV)
CpuDefinitionInfoList *qmp_query_cpu_definitions(Error **errp);
void qmp_marshal_query_cpu_definitions(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) || defined(TARGET_LOONGARCH64) || defined(TARGET_RISCV) */
#if defined(TARGET_S390X) && defined(CONFIG_KVM)
void qmp_set_cpu_topology(uint16_t core_id, bool has_socket_id, uint16_t socket_id, bool has_book_id, uint16_t book_id, bool has_drawer_id, uint16_t drawer_id, bool has_entitlement, CpuS390Entitlement entitlement, bool has_dedicated, bool dedicated, Error **errp);
void qmp_marshal_set_cpu_topology(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TARGET_S390X) && defined(CONFIG_KVM) */
#if defined(TARGET_S390X) && defined(CONFIG_KVM)
CpuPolarizationInfo *qmp_query_s390x_cpu_polarization(Error **errp);
void qmp_marshal_query_s390x_cpu_polarization(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TARGET_S390X) && defined(CONFIG_KVM) */

#endif /* QAPI_COMMANDS_MACHINE_TARGET_H */