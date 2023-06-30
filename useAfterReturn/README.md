# use-after-return

Use after return occurs when a function returns a pointer to a local variable, and the caller continues to use that pointer after the function has returned. Since the local variables of a function are stored on the stack, they become invalid once the function returns.
