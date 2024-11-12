void reverse_dig(int &a,int &b)
{
    //Add your code here.
    int rema=0;
    while(a>0){
        rema=rema*10 + a%10;
        a=a/10;
    }
    a=rema;
    
    int remb=0;
    while(b>0){
        remb=remb*10 + b%10;
        b=b/10;
    }
    b=remb;
}

void swap(int &a,int &b)
{
    //Add your code here.
    int temp=a;
    a=b;
    b=temp;
}
