/*
 * Kernel-Ícaro (vmicaro)
 * Copyright (c) 2026 Ícaro Teles da Silva (@icarotelesdasilva)
 *
 * Licensed under the MIT License.
 */

#include "gdt.h"   
#include "idt.h"   
#include "pmm.h"
extern void kernel_panic(char *str);
extern void vga_print(const char* str);  
void kmain(void) {
    if (gdt_init() != 0) {
        kernel_panic("Kernel Panic!\nUnable to load GDT.");
        while(1);
    }

    if (inicializar_idt() != 0) {
        kernel_panic("Kernel Panic!\nUnable to load IDT.");
        while(1);
    }


conferir_memoria();


    vga_print("Hello, Kernel!");

    while (1);
}
