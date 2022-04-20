#include<bits/stdc++.h>
#define f(x) x*x*x - x -1
using namespace std;
int main()
{
   double x0,x1,x2,fx2,fx1,fx0;
   start:
    cout<<"enter x0 and x1 value\n";
   cin>>x0>>x1;
   if(x0>x1 || f(x0)*f(x1)>0)goto start;
   int i=1;
    do{
        fx0=f(x0);
        fx1=f(x1);
        x2=((x0*fx1)-(x1*fx0))/(fx1-fx0);
        fx2=f(x2);
       cout<<"step : "<<i<<setw(10)<<setprecision(6)<<fixed<<"x0 = "<<x0<<setw(10)<<"x1 = "<<x1<<setw(10)<<"f(x0) = "<<fx0<<setw(10)<<"f(x1) = "<<fx1<<endl;
       i++;
        if(x2==0)break;
        else{
            x0=x1;
            x1=x2;
        }
    }while(fabs(fx2)>=0.0001);
    cout<<"root is = "<<x2<<endl;
    return 0;
}
