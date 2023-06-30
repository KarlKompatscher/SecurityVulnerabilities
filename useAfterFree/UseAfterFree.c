#include <stdlib.h>
#include <stdio.h>

int main() {
    int *secret_ptr = (int *)malloc(sizeof(int));
    *secret_ptr = 10;

    printf("\nSecretPointer Value: %d", *secret_ptr);
    printf("\nSecretPointer address: %p\n", (void *)secret_ptr);

    free(secret_ptr);  // Memory deallocated
    printf("\nSecretPointer address after freed: %p\n", (void *)secret_ptr);
    printf("\nSecretPointer Value after freed: %d", *secret_ptr);

    /*
    // For a real life szenario, where you make your program safe to use-after-free attack
    secret_ptr = NULL; // Pointer set to NULL

    // Check if the pointer is NULL before dereferencing it
    if (secret_ptr != NULL) {
        int value = *secret_ptr; // This will not be executed due to the check
    } else {
        // Handle the case when the pointer is NULL
        // This could be logging an error, providing a default value, or taking appropriate action
    }
    */



    // Use after free: Trying to access the freed memory
    int unauthorizedValue = *secret_ptr; // Accessing the freed memory is undefined behavior

    printf("\nvalue of unauthorizedValue: %d", unauthorizedValue); // This line is also undefined behavior
    printf("\nvalue address: %p\n", (void *)&unauthorizedValue); // Address of 'value' using '&'
    printf("\n\n");

    return 0;
}