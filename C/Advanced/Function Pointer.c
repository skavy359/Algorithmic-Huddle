//User function Template for C


// Function to perform subtraction
int sub(int a, int b) {
    return a - b;
}

// Function to perform addition
int add(int a, int b) {
    return a + b;
}

// Function to compute based on function pointer
void compute(int a, int b, int (*operation)(int, int)) {
    int result = operation(a, b);
    printf("%d\n", result);
}

