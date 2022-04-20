#include<bits/stdc++.h>
#define f(x) x*x*x-x-1
using namespace std;
int main()
{
    double x0,x1,x2,h1,h2,de1,de2,a,b,c,x,x3,e=-1;
    cin>>x0>>x1;
    x2=(x0+x1)/2;
    do{
      double fx0=f(x0);
      double fx1=f(x1);
      double fx2=f(x2);
      h1=x1-x0;
      h2=x2-x1;
      de1=(fx1-fx0)/h1;
      de2=(fx2-fx1)/h2;
      a=((de2-de1)/(h2+h1));
      b=(a*h2)+de2;
      c=f(x2);
      if(b>=0.0){
        x=sqrt(b*b-4*a*c);
        x3=x2-(2*c/(b+x));
      }
      else{
        x=sqrt(b*b-4*a*c);
        x3=x2-(2*c/(b-x));
      }
      e=abs((x3-x2)/x3)*100;
      x0=x1;
      x1=x2;
      x2=x3;
    }while(e>0.01);
    cout<<x3<<endl;
    return 0;
}

