/* AUTOMATICALLY GENERATED by qapi-gen.py DO NOT MODIFY */

/*
 * Schema-defined QAPI types
 *
 * Copyright IBM, Corp. 2011
 * Copyright (c) 2013-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QGA_QAPI_TYPES_H
#define QGA_QAPI_TYPES_H

#include "qapi/qapi-builtin-types.h"

typedef struct q_obj_guest_sync_delimited_arg q_obj_guest_sync_delimited_arg;

typedef struct q_obj_guest_sync_arg q_obj_guest_sync_arg;

typedef struct q_obj_guest_set_time_arg q_obj_guest_set_time_arg;

typedef struct GuestAgentCommandInfo GuestAgentCommandInfo;

typedef struct GuestAgentCommandInfoList GuestAgentCommandInfoList;

typedef struct GuestAgentInfo GuestAgentInfo;

typedef struct q_obj_guest_shutdown_arg q_obj_guest_shutdown_arg;

typedef struct q_obj_guest_file_open_arg q_obj_guest_file_open_arg;

typedef struct q_obj_guest_file_close_arg q_obj_guest_file_close_arg;

typedef struct GuestFileRead GuestFileRead;

typedef struct q_obj_guest_file_read_arg q_obj_guest_file_read_arg;

typedef struct GuestFileWrite GuestFileWrite;

typedef struct q_obj_guest_file_write_arg q_obj_guest_file_write_arg;

typedef struct GuestFileSeek GuestFileSeek;

typedef enum QGASeek {
    QGA_SEEK_SET,
    QGA_SEEK_CUR,
    QGA_SEEK_END,
    QGA_SEEK__MAX,
} QGASeek;

#define QGASeek_str(val) \
    qapi_enum_lookup(&QGASeek_lookup, (val))

extern const QEnumLookup QGASeek_lookup;

typedef struct GuestFileWhence GuestFileWhence;

typedef struct q_obj_guest_file_seek_arg q_obj_guest_file_seek_arg;

typedef struct q_obj_guest_file_flush_arg q_obj_guest_file_flush_arg;

#if defined(CONFIG_WIN32) || defined(CONFIG_FSFREEZE)
typedef enum GuestFsfreezeStatus {
    GUEST_FSFREEZE_STATUS_THAWED,
    GUEST_FSFREEZE_STATUS_FROZEN,
    GUEST_FSFREEZE_STATUS__MAX,
} GuestFsfreezeStatus;

#define GuestFsfreezeStatus_str(val) \
    qapi_enum_lookup(&GuestFsfreezeStatus_lookup, (val))

extern const QEnumLookup GuestFsfreezeStatus_lookup;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_FSFREEZE) */

#if defined(CONFIG_WIN32) || defined(CONFIG_FSFREEZE)
typedef struct q_obj_guest_fsfreeze_freeze_list_arg q_obj_guest_fsfreeze_freeze_list_arg;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_FSFREEZE) */

#if defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM)
typedef struct GuestFilesystemTrimResult GuestFilesystemTrimResult;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM) */

#if defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM)
typedef struct GuestFilesystemTrimResultList GuestFilesystemTrimResultList;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM) */

#if defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM)
typedef struct GuestFilesystemTrimResponse GuestFilesystemTrimResponse;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM) */

#if defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM)
typedef struct q_obj_guest_fstrim_arg q_obj_guest_fstrim_arg;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM) */

#if defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS)
typedef enum GuestIpAddressType {
    GUEST_IP_ADDRESS_TYPE_IPV4,
    GUEST_IP_ADDRESS_TYPE_IPV6,
    GUEST_IP_ADDRESS_TYPE__MAX,
} GuestIpAddressType;

#define GuestIpAddressType_str(val) \
    qapi_enum_lookup(&GuestIpAddressType_lookup, (val))

extern const QEnumLookup GuestIpAddressType_lookup;
#endif /* defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS) */

#if defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS)
typedef struct GuestIpAddress GuestIpAddress;
#endif /* defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS) */

#if defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS)
typedef struct GuestNetworkInterfaceStat GuestNetworkInterfaceStat;
#endif /* defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS) */

#if defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS)
typedef struct GuestIpAddressList GuestIpAddressList;
#endif /* defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS) */

#if defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS)
typedef struct GuestNetworkInterface GuestNetworkInterface;
#endif /* defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS) */

#if defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS)
typedef struct GuestNetworkInterfaceList GuestNetworkInterfaceList;
#endif /* defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS) */

#if defined(CONFIG_LINUX) || defined(CONFIG_WIN32)
typedef struct GuestLogicalProcessor GuestLogicalProcessor;
#endif /* defined(CONFIG_LINUX) || defined(CONFIG_WIN32) */

#if defined(CONFIG_LINUX) || defined(CONFIG_WIN32)
typedef struct GuestLogicalProcessorList GuestLogicalProcessorList;
#endif /* defined(CONFIG_LINUX) || defined(CONFIG_WIN32) */

#if defined(CONFIG_LINUX)
typedef struct q_obj_guest_set_vcpus_arg q_obj_guest_set_vcpus_arg;
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX)
typedef enum GuestDiskBusType {
    GUEST_DISK_BUS_TYPE_IDE,
    GUEST_DISK_BUS_TYPE_FDC,
    GUEST_DISK_BUS_TYPE_SCSI,
    GUEST_DISK_BUS_TYPE_VIRTIO,
    GUEST_DISK_BUS_TYPE_XEN,
    GUEST_DISK_BUS_TYPE_USB,
    GUEST_DISK_BUS_TYPE_UML,
    GUEST_DISK_BUS_TYPE_SATA,
    GUEST_DISK_BUS_TYPE_SD,
    GUEST_DISK_BUS_TYPE_UNKNOWN,
    GUEST_DISK_BUS_TYPE_IEEE1394,
    GUEST_DISK_BUS_TYPE_SSA,
    GUEST_DISK_BUS_TYPE_FIBRE,
    GUEST_DISK_BUS_TYPE_RAID,
    GUEST_DISK_BUS_TYPE_ISCSI,
    GUEST_DISK_BUS_TYPE_SAS,
    GUEST_DISK_BUS_TYPE_MMC,
    GUEST_DISK_BUS_TYPE_VIRTUAL,
    GUEST_DISK_BUS_TYPE_FILE_BACKED_VIRTUAL,
    GUEST_DISK_BUS_TYPE_NVME,
    GUEST_DISK_BUS_TYPE__MAX,
} GuestDiskBusType;

#define GuestDiskBusType_str(val) \
    qapi_enum_lookup(&GuestDiskBusType_lookup, (val))

extern const QEnumLookup GuestDiskBusType_lookup;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX)
typedef struct GuestPCIAddress GuestPCIAddress;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX)
typedef struct GuestCCWAddress GuestCCWAddress;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX)
typedef struct GuestDiskAddress GuestDiskAddress;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV)
typedef struct GuestNVMeSmart GuestNVMeSmart;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV)
typedef struct q_obj_GuestDiskSmart_base q_obj_GuestDiskSmart_base;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV)
typedef struct GuestDiskSmart GuestDiskSmart;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV)
typedef struct GuestDiskInfo GuestDiskInfo;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV)
typedef struct GuestDiskInfoList GuestDiskInfoList;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX)
typedef struct GuestDiskAddressList GuestDiskAddressList;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX)
typedef struct GuestFilesystemInfo GuestFilesystemInfo;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX)
typedef struct GuestFilesystemInfoList GuestFilesystemInfoList;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX) || defined(CONFIG_FREEBSD)
typedef struct q_obj_guest_set_user_password_arg q_obj_guest_set_user_password_arg;
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) || defined(CONFIG_FREEBSD) */

#if defined(CONFIG_LINUX)
typedef struct GuestMemoryBlock GuestMemoryBlock;
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
typedef struct GuestMemoryBlockList GuestMemoryBlockList;
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
typedef enum GuestMemoryBlockResponseType {
    GUEST_MEMORY_BLOCK_RESPONSE_TYPE_SUCCESS,
    GUEST_MEMORY_BLOCK_RESPONSE_TYPE_NOT_FOUND,
    GUEST_MEMORY_BLOCK_RESPONSE_TYPE_OPERATION_NOT_SUPPORTED,
    GUEST_MEMORY_BLOCK_RESPONSE_TYPE_OPERATION_FAILED,
    GUEST_MEMORY_BLOCK_RESPONSE_TYPE__MAX,
} GuestMemoryBlockResponseType;

#define GuestMemoryBlockResponseType_str(val) \
    qapi_enum_lookup(&GuestMemoryBlockResponseType_lookup, (val))

extern const QEnumLookup GuestMemoryBlockResponseType_lookup;
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
typedef struct GuestMemoryBlockResponse GuestMemoryBlockResponse;
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
typedef struct q_obj_guest_set_memory_blocks_arg q_obj_guest_set_memory_blocks_arg;
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
typedef struct GuestMemoryBlockResponseList GuestMemoryBlockResponseList;
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
typedef struct GuestMemoryBlockInfo GuestMemoryBlockInfo;
#endif /* defined(CONFIG_LINUX) */

typedef struct GuestExecStatus GuestExecStatus;

typedef struct q_obj_guest_exec_status_arg q_obj_guest_exec_status_arg;

typedef struct GuestExec GuestExec;

typedef enum GuestExecCaptureOutputMode {
    GUEST_EXEC_CAPTURE_OUTPUT_MODE_NONE,
    GUEST_EXEC_CAPTURE_OUTPUT_MODE_STDOUT,
    GUEST_EXEC_CAPTURE_OUTPUT_MODE_STDERR,
    GUEST_EXEC_CAPTURE_OUTPUT_MODE_SEPARATED,
#if !defined(CONFIG_WIN32)
    GUEST_EXEC_CAPTURE_OUTPUT_MODE_MERGED,
#endif /* !defined(CONFIG_WIN32) */
    GUEST_EXEC_CAPTURE_OUTPUT_MODE__MAX,
} GuestExecCaptureOutputMode;

#define GuestExecCaptureOutputMode_str(val) \
    qapi_enum_lookup(&GuestExecCaptureOutputMode_lookup, (val))

extern const QEnumLookup GuestExecCaptureOutputMode_lookup;

typedef struct GuestExecCaptureOutput GuestExecCaptureOutput;

typedef struct q_obj_guest_exec_arg q_obj_guest_exec_arg;

typedef struct GuestHostName GuestHostName;

#if defined(CONFIG_WIN32) || defined(HAVE_UTMPX)
typedef struct GuestUser GuestUser;
#endif /* defined(CONFIG_WIN32) || defined(HAVE_UTMPX) */

#if defined(CONFIG_WIN32) || defined(HAVE_UTMPX)
typedef struct GuestUserList GuestUserList;
#endif /* defined(CONFIG_WIN32) || defined(HAVE_UTMPX) */

typedef struct GuestTimezone GuestTimezone;

typedef struct GuestOSInfo GuestOSInfo;

#if defined(CONFIG_WIN32)
typedef enum GuestDeviceType {
    GUEST_DEVICE_TYPE_PCI,
    GUEST_DEVICE_TYPE__MAX,
} GuestDeviceType;

#define GuestDeviceType_str(val) \
    qapi_enum_lookup(&GuestDeviceType_lookup, (val))

extern const QEnumLookup GuestDeviceType_lookup;
#endif /* defined(CONFIG_WIN32) */

#if defined(CONFIG_WIN32)
typedef struct GuestDeviceIdPCI GuestDeviceIdPCI;
#endif /* defined(CONFIG_WIN32) */

#if defined(CONFIG_WIN32)
typedef struct q_obj_GuestDeviceId_base q_obj_GuestDeviceId_base;
#endif /* defined(CONFIG_WIN32) */

#if defined(CONFIG_WIN32)
typedef struct GuestDeviceId GuestDeviceId;
#endif /* defined(CONFIG_WIN32) */

#if defined(CONFIG_WIN32)
typedef struct GuestDeviceInfo GuestDeviceInfo;
#endif /* defined(CONFIG_WIN32) */

#if defined(CONFIG_WIN32)
typedef struct GuestDeviceInfoList GuestDeviceInfoList;
#endif /* defined(CONFIG_WIN32) */

typedef struct GuestAuthorizedKeys GuestAuthorizedKeys;

typedef struct q_obj_guest_ssh_get_authorized_keys_arg q_obj_guest_ssh_get_authorized_keys_arg;

typedef struct q_obj_guest_ssh_add_authorized_keys_arg q_obj_guest_ssh_add_authorized_keys_arg;

typedef struct q_obj_guest_ssh_remove_authorized_keys_arg q_obj_guest_ssh_remove_authorized_keys_arg;

#if defined(CONFIG_LINUX)
typedef struct GuestDiskStats GuestDiskStats;
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
typedef struct GuestDiskStatsInfo GuestDiskStatsInfo;
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
typedef struct GuestDiskStatsInfoList GuestDiskStatsInfoList;
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
typedef enum GuestCpuStatsType {
    GUEST_CPU_STATS_TYPE_LINUX,
    GUEST_CPU_STATS_TYPE__MAX,
} GuestCpuStatsType;

#define GuestCpuStatsType_str(val) \
    qapi_enum_lookup(&GuestCpuStatsType_lookup, (val))

extern const QEnumLookup GuestCpuStatsType_lookup;
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
typedef struct GuestLinuxCpuStats GuestLinuxCpuStats;
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
typedef struct q_obj_GuestCpuStats_base q_obj_GuestCpuStats_base;
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
typedef struct GuestCpuStats GuestCpuStats;
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
typedef struct GuestCpuStatsList GuestCpuStatsList;
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
typedef struct GuestNetworkRoute GuestNetworkRoute;
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
typedef struct GuestNetworkRouteList GuestNetworkRouteList;
#endif /* defined(CONFIG_LINUX) */

struct q_obj_guest_sync_delimited_arg {
    int64_t id;
};

struct q_obj_guest_sync_arg {
    int64_t id;
};

struct q_obj_guest_set_time_arg {
    bool has_time;
    int64_t time;
};

struct GuestAgentCommandInfo {
    char *name;
    bool enabled;
    bool success_response;
};

void qapi_free_GuestAgentCommandInfo(GuestAgentCommandInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestAgentCommandInfo, qapi_free_GuestAgentCommandInfo)

struct GuestAgentCommandInfoList {
    GuestAgentCommandInfoList *next;
    GuestAgentCommandInfo *value;
};

void qapi_free_GuestAgentCommandInfoList(GuestAgentCommandInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestAgentCommandInfoList, qapi_free_GuestAgentCommandInfoList)

struct GuestAgentInfo {
    char *version;
    GuestAgentCommandInfoList *supported_commands;
};

void qapi_free_GuestAgentInfo(GuestAgentInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestAgentInfo, qapi_free_GuestAgentInfo)

struct q_obj_guest_shutdown_arg {
    char *mode;
};

struct q_obj_guest_file_open_arg {
    char *path;
    char *mode;
};

struct q_obj_guest_file_close_arg {
    int64_t handle;
};

struct GuestFileRead {
    int64_t count;
    char *buf_b64;
    bool eof;
};

void qapi_free_GuestFileRead(GuestFileRead *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFileRead, qapi_free_GuestFileRead)

struct q_obj_guest_file_read_arg {
    int64_t handle;
    bool has_count;
    int64_t count;
};

struct GuestFileWrite {
    int64_t count;
    bool eof;
};

void qapi_free_GuestFileWrite(GuestFileWrite *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFileWrite, qapi_free_GuestFileWrite)

struct q_obj_guest_file_write_arg {
    int64_t handle;
    char *buf_b64;
    bool has_count;
    int64_t count;
};

struct GuestFileSeek {
    int64_t position;
    bool eof;
};

void qapi_free_GuestFileSeek(GuestFileSeek *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFileSeek, qapi_free_GuestFileSeek)

struct GuestFileWhence {
    QType type;
    union { /* union tag is @type */
        int64_t value;
        QGASeek name;
    } u;
};

void qapi_free_GuestFileWhence(GuestFileWhence *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFileWhence, qapi_free_GuestFileWhence)

struct q_obj_guest_file_seek_arg {
    int64_t handle;
    int64_t offset;
    GuestFileWhence *whence;
};

struct q_obj_guest_file_flush_arg {
    int64_t handle;
};

#if defined(CONFIG_WIN32) || defined(CONFIG_FSFREEZE)
struct q_obj_guest_fsfreeze_freeze_list_arg {
    bool has_mountpoints;
    strList *mountpoints;
};
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_FSFREEZE) */

#if defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM)
struct GuestFilesystemTrimResult {
    char *path;
    bool has_trimmed;
    int64_t trimmed;
    bool has_minimum;
    int64_t minimum;
    char *error;
};
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM) */

#if defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM)
void qapi_free_GuestFilesystemTrimResult(GuestFilesystemTrimResult *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFilesystemTrimResult, qapi_free_GuestFilesystemTrimResult)
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM) */

#if defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM)
struct GuestFilesystemTrimResultList {
    GuestFilesystemTrimResultList *next;
    GuestFilesystemTrimResult *value;
};

void qapi_free_GuestFilesystemTrimResultList(GuestFilesystemTrimResultList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFilesystemTrimResultList, qapi_free_GuestFilesystemTrimResultList)
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM) */

#if defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM)
struct GuestFilesystemTrimResponse {
    GuestFilesystemTrimResultList *paths;
};
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM) */

#if defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM)
void qapi_free_GuestFilesystemTrimResponse(GuestFilesystemTrimResponse *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFilesystemTrimResponse, qapi_free_GuestFilesystemTrimResponse)
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM) */

#if defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM)
struct q_obj_guest_fstrim_arg {
    bool has_minimum;
    int64_t minimum;
};
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_FSTRIM) */

#if defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS)
struct GuestIpAddress {
    char *ip_address;
    GuestIpAddressType ip_address_type;
    int64_t prefix;
};
#endif /* defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS) */

#if defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS)
void qapi_free_GuestIpAddress(GuestIpAddress *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestIpAddress, qapi_free_GuestIpAddress)
#endif /* defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS) */

#if defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS)
struct GuestNetworkInterfaceStat {
    uint64_t rx_bytes;
    uint64_t rx_packets;
    uint64_t rx_errs;
    uint64_t rx_dropped;
    uint64_t tx_bytes;
    uint64_t tx_packets;
    uint64_t tx_errs;
    uint64_t tx_dropped;
};
#endif /* defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS) */

#if defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS)
void qapi_free_GuestNetworkInterfaceStat(GuestNetworkInterfaceStat *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestNetworkInterfaceStat, qapi_free_GuestNetworkInterfaceStat)
#endif /* defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS) */

#if defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS)
struct GuestIpAddressList {
    GuestIpAddressList *next;
    GuestIpAddress *value;
};

void qapi_free_GuestIpAddressList(GuestIpAddressList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestIpAddressList, qapi_free_GuestIpAddressList)
#endif /* defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS) */

#if defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS)
struct GuestNetworkInterface {
    char *name;
    char *hardware_address;
    bool has_ip_addresses;
    GuestIpAddressList *ip_addresses;
    GuestNetworkInterfaceStat *statistics;
};
#endif /* defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS) */

#if defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS)
void qapi_free_GuestNetworkInterface(GuestNetworkInterface *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestNetworkInterface, qapi_free_GuestNetworkInterface)
#endif /* defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS) */

#if defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS)
struct GuestNetworkInterfaceList {
    GuestNetworkInterfaceList *next;
    GuestNetworkInterface *value;
};

void qapi_free_GuestNetworkInterfaceList(GuestNetworkInterfaceList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestNetworkInterfaceList, qapi_free_GuestNetworkInterfaceList)
#endif /* defined(CONFIG_WIN32) || defined(HAVE_GETIFADDRS) */

#if defined(CONFIG_LINUX) || defined(CONFIG_WIN32)
struct GuestLogicalProcessor {
    int64_t logical_id;
    bool online;
    bool has_can_offline;
    bool can_offline;
};
#endif /* defined(CONFIG_LINUX) || defined(CONFIG_WIN32) */

#if defined(CONFIG_LINUX) || defined(CONFIG_WIN32)
void qapi_free_GuestLogicalProcessor(GuestLogicalProcessor *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestLogicalProcessor, qapi_free_GuestLogicalProcessor)
#endif /* defined(CONFIG_LINUX) || defined(CONFIG_WIN32) */

#if defined(CONFIG_LINUX) || defined(CONFIG_WIN32)
struct GuestLogicalProcessorList {
    GuestLogicalProcessorList *next;
    GuestLogicalProcessor *value;
};

void qapi_free_GuestLogicalProcessorList(GuestLogicalProcessorList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestLogicalProcessorList, qapi_free_GuestLogicalProcessorList)
#endif /* defined(CONFIG_LINUX) || defined(CONFIG_WIN32) */

#if defined(CONFIG_LINUX)
struct q_obj_guest_set_vcpus_arg {
    GuestLogicalProcessorList *vcpus;
};
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX)
struct GuestPCIAddress {
    int64_t domain;
    int64_t bus;
    int64_t slot;
    int64_t function;
};
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX)
void qapi_free_GuestPCIAddress(GuestPCIAddress *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestPCIAddress, qapi_free_GuestPCIAddress)
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX)
struct GuestCCWAddress {
    int64_t cssid;
    int64_t ssid;
    int64_t subchno;
    int64_t devno;
};
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX)
void qapi_free_GuestCCWAddress(GuestCCWAddress *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestCCWAddress, qapi_free_GuestCCWAddress)
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX)
struct GuestDiskAddress {
    GuestPCIAddress *pci_controller;
    GuestDiskBusType bus_type;
    int64_t bus;
    int64_t target;
    int64_t unit;
    char *serial;
    char *dev;
    GuestCCWAddress *ccw_address;
};
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX)
void qapi_free_GuestDiskAddress(GuestDiskAddress *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDiskAddress, qapi_free_GuestDiskAddress)
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV)
struct GuestNVMeSmart {
    int64_t critical_warning;
    int64_t temperature;
    int64_t available_spare;
    int64_t available_spare_threshold;
    int64_t percentage_used;
    uint64_t data_units_read_lo;
    uint64_t data_units_read_hi;
    uint64_t data_units_written_lo;
    uint64_t data_units_written_hi;
    uint64_t host_read_commands_lo;
    uint64_t host_read_commands_hi;
    uint64_t host_write_commands_lo;
    uint64_t host_write_commands_hi;
    uint64_t controller_busy_time_lo;
    uint64_t controller_busy_time_hi;
    uint64_t power_cycles_lo;
    uint64_t power_cycles_hi;
    uint64_t power_on_hours_lo;
    uint64_t power_on_hours_hi;
    uint64_t unsafe_shutdowns_lo;
    uint64_t unsafe_shutdowns_hi;
    uint64_t media_errors_lo;
    uint64_t media_errors_hi;
    uint64_t number_of_error_log_entries_lo;
    uint64_t number_of_error_log_entries_hi;
};
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV)
void qapi_free_GuestNVMeSmart(GuestNVMeSmart *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestNVMeSmart, qapi_free_GuestNVMeSmart)
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV)
struct q_obj_GuestDiskSmart_base {
    GuestDiskBusType type;
};
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV)
struct GuestDiskSmart {
    GuestDiskBusType type;
    union { /* union tag is @type */
        GuestNVMeSmart nvme;
    } u;
};
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV)
void qapi_free_GuestDiskSmart(GuestDiskSmart *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDiskSmart, qapi_free_GuestDiskSmart)
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV)
struct GuestDiskInfo {
    char *name;
    bool partition;
    bool has_dependencies;
    strList *dependencies;
    GuestDiskAddress *address;
    char *alias;
    GuestDiskSmart *smart;
};
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV)
void qapi_free_GuestDiskInfo(GuestDiskInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDiskInfo, qapi_free_GuestDiskInfo)
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV)
struct GuestDiskInfoList {
    GuestDiskInfoList *next;
    GuestDiskInfo *value;
};

void qapi_free_GuestDiskInfoList(GuestDiskInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDiskInfoList, qapi_free_GuestDiskInfoList)
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LIBUDEV) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX)
struct GuestDiskAddressList {
    GuestDiskAddressList *next;
    GuestDiskAddress *value;
};

void qapi_free_GuestDiskAddressList(GuestDiskAddressList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDiskAddressList, qapi_free_GuestDiskAddressList)
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX)
struct GuestFilesystemInfo {
    char *name;
    char *mountpoint;
    char *type;
    bool has_used_bytes;
    uint64_t used_bytes;
    bool has_total_bytes;
    uint64_t total_bytes;
    bool has_total_bytes_privileged;
    uint64_t total_bytes_privileged;
    GuestDiskAddressList *disk;
};
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX)
void qapi_free_GuestFilesystemInfo(GuestFilesystemInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFilesystemInfo, qapi_free_GuestFilesystemInfo)
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX)
struct GuestFilesystemInfoList {
    GuestFilesystemInfoList *next;
    GuestFilesystemInfo *value;
};

void qapi_free_GuestFilesystemInfoList(GuestFilesystemInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestFilesystemInfoList, qapi_free_GuestFilesystemInfoList)
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) */

#if defined(CONFIG_WIN32) || defined(CONFIG_LINUX) || defined(CONFIG_FREEBSD)
struct q_obj_guest_set_user_password_arg {
    char *username;
    char *password;
    bool crypted;
};
#endif /* defined(CONFIG_WIN32) || defined(CONFIG_LINUX) || defined(CONFIG_FREEBSD) */

#if defined(CONFIG_LINUX)
struct GuestMemoryBlock {
    uint64_t phys_index;
    bool online;
    bool has_can_offline;
    bool can_offline;
};
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
void qapi_free_GuestMemoryBlock(GuestMemoryBlock *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestMemoryBlock, qapi_free_GuestMemoryBlock)
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
struct GuestMemoryBlockList {
    GuestMemoryBlockList *next;
    GuestMemoryBlock *value;
};

void qapi_free_GuestMemoryBlockList(GuestMemoryBlockList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestMemoryBlockList, qapi_free_GuestMemoryBlockList)
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
struct GuestMemoryBlockResponse {
    uint64_t phys_index;
    GuestMemoryBlockResponseType response;
    bool has_error_code;
    int64_t error_code;
};
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
void qapi_free_GuestMemoryBlockResponse(GuestMemoryBlockResponse *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestMemoryBlockResponse, qapi_free_GuestMemoryBlockResponse)
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
struct q_obj_guest_set_memory_blocks_arg {
    GuestMemoryBlockList *mem_blks;
};
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
struct GuestMemoryBlockResponseList {
    GuestMemoryBlockResponseList *next;
    GuestMemoryBlockResponse *value;
};

void qapi_free_GuestMemoryBlockResponseList(GuestMemoryBlockResponseList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestMemoryBlockResponseList, qapi_free_GuestMemoryBlockResponseList)
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
struct GuestMemoryBlockInfo {
    uint64_t size;
};
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
void qapi_free_GuestMemoryBlockInfo(GuestMemoryBlockInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestMemoryBlockInfo, qapi_free_GuestMemoryBlockInfo)
#endif /* defined(CONFIG_LINUX) */

struct GuestExecStatus {
    bool exited;
    bool has_exitcode;
    int64_t exitcode;
    bool has_signal;
    int64_t signal;
    char *out_data;
    char *err_data;
    bool has_out_truncated;
    bool out_truncated;
    bool has_err_truncated;
    bool err_truncated;
};

void qapi_free_GuestExecStatus(GuestExecStatus *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestExecStatus, qapi_free_GuestExecStatus)

struct q_obj_guest_exec_status_arg {
    int64_t pid;
};

struct GuestExec {
    int64_t pid;
};

void qapi_free_GuestExec(GuestExec *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestExec, qapi_free_GuestExec)

struct GuestExecCaptureOutput {
    QType type;
    union { /* union tag is @type */
        bool flag;
        GuestExecCaptureOutputMode mode;
    } u;
};

void qapi_free_GuestExecCaptureOutput(GuestExecCaptureOutput *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestExecCaptureOutput, qapi_free_GuestExecCaptureOutput)

struct q_obj_guest_exec_arg {
    char *path;
    bool has_arg;
    strList *arg;
    bool has_env;
    strList *env;
    char *input_data;
    GuestExecCaptureOutput *capture_output;
};

struct GuestHostName {
    char *host_name;
};

void qapi_free_GuestHostName(GuestHostName *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestHostName, qapi_free_GuestHostName)

#if defined(CONFIG_WIN32) || defined(HAVE_UTMPX)
struct GuestUser {
    char *user;
    double login_time;
    char *domain;
};
#endif /* defined(CONFIG_WIN32) || defined(HAVE_UTMPX) */

#if defined(CONFIG_WIN32) || defined(HAVE_UTMPX)
void qapi_free_GuestUser(GuestUser *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestUser, qapi_free_GuestUser)
#endif /* defined(CONFIG_WIN32) || defined(HAVE_UTMPX) */

#if defined(CONFIG_WIN32) || defined(HAVE_UTMPX)
struct GuestUserList {
    GuestUserList *next;
    GuestUser *value;
};

void qapi_free_GuestUserList(GuestUserList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestUserList, qapi_free_GuestUserList)
#endif /* defined(CONFIG_WIN32) || defined(HAVE_UTMPX) */

struct GuestTimezone {
    char *zone;
    int64_t offset;
};

void qapi_free_GuestTimezone(GuestTimezone *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestTimezone, qapi_free_GuestTimezone)

struct GuestOSInfo {
    char *kernel_release;
    char *kernel_version;
    char *machine;
    char *id;
    char *name;
    char *pretty_name;
    char *version;
    char *version_id;
    char *variant;
    char *variant_id;
};

void qapi_free_GuestOSInfo(GuestOSInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestOSInfo, qapi_free_GuestOSInfo)

#if defined(CONFIG_WIN32)
struct GuestDeviceIdPCI {
    uint16_t vendor_id;
    uint16_t device_id;
};
#endif /* defined(CONFIG_WIN32) */

#if defined(CONFIG_WIN32)
void qapi_free_GuestDeviceIdPCI(GuestDeviceIdPCI *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDeviceIdPCI, qapi_free_GuestDeviceIdPCI)
#endif /* defined(CONFIG_WIN32) */

#if defined(CONFIG_WIN32)
struct q_obj_GuestDeviceId_base {
    GuestDeviceType type;
};
#endif /* defined(CONFIG_WIN32) */

#if defined(CONFIG_WIN32)
struct GuestDeviceId {
    GuestDeviceType type;
    union { /* union tag is @type */
        GuestDeviceIdPCI pci;
    } u;
};
#endif /* defined(CONFIG_WIN32) */

#if defined(CONFIG_WIN32)
void qapi_free_GuestDeviceId(GuestDeviceId *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDeviceId, qapi_free_GuestDeviceId)
#endif /* defined(CONFIG_WIN32) */

#if defined(CONFIG_WIN32)
struct GuestDeviceInfo {
    char *driver_name;
    bool has_driver_date;
    int64_t driver_date;
    char *driver_version;
    GuestDeviceId *id;
};
#endif /* defined(CONFIG_WIN32) */

#if defined(CONFIG_WIN32)
void qapi_free_GuestDeviceInfo(GuestDeviceInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDeviceInfo, qapi_free_GuestDeviceInfo)
#endif /* defined(CONFIG_WIN32) */

#if defined(CONFIG_WIN32)
struct GuestDeviceInfoList {
    GuestDeviceInfoList *next;
    GuestDeviceInfo *value;
};

void qapi_free_GuestDeviceInfoList(GuestDeviceInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDeviceInfoList, qapi_free_GuestDeviceInfoList)
#endif /* defined(CONFIG_WIN32) */

struct GuestAuthorizedKeys {
    strList *keys;
};

void qapi_free_GuestAuthorizedKeys(GuestAuthorizedKeys *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestAuthorizedKeys, qapi_free_GuestAuthorizedKeys)

struct q_obj_guest_ssh_get_authorized_keys_arg {
    char *username;
};

struct q_obj_guest_ssh_add_authorized_keys_arg {
    char *username;
    strList *keys;
    bool has_reset;
    bool reset;
};

struct q_obj_guest_ssh_remove_authorized_keys_arg {
    char *username;
    strList *keys;
};

#if defined(CONFIG_LINUX)
struct GuestDiskStats {
    bool has_read_sectors;
    uint64_t read_sectors;
    bool has_read_ios;
    uint64_t read_ios;
    bool has_read_merges;
    uint64_t read_merges;
    bool has_write_sectors;
    uint64_t write_sectors;
    bool has_write_ios;
    uint64_t write_ios;
    bool has_write_merges;
    uint64_t write_merges;
    bool has_discard_sectors;
    uint64_t discard_sectors;
    bool has_discard_ios;
    uint64_t discard_ios;
    bool has_discard_merges;
    uint64_t discard_merges;
    bool has_flush_ios;
    uint64_t flush_ios;
    bool has_read_ticks;
    uint64_t read_ticks;
    bool has_write_ticks;
    uint64_t write_ticks;
    bool has_discard_ticks;
    uint64_t discard_ticks;
    bool has_flush_ticks;
    uint64_t flush_ticks;
    bool has_ios_pgr;
    uint64_t ios_pgr;
    bool has_total_ticks;
    uint64_t total_ticks;
    bool has_weight_ticks;
    uint64_t weight_ticks;
};
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
void qapi_free_GuestDiskStats(GuestDiskStats *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDiskStats, qapi_free_GuestDiskStats)
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
struct GuestDiskStatsInfo {
    char *name;
    uint64_t major;
    uint64_t minor;
    GuestDiskStats *stats;
};
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
void qapi_free_GuestDiskStatsInfo(GuestDiskStatsInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDiskStatsInfo, qapi_free_GuestDiskStatsInfo)
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
struct GuestDiskStatsInfoList {
    GuestDiskStatsInfoList *next;
    GuestDiskStatsInfo *value;
};

void qapi_free_GuestDiskStatsInfoList(GuestDiskStatsInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestDiskStatsInfoList, qapi_free_GuestDiskStatsInfoList)
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
struct GuestLinuxCpuStats {
    int64_t cpu;
    uint64_t user;
    uint64_t nice;
    uint64_t system;
    uint64_t idle;
    bool has_iowait;
    uint64_t iowait;
    bool has_irq;
    uint64_t irq;
    bool has_softirq;
    uint64_t softirq;
    bool has_steal;
    uint64_t steal;
    bool has_guest;
    uint64_t guest;
    bool has_guestnice;
    uint64_t guestnice;
};
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
void qapi_free_GuestLinuxCpuStats(GuestLinuxCpuStats *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestLinuxCpuStats, qapi_free_GuestLinuxCpuStats)
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
struct q_obj_GuestCpuStats_base {
    GuestCpuStatsType type;
};
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
struct GuestCpuStats {
    GuestCpuStatsType type;
    union { /* union tag is @type */
        GuestLinuxCpuStats q_linux;
    } u;
};
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
void qapi_free_GuestCpuStats(GuestCpuStats *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestCpuStats, qapi_free_GuestCpuStats)
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
struct GuestCpuStatsList {
    GuestCpuStatsList *next;
    GuestCpuStats *value;
};

void qapi_free_GuestCpuStatsList(GuestCpuStatsList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestCpuStatsList, qapi_free_GuestCpuStatsList)
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
struct GuestNetworkRoute {
    char *iface;
    char *destination;
    int64_t metric;
    char *gateway;
    char *mask;
    bool has_irtt;
    int64_t irtt;
    bool has_flags;
    uint64_t flags;
    bool has_refcnt;
    int64_t refcnt;
    bool has_use;
    int64_t use;
    bool has_window;
    int64_t window;
    bool has_mtu;
    int64_t mtu;
    char *desprefixlen;
    char *source;
    char *srcprefixlen;
    char *nexthop;
    int64_t version;
};
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
void qapi_free_GuestNetworkRoute(GuestNetworkRoute *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestNetworkRoute, qapi_free_GuestNetworkRoute)
#endif /* defined(CONFIG_LINUX) */

#if defined(CONFIG_LINUX)
struct GuestNetworkRouteList {
    GuestNetworkRouteList *next;
    GuestNetworkRoute *value;
};

void qapi_free_GuestNetworkRouteList(GuestNetworkRouteList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(GuestNetworkRouteList, qapi_free_GuestNetworkRouteList)
#endif /* defined(CONFIG_LINUX) */

#endif /* QGA_QAPI_TYPES_H */