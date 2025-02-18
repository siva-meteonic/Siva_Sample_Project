
// CWE-121: Stack-based Buffer Overflow

#include <stdio.h>
#include <string.h>
#include "test_suite.h"

void buffer_overflow_function(char *input) {
    char buffer[10];
    strcpy(buffer, input); // Vulnerability: No boundary check
    printf("Buffer: %s\n", buffer);
}
