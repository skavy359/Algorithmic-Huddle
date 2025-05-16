//User function template for C


int isPalindrome(char *str) {
    int length = strlen(str);
    
    // Initialize two pointers, one pointing to the start of the string and one pointing to the end
    int start = 0;
    int end = length - 1;

    // Traverse the string from both ends towards the middle
    while (start < end) {
        // If characters at current positions don't match, return 0 (not a palindrome)
        if (str[start] != str[end]) {
            return 0;
        }
        // Move the pointers towards the middle
        start++;
        end--;
    }
    // If the loop completes without finding any mismatch, return 1 (palindrome)
    return 1;
}
