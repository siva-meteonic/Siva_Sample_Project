
// Main function to call all vulnerable functions

#include <stdio.h>
#include "test_suite.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input_string>\n", argv[0]);
        return 1;
    }

    printf("Calling buffer overflow function...\n");
    buffer_overflow_function(argv[1]);

    printf("Calling memory leak function...\n");
    memory_leak_function();

    printf("Calling NULL pointer dereference function...\n");
    null_pointer_dereference_function();

    printf("Calling uninitialized variable function...\n");
    uninitialized_variable_function();

    printf("Calling division by zero function...\n");
    division_by_zero_function();

    printf("Calling double free function...\n");
    double_free_function();

    return 0;
}
