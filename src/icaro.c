
/*
 * Kernel-Ícaro (vmicaro)
 * Copyright (c) 2026 Ícaro Teles da Silva (@icarotelesdasilva)
 * 
 * Este código é parte do projeto Kernel-Ícaro.
 * Licenciado sob a licença GPL v3.
 * 
 * É proibida a cópia, modificação ou redistribuição sem 
 * a manutenção deste aviso de copyright e autoria.
 */

#include "drivers/vga.c"
#include "../system/gdt.h"


void kmain(void)  {
vga_print("iniciando gdt...");

gdt_init();

vga_print("\nHello, Kernel!");

while(1) {

}
}
