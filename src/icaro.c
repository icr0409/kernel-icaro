
/*
 * Kernel-Ícaro (vmicaro)
 * Copyright (c) 2026 Ícaro Teles da Silva (@icarotelesdasilva)
 * 
 * This code is part of the Kernel-Ícaro project.
 * Licensed under the GPL v3 License.
 * 
 * Copying, modification, or redistribution is prohibited without
 * maintaining this copyright and authorship notice.
 */


#include "drivers/vga.c"
#include "../system/gdt.h"

void inicializar_filtro();

void kmain(void)  {

gdt_init();
inicializar_filtro();
vga_print("Hello, Kernel!");

while(1) {

}
}
