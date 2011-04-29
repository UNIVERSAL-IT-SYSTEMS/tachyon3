/* Copyright (c) 2011 by Markus Duft <mduft@gentoo.org>
 * This file is part of the 'tachyon' operating system. */

#pragma once

#define CORE_LMA_X86_64     0x0000000000100000
#define CORE_VMA_X86_64     0xFFFFFFFF80000000

#define KHEAP_START         0xFFFFFFFF81000000
#define KHEAP_END           0xFFFFFFFFA0000000

#define PHEAP_START         0x0000000000100000
#define PHEAP_END           0xFFFFFFF000000000

#define SHEAP_START         0xFFFFFFF000000000
#define SHEAP_END           0xFFFFFFFF00000000

#define APIC_VIRTUAL        0xFFFFFFFFA0000000
#define APIC_VSZ            0x1000

#define CGA_VIRTUAL         (CORE_VMA_X86_64 - 0x1000)
#define CGA_VSZ             0x1000

#define RM_VIRTUAL          APIC_VIRTUAL + APIC_VSZ
#define RM_VSZ              0x110000

/* ksym support */
#define INTR_MAGIC_FRAME    0xDEADBEEFBADC0FFE

/* registers */
#define AX  "rax"
#define BX  "rbx"
#define CX  "rcx"
#define DX  "rdx"
