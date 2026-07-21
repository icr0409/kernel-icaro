
## License
This project is protected under the **MIT License**. 
See the [LICENSE](LICENSE) file for more details.

[![Build
Kernel](https://github.com/icarotelesdasilva/kernel/actions/workflows/build.yml/badge.svg)](https://github.com/icarotelesdasilva/kernel/actions/workflows/build.yml)

Welcome to my hobby kernel, a place where this repository works liberally, that is, everything that is here works is being updated constantly, where
I put my skills into practice, current structure of the project:

```
├── arch

│   └── i386

│       ├── boot

│       │   └── boot.asm

│       ├── cpu

│       │   ├── gdt.asm

│       │   ├── gdt.c

│       │   ├── idt.asm

│       │   ├── idt.c

│       │   └── pic.c

│       ├── drivers

│       │   ├── kernel_panic.c

│       │   └── vga.c

│       ├── linker.ld

│       └── mm
│           └── pmm.c

├── grub
│   └── grub.cfg

├── include

│   ├── gdt.h

│   ├── idt.h

│   └── pic.h

├── kernel

│   └── kernel.c

├── LICENSE

├── makefile

├── map.md

├── README.md

└── test

    └── keyboard

        ├── keyboard.asm

        ├── keyboard.c

        └── keyboard.h
```

 
 
