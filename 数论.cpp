int gcd(int a,int b)
{
     return b == 0?a:gcd(b,a%b);
}

int ex_gcd(int a,int b,int &x,int &y)
{
    if (b == 0)
    {
       x = 1;
       y = 0;
    }
    int ret = ex_gcd(b,a%b,x,y);
    int c = x;
    x = y;
    y = y - a/b*x;
    return ret;
}
