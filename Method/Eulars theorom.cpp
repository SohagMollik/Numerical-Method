#include<bits/stdc++.h>
#define f(x,y) x+y
using namespace std;
int main()
{
   double x0,y0,xn,n,m,y1,t1;
   cin>>x0>>y0>>xn>>n;  // 0   1   0.5   10
   double h=(xn-x0)/n;
   for(int i=0;i<n;i++)
   {
       m=f(x0,y0);
       y1=y0+h*m;
       cout<<x0<<"\t"<<y1<<endl;
       x0=x0+h;
       y0=y1;
   }

    return 0;
}

