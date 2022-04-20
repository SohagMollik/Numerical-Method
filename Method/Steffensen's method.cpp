#include<bits/stdc++.h>
#define f(x) x*x*x-x-1
using namespace std;
int main()
{
   double a,b,x0,fx1,x1;
   cin>>a>>b;
   x0=a+b/2;
   do{
   double fx0=f(x0);
   double fx=f(x0+fx0);
    x1=x0-((fx0*fx0)/(fx-fx0));
    fx1=f(x1);
   if(fx1==0){cout<<x1<<endl;break;}
   else x0=x1;
   }while(fabs(fx1)>0.0001);
   cout<<x1<<endl;
    return 0;
}

