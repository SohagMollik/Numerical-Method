#include<bits/stdc++.h>
#define f(x) x*x*x - x -1
#define g(x) 3*x*x -1
#define gg(x) 6*x
using namespace std;
int main()
{
    double a,b;
    start:
    cout<<"Enter your input\n";
    cin>>a>>b;
    if(a>b||f(a)*f(b)>0)goto start;
    double x0,fx0,gx0,ggx0,x1,fx1;
    x0=(a+b)/2;
    do{
        fx0=f(x0);
        gx0=g(x0);
        ggx0=gg(x0);
        x1=x0-((2*fx0*gx0)/((2*gx0*gx0)-(fx0)*gg(x0)));
        fx1=f(x1);
        if(fx1==0)break;
        else x0=x1;
    }while(fabs(fx1)>0.0001);
    cout<<"Root = "<<x1<<endl;
    return 0;
}
