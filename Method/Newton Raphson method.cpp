#include<bits/stdc++.h>
#define f(x)  x*x*x -x -1
#define  g(x)  3*x*x-1
using namespace std;
int main()
{
    double a,b,x0,x1,z,x,y;
    start:
    cout<<"Enter the value a  and b\n";
    cin>>a>>b;
    if(f(a)*f(b)>0||a>b)goto start;
    x0=(a+b)/2;
    do{
         x=f(x0);
         y=g(x0);
          x1=x0-(x/y);
          z=f(x1);
        if(z==0)break;
        else x0=x1;
    }while(fabs(z)>0.0001);
    cout<<"Root is = "<<setprecision(10)<<fixed<<x1<<endl;

    return 0;
}
