#include<bits/stdc++.h>
#define f(x)  x*x*x - x - 1
using namespace std;
int main()
{
    float x0,x1,x2,f0,f1,f2;
    start:
    cin>>x0>>x1;
    if(f(x0)*f(x1)>0.0 || x0>x1){
        goto start;
}
        f0=f(x0);
        f1=f(x1);

    do{
          x2=((x0*f1)-(x1*f0))/(f1-f0);
          f2=f(x2);
          if(f2==0)break;
      else   if(f0*f2<0){
                x1=x2;
        }
        else
        {
            x0=x2;
        }
    }while(fabs(f2)>0.0001);
    cout<<"Root is = "<<x2<<endl;

    return 0;
}
