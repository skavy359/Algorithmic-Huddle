//User function Template for C

#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);

    // Swap characters from start to end
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Print the reversed string
    printf("%s", str);
}
