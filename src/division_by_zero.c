
// CWE-369: Division by Zero

#include <stdio.h>
#include "test_suite.h"

void division_by_zero_function() {
    int a = 10, b = 0;
    int result = a / b; // Division by zero error
    printf("Result: %d\n", result);
}
