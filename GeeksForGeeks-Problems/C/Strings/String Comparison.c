int stringComparsion(char *s1, char *s2) {
    while (*s1 && *s2) {
        if (*s1 < *s2) {
            return -1;
        } else if (*s1 > *s2) {
            return 1;
        }
        s1++;
        s2++;
    }
    if (*s1 == '\0' && *s2 == '\0') {
        return 0; // Both strings are equal
    } else if (*s1 == '\0') {
        return -1; // s1 is shorter
    } else {
        return 1; // s2 is shorter
    }
}

 
