#include<bits/stdc++.h>
#define  f(x)  cos(x)-x*exp(x)
using namespace std;
int main()
{
    double a,b,e,t,xx;
    start:
    cout<<"enter the value a\n";
    cin>>a;
    cout<<"enter the value b\n";
    cin>>b;
    cout<<"enter the value e\n";
    cin>>e;
    double yy=f(a);
    double zz=f(b);
    if(zz*yy>0.0){goto start;}
    int ite=0;
    do{
        xx=(a+b)/2;
        t=f(xx);
        cout<<"iteration - "<<ite<<" : \t a="<<setw(10)<<a<<setw(10)<<"b="<<b<<setw(10)<<"c="<<xx<<setw(10)<<"t="<<t<<endl;
        if(yy*t<0)b=xx;
        else a=xx;
        ite++;
    }while(fabs(t)>e);
    cout<<"Root is = "<<setprecision(5)<<fixed<<xx<<endl;

    return 0;
}
