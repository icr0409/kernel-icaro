#include "pmm.h"
int bitmap[5] = {0, 0, 0, 0, 0,};

int conferir_memoria() {

for (int i = 0; i < 5; i++) {

if (bitmap[i] == 0) {

bitmap[i] = 1;

break;
}
}
}