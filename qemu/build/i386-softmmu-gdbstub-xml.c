#include "qemu/osdep.h"
#include "exec/gdbstub.h"

const GDBFeature gdb_static_features[] = {
    {
        "i386-32bit.xml",
        "<?xml version=\"1.0\"?>\n"
        "<!-- Copyright (C) 2010-2017 Free Software Foundation, Inc.\n"
        "\n"
        "     Copying and distribution of this file, with or without modification,\n"
        "     are permitted in any medium without royalty provided the copyright\n"
        "     notice and this notice are preserved.  -->\n"
        "\n"
        "<!-- I386 with SSE -->\n"
        "\n"
        "<!DOCTYPE target SYSTEM \"gdb-target.dtd\">\n"
        "<feature name=\"org.gnu.gdb.i386.core\">\n"
        "  <flags id=\"i386_eflags\" size=\"4\">\n"
        "\011<field name=\"\" start=\"22\" end=\"31\"/>\n"
        "\011<field name=\"ID\" start=\"21\" end=\"21\"/>\n"
        "\011<field name=\"VIP\" start=\"20\" end=\"20\"/>\n"
        "\011<field name=\"VIF\" start=\"19\" end=\"19\"/>\n"
        "\011<field name=\"AC\" start=\"18\" end=\"18\"/>\n"
        "\011<field name=\"VM\" start=\"17\" end=\"17\"/>\n"
        "\011<field name=\"RF\" start=\"16\" end=\"16\"/>\n"
        "\011<field name=\"\" start=\"15\" end=\"15\"/>\n"
        "\011<field name=\"NT\" start=\"14\" end=\"14\"/>\n"
        "\011<field name=\"IOPL\" start=\"12\" end=\"13\"/>\n"
        "\011<field name=\"OF\" start=\"11\" end=\"11\"/>\n"
        "\011<field name=\"DF\" start=\"10\" end=\"10\"/>\n"
        "\011<field name=\"IF\" start=\"9\" end=\"9\"/>\n"
        "\011<field name=\"TF\" start=\"8\" end=\"8\"/>\n"
        "\011<field name=\"SF\" start=\"7\" end=\"7\"/>\n"
        "\011<field name=\"ZF\" start=\"6\" end=\"6\"/>\n"
        "\011<field name=\"\" start=\"5\" end=\"5\"/>\n"
        "\011<field name=\"AF\" start=\"4\" end=\"4\"/>\n"
        "\011<field name=\"\" start=\"3\" end=\"3\"/>\n"
        "\011<field name=\"PF\" start=\"2\" end=\"2\"/>\n"
        "\011<field name=\"\" start=\"1\" end=\"1\"/>\n"
        "\011<field name=\"CF\" start=\"0\" end=\"0\"/>\n"
        "  </flags>\n"
        "\n"
        "  <reg name=\"eax\" bitsize=\"32\" type=\"int32\" regnum=\"0\"/>\n"
        "  <reg name=\"ecx\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"edx\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"ebx\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"esp\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"ebp\" bitsize=\"32\" type=\"data_ptr\"/>\n"
        "  <reg name=\"esi\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"edi\" bitsize=\"32\" type=\"int32\"/>\n"
        "\n"
        "  <reg name=\"eip\" bitsize=\"32\" type=\"code_ptr\"/>\n"
        "  <reg name=\"eflags\" bitsize=\"32\" type=\"i386_eflags\"/>\n"
        "\n"
        "  <reg name=\"cs\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"ss\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"ds\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"es\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"fs\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"gs\" bitsize=\"32\" type=\"int32\"/>\n"
        "\n"
        "  <!-- Segment descriptor caches and TLS base MSRs -->\n"
        "\n"
        "  <!--reg name=\"cs_base\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"ss_base\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"ds_base\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"es_base\" bitsize=\"32\" type=\"int32\"/-->\n"
        "  <reg name=\"fs_base\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"gs_base\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"k_gs_base\" bitsize=\"32\" type=\"int32\"/>\n"
        "\n"
        "  <flags id=\"i386_cr0\" size=\"4\">\n"
        "\011<field name=\"PG\" start=\"31\" end=\"31\"/>\n"
        "\011<field name=\"CD\" start=\"30\" end=\"30\"/>\n"
        "\011<field name=\"NW\" start=\"29\" end=\"29\"/>\n"
        "\011<field name=\"AM\" start=\"18\" end=\"18\"/>\n"
        "\011<field name=\"WP\" start=\"16\" end=\"16\"/>\n"
        "\011<field name=\"NE\" start=\"5\" end=\"5\"/>\n"
        "\011<field name=\"ET\" start=\"4\" end=\"4\"/>\n"
        "\011<field name=\"TS\" start=\"3\" end=\"3\"/>\n"
        "\011<field name=\"EM\" start=\"2\" end=\"2\"/>\n"
        "\011<field name=\"MP\" start=\"1\" end=\"1\"/>\n"
        "\011<field name=\"PE\" start=\"0\" end=\"0\"/>\n"
        "  </flags>\n"
        "\n"
        "  <flags id=\"i386_cr3\" size=\"4\">\n"
        "\011<field name=\"PDBR\" start=\"12\" end=\"31\"/>\n"
        "\011<!--field name=\"\" start=\"3\" end=\"11\"/>\n"
        "\011<field name=\"WT\" start=\"2\" end=\"2\"/>\n"
        "\011<field name=\"CD\" start=\"1\" end=\"1\"/>\n"
        "\011<field name=\"\" start=\"0\" end=\"0\"/-->\n"
        "\011<field name=\"PCID\" start=\"0\" end=\"11\"/>\n"
        "  </flags>\n"
        "\n"
        "  <flags id=\"i386_cr4\" size=\"4\">\n"
        "\011<field name=\"VME\" start=\"0\" end=\"0\"/>\n"
        "\011<field name=\"PVI\" start=\"1\" end=\"1\"/>\n"
        "\011<field name=\"TSD\" start=\"2\" end=\"2\"/>\n"
        "\011<field name=\"DE\" start=\"3\" end=\"3\"/>\n"
        "\011<field name=\"PSE\" start=\"4\" end=\"4\"/>\n"
        "\011<field name=\"PAE\" start=\"5\" end=\"5\"/>\n"
        "\011<field name=\"MCE\" start=\"6\" end=\"6\"/>\n"
        "\011<field name=\"PGE\" start=\"7\" end=\"7\"/>\n"
        "\011<field name=\"PCE\" start=\"8\" end=\"8\"/>\n"
        "\011<field name=\"OSFXSR\" start=\"9\" end=\"9\"/>\n"
        "\011<field name=\"OSXMMEXCPT\" start=\"10\" end=\"10\"/>\n"
        "\011<field name=\"UMIP\" start=\"11\" end=\"11\"/>\n"
        "\011<field name=\"LA57\" start=\"12\" end=\"12\"/>\n"
        "\011<field name=\"VMXE\" start=\"13\" end=\"13\"/>\n"
        "\011<field name=\"SMXE\" start=\"14\" end=\"14\"/>\n"
        "\011<field name=\"FSGSBASE\" start=\"16\" end=\"16\"/>\n"
        "\011<field name=\"PCIDE\" start=\"17\" end=\"17\"/>\n"
        "\011<field name=\"OSXSAVE\" start=\"18\" end=\"18\"/>\n"
        "\011<field name=\"SMEP\" start=\"20\" end=\"20\"/>\n"
        "\011<field name=\"SMAP\" start=\"21\" end=\"21\"/>\n"
        "\011<field name=\"PKE\" start=\"22\" end=\"22\"/>\n"
        "  </flags>\n"
        "\n"
        "  <flags id=\"i386_efer\" size=\"4\">\n"
        "\011<field name=\"TCE\" start=\"15\" end=\"15\"/>\n"
        "\011<field name=\"FFXSR\" start=\"14\" end=\"14\"/>\n"
        "\011<field name=\"LMSLE\" start=\"13\" end=\"13\"/>\n"
        "\011<field name=\"SVME\" start=\"12\" end=\"12\"/>\n"
        "\011<field name=\"NXE\" start=\"11\" end=\"11\"/>\n"
        "\011<field name=\"LMA\" start=\"10\" end=\"10\"/>\n"
        "\011<field name=\"LME\" start=\"8\" end=\"8\"/>\n"
        "\011<field name=\"SCE\" start=\"0\" end=\"0\"/>\n"
        "  </flags>\n"
        "\n"
        "  <reg name=\"cr0\" bitsize=\"32\" type=\"i386_cr0\"/>\n"
        "  <reg name=\"cr2\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"cr3\" bitsize=\"32\" type=\"i386_cr3\"/>\n"
        "  <reg name=\"cr4\" bitsize=\"32\" type=\"i386_cr4\"/>\n"
        "  <reg name=\"cr8\" bitsize=\"32\" type=\"int32\"/>\n"
        "  <reg name=\"efer\" bitsize=\"32\" type=\"i386_efer\"/>\n"
        "\n"
        "  <reg name=\"st0\" bitsize=\"80\" type=\"i387_ext\"/>\n"
        "  <reg name=\"st1\" bitsize=\"80\" type=\"i387_ext\"/>\n"
        "  <reg name=\"st2\" bitsize=\"80\" type=\"i387_ext\"/>\n"
        "  <reg name=\"st3\" bitsize=\"80\" type=\"i387_ext\"/>\n"
        "  <reg name=\"st4\" bitsize=\"80\" type=\"i387_ext\"/>\n"
        "  <reg name=\"st5\" bitsize=\"80\" type=\"i387_ext\"/>\n"
        "  <reg name=\"st6\" bitsize=\"80\" type=\"i387_ext\"/>\n"
        "  <reg name=\"st7\" bitsize=\"80\" type=\"i387_ext\"/>\n"
        "\n"
        "  <reg name=\"fctrl\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "  <reg name=\"fstat\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "  <reg name=\"ftag\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "  <reg name=\"fiseg\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "  <reg name=\"fioff\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "  <reg name=\"foseg\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "  <reg name=\"fooff\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "  <reg name=\"fop\" bitsize=\"32\" type=\"int\" group=\"float\"/>\n"
        "<!--/feature>\n"
        "<feature name=\"org.gnu.gdb.i386.32bit.sse\"-->\n"
        "  <vector id=\"v4f\" type=\"ieee_single\" count=\"4\"/>\n"
        "  <vector id=\"v2d\" type=\"ieee_double\" count=\"2\"/>\n"
        "  <vector id=\"v16i8\" type=\"int8\" count=\"16\"/>\n"
        "  <vector id=\"v8i16\" type=\"int16\" count=\"8\"/>\n"
        "  <vector id=\"v4i32\" type=\"int32\" count=\"4\"/>\n"
        "  <vector id=\"v2i64\" type=\"int64\" count=\"2\"/>\n"
        "  <union id=\"vec128\">\n"
        "\011<field name=\"v4_float\" type=\"v4f\"/>\n"
        "\011<field name=\"v2_double\" type=\"v2d\"/>\n"
        "\011<field name=\"v16_int8\" type=\"v16i8\"/>\n"
        "\011<field name=\"v8_int16\" type=\"v8i16\"/>\n"
        "\011<field name=\"v4_int32\" type=\"v4i32\"/>\n"
        "\011<field name=\"v2_int64\" type=\"v2i64\"/>\n"
        "\011<field name=\"uint128\" type=\"uint128\"/>\n"
        "  </union>\n"
        "  <flags id=\"i386_mxcsr\" size=\"4\">\n"
        "\011<field name=\"IE\" start=\"0\" end=\"0\"/>\n"
        "\011<field name=\"DE\" start=\"1\" end=\"1\"/>\n"
        "\011<field name=\"ZE\" start=\"2\" end=\"2\"/>\n"
        "\011<field name=\"OE\" start=\"3\" end=\"3\"/>\n"
        "\011<field name=\"UE\" start=\"4\" end=\"4\"/>\n"
        "\011<field name=\"PE\" start=\"5\" end=\"5\"/>\n"
        "\011<field name=\"DAZ\" start=\"6\" end=\"6\"/>\n"
        "\011<field name=\"IM\" start=\"7\" end=\"7\"/>\n"
        "\011<field name=\"DM\" start=\"8\" end=\"8\"/>\n"
        "\011<field name=\"ZM\" start=\"9\" end=\"9\"/>\n"
        "\011<field name=\"OM\" start=\"10\" end=\"10\"/>\n"
        "\011<field name=\"UM\" start=\"11\" end=\"11\"/>\n"
        "\011<field name=\"PM\" start=\"12\" end=\"12\"/>\n"
        "\011<field name=\"FZ\" start=\"15\" end=\"15\"/>\n"
        "  </flags>\n"
        "\n"
        "  <reg name=\"xmm0\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm1\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm2\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm3\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm4\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm5\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm6\" bitsize=\"128\" type=\"vec128\"/>\n"
        "  <reg name=\"xmm7\" bitsize=\"128\" type=\"vec128\"/>\n"
        "\n"
        "  <reg name=\"mxcsr\" bitsize=\"32\" type=\"i386_mxcsr\" group=\"vector\"/>\n"
        "</feature>\n",
        "org.gnu.gdb.i386.core",
        (const char * const []) {
            [0] =
                "eax",
            [1] =
                "ecx",
            [2] =
                "edx",
            [3] =
                "ebx",
            [4] =
                "esp",
            [5] =
                "ebp",
            [6] =
                "esi",
            [7] =
                "edi",
            [8] =
                "eip",
            [9] =
                "eflags",
            [10] =
                "cs",
            [11] =
                "ss",
            [12] =
                "ds",
            [13] =
                "es",
            [14] =
                "fs",
            [15] =
                "gs",
            [16] =
                "fs_base",
            [17] =
                "gs_base",
            [18] =
                "k_gs_base",
            [19] =
                "cr0",
            [20] =
                "cr2",
            [21] =
                "cr3",
            [22] =
                "cr4",
            [23] =
                "cr8",
            [24] =
                "efer",
            [25] =
                "st0",
            [26] =
                "st1",
            [27] =
                "st2",
            [28] =
                "st3",
            [29] =
                "st4",
            [30] =
                "st5",
            [31] =
                "st6",
            [32] =
                "st7",
            [33] =
                "fctrl",
            [34] =
                "fstat",
            [35] =
                "ftag",
            [36] =
                "fiseg",
            [37] =
                "fioff",
            [38] =
                "foseg",
            [39] =
                "fooff",
            [40] =
                "fop",
            [41] =
                "xmm0",
            [42] =
                "xmm1",
            [43] =
                "xmm2",
            [44] =
                "xmm3",
            [45] =
                "xmm4",
            [46] =
                "xmm5",
            [47] =
                "xmm6",
            [48] =
                "xmm7",
            [49] =
                "mxcsr",
        },
        50,
    },
    { NULL }
};
