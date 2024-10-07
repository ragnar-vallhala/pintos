/* AUTOMATICALLY GENERATED by qapi-gen.py DO NOT MODIFY */

/*
 * Schema-defined QAPI visitors
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_VISIT_VFIO_H
#define QAPI_VISIT_VFIO_H

#include "qapi/qapi-builtin-visit.h"
#include "qapi-types-vfio.h"


bool visit_type_VfioMigrationState(Visitor *v, const char *name,
                 VfioMigrationState *obj, Error **errp);

bool visit_type_q_obj_VFIO_MIGRATION_arg_members(Visitor *v, q_obj_VFIO_MIGRATION_arg *obj, Error **errp);

#endif /* QAPI_VISIT_VFIO_H */