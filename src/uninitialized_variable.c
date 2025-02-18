
// CWE-457: Use of Uninitialized Variable

#include <stdio.h>
#include "test_suite.h"

void uninitialized_variable_function() {
    int x;
    printf("Uninitialized variable: %d\n", x); // Undefined behavior
}
