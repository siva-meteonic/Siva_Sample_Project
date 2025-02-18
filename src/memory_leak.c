
// CWE-401: Memory Leak

#include <stdlib.h>
#include <stdio.h>
#include "test_suite.h"

void memory_leak_function() {
    int *ptr = (int*)malloc(100 * sizeof(int));
    if (ptr) {
        *ptr = 42;
        printf("Allocated memory: %d\n", *ptr);
    }
    // Memory is not freed, causing a leak
}
