/*
 * Kernel-Ícaro (vmicaro)
 * Copyright (c) 2026 Ícaro Teles da Silva (@icarotelesdasilva)
 *
 * Licensed under the MIT License.
 */


 extern void kernel_panic(char *str);
 extern void vga_print(const char* str);  












 void kmain(void) {

    vga_print("\nHello, Kernel!");

    while (1);
}
