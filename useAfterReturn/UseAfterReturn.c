#include <stdio.h>

int *getValue() {
    int secretNumber = 369;
    printf("\nSecretNumber number: %d", secretNumber);
    printf("\nSecretNumber adress: %p", &secretNumber);
    return &secretNumber; // Returning a pointer to a local variable -> even gives you a warning in vscode
    
    
    // return secretNumber; just return the value and not the whole adress in real world szenario
}

int main() {
    int *unauthoritized_ptr = getValue(); // ptr points to a local variable of getValue()

    // Use after return: Trying to access the local variable after the function has returned
    printf("\nun pointer value: %d", *unauthoritized_ptr); // This leads to undefined behavior
    printf("\nunauthoritized pointer adress: %p", (void *)unauthoritized_ptr);
    printf("\n\n\n");

    return 0;
}
