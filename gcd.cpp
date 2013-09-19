#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<iostream>

using namespace std;

long long calculate(long long a,long long b)
{
    if (a == 0) return 0;
    if (a >= b)
       return a/b + calculate(a%b,b);
    else
       return b/a + calculate(b%a,a);
}

int main()
{
    long long a,b;
    while (cin >> a >> b)
    {
        cout << calculate(a,b) << endl;
    }
    return 0;
}
