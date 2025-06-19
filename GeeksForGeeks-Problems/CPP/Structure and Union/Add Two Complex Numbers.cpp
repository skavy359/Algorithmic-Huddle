// User function Template for C++

/*
struct Complex
{
    int real;
    int img;
};
*/

Complex add(Complex c1, Complex c2)
{
    Complex c3;
    int real_final = c1.real + c2.real;
    int img_final = c1.img + c2.img;
    c3.real = real_final;
    c3.img = img_final;
    return c3;
}