//Copyright 2023 Wilhelm Payne
//BSD 3-Clause Licensed.  See LICENSE file.
#include <stdio.h>
//This is a segfault app
int main() {
    int* ptr = NULL; // Null pointer
    printf("About to dereference null pointer, expect a segfault.\n");
    *ptr = 10; // Dereferencing null pointer causes segfault
    return 0;
}

