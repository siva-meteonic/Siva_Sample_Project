
// CWE-476: NULL Pointer Dereference

#include <stdio.h>
#include "test_suite.h"

void null_pointer_dereference_function() {
    int *ptr = NULL;
    printf("Value: %d\n", *ptr); // Dereferencing NULL pointer
}
