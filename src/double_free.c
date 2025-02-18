
// CWE-415: Double Free

#include <stdlib.h>
#include <stdio.h>
#include "test_suite.h"

void double_free_function() {
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 5;
    free(ptr);
    free(ptr); // Double free vulnerability
}
