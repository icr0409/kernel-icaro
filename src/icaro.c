#include "drivers/vga.c"
#include "../system/gdt.h"


void kmain(void)  {
vga_print("iniciando gdt...");

gdt_init();

vga_print("\nHello, Kernel!");

while(1) {

}
}
