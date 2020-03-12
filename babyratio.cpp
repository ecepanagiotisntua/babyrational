#ifndef CONTEST
#include "babyratio.h"
#endif


using namespace std;

rational::rational(int n, int d)
{
nom=n;
den=d;
}

rational rational::add(rational r)
{
int n1=nom,n2=r.nom,d1=den,d2=r.den;
int r1=(n1*d2+n2*d1);
int r2=d1*d2;
int k=gcd(r1,r2);
r1=r1/k;
r2=r2/k;
if(r1<0&&r2<0)
{
r1=abs(r1);
r2=abs(r2);
}
return (rational(r1,r2));
}

rational rational::sub(rational r)
{
int n1=nom,n2=r.nom,d1=den,d2=r.den;
int r1=(n1*d2-n2*d1);
int r2=d1*d2;
int k=gcd(r1,r2);
r1=r1/k;
r2=r2/k;
if(r1<0&&r2<0)
{
r1=abs(r1);
r2=abs(r2);
}
return (rational(r1,r2));
}



rational rational::mul(rational r)
{
int n1=nom,n2=r.nom,d1=den,d2=r.den;
int r1=(n1*n2);
int r2=d1*d2;
int k=gcd(r1,r2);
r1=r1/k;
r2=r2/k;
if(r1<0&&r2<0)
{
r1=abs(r1);
r2=abs(r2);
}
return (rational(r1,r2));
}

rational rational::div(rational r)
{
int n1=nom,n2=r.nom,d1=den,d2=r.den;
int r1=(n1*d2);
int r2=d1*n2;
int k=gcd(r1,r2);
r1=r1/k;
r2=r2/k;
if(r1<0&&r2<0)
{
r1=abs(r1);
r2=abs(r2);
}
return (rational(r1,r2));
}

void rational::print()
{
cout<<nom<<"/"<<den;
}

int rational::gcd(int a,int b)
{
a = abs(a); b = abs(b);
 while (a > 0 && b > 0)
 if (a > b) a = a % b; else b = b % a;
 return(a+b);
}



