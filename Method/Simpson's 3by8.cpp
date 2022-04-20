#include<bits/stdc++.h>
#define f(x) 1/(1+x*x)
using namespace std;
int main()
{
    double a,b,n,h,ans=0;
    cin>>a>>b>>n;
    ans=f(a)+f(b);
    h=(b-a)/n;
    for(int i=1;i<=n;i++)
    {
        double k=a+i*h;
        if(i%3==0)ans+=(2*f(k));
        else ans+=(3*f(k));
    }
    ans=ans*(3.0*h/8.0);
    cout<<ans<<endl;
    return 0;
}
