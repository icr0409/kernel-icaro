
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

unsigned char bitmap[5] = {0, 0, 0, 0, 0};
void  alocar_memoria() {
for (int i =  0; i < 5;  i++) {

if (bitmap[i] == 0) {

bitmap[i] = 1;

break;

}
}
}

void limpar_memoria() {

for (int i = 0; i < 5; i++) {

if (bitmap[i] == 1) {

bitmap[i] = 0;

break;

}
}
}

void criar_filtro();
void inicializar_filtro();



void kmain(void)  {
gdt_init();
inicializar_filtro();
vga_print("Hello, Kernel!");




while(1) {

}
}
