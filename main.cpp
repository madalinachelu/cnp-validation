#include <iostream>

using namespace std;

int primacif(long n)
{
    while(n>9)
    n=n/10;
    return n;
}

int luna(long n)
{
    while(n>99999)
    n=n/10;
    return n%100;
}
int zi(long n)
{
    while(n>9999999)
    n=n/10;
    return n%100;
}

long sumprod(long n)
{
    long p=279146358279;
    int s=0;
    n=n/10;
    while(n)
    {
        s=s+n%10*(p%10);
        n=n/10;
        p=p/10;
    }
    return s;
}

int main()
{
    long c;
    int ok=1,x=-1;
    cin>>c;
    if(primacif(c)==0||primacif(c)>=7 && primacif(c)!=9)
    ok=0;
    if(luna(c)>12)
    ok=0;
    if(zi(c)>31)
    ok=0;
    if(luna(c)==4||luna(c)==6||luna(c)==9||(luna(c)==11&&zi(c)>30))
    ok=0;
    if(luna(c)==2 && zi(c)>28)
    ok=0;
    if(sumprod(c)%11<10)
    x=sumprod(c)%11;
    else x=1;
    if(c%10!=x)
    ok=0;
    if(ok==0)
        cout<<"Nu este valid";
    else cout<<"Este valid";
}
