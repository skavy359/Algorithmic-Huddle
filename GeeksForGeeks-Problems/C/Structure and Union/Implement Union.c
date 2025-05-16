//User function Template for C

/*create binary tree struct node*/
// your code here4
#include <stdio.h>

// Define struct for binary tree node
struct NODE {
    double data; // Data for leaf nodes
    union {
        struct NODE *left;
        struct NODE *right;
    } children; // Union for pointers to left and right children
};
