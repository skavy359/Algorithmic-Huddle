// User function Template for C

/*
struct Complex
{
    int real;
    int img;
};
*/

struct Complex add(struct Complex c1, struct Complex c2) {
    
    // code here
    struct Complex c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    return c3;
}
