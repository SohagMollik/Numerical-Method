#include<bits/stdc++.h>
#define f(x) x*x*x - x-1
#define phi(x) cbrt(x+1)
using namespace std;
int main()
{
   double a,b, x0,temp;
   cin>>a>>b;
   x0=(a+b)/2;
   double fx=phi(x0);
   double fx1=phi(fx);
   while(abs(fx-fx1)!=0.0)
   {
       temp=phi(fx1);
       fx=fx1;
       fx1=temp;
   }
    cout<<temp<<endl;
    return 0;
}
