// User function Template for C

/*struct area
{
    int sd;
    int len, wid;
}*/
void find_area(int side, int le, int wd) {
    // assign value to side of square
    // your code here
    struct area a;
    a.sd=side;
    // assign values to length and breadth of rectangle
    // your code here
    a.len=le;
    a.wid=wd;
    // computing area of square
    // your code here
    printf("%d ", side*side);
    // computing area of rectangle
    // your code here
    printf("%d", le*wd);
}
