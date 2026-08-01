#include <stdlib.h>

void *heap_malloc(size_t size);
void heap_free(void *ptr);

int main() {
    return 0;
}

void *heap_malloc(size_t size) {
    return malloc(size);
}

void free(void *ptr) {
    free(ptr);
}