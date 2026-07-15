#ifndef IDT_H
#define IDT_H

#include <stdint.h> 

struct idt_entry {
    uint16_t endereco_parte_baixa; 
    uint16_t seletor_gdt;          
    uint8_t  sempre_zero;          
    uint8_t  configuracoes;        
    uint16_t endereco_parte_alta;
} __attribute__((packed));

struct idt_ptr {
    uint16_t limit;
    uint32_t base;
} __attribute__((packed));

int inicializar_idt();
void definir_porta_idt(uint8_t numero, uint32_t endereco_funcao, uint16_t seletor, uint8_t flags);

#endif
