/*
 * QEMU Hypervisor.framework (HVF) support -- ARM specifics
 *
 * Copyright (c) 2021 Alexander Graf
 *
 * This work is licensed under the terms of the GNU GPL, version 2 or later.
 * See the COPYING file in the top-level directory.
 *
 */

#ifndef QEMU_HVF_ARM_H
#define QEMU_HVF_ARM_H

#include "cpu.h"

/**
 * hvf_arm_init_debug() - initialize guest debug capabilities
 *
 * Should be called only once before using guest debug capabilities.
 */
void hvf_arm_init_debug(void);

void hvf_arm_set_cpu_features_from_host(ARMCPU *cpu);

#endif
