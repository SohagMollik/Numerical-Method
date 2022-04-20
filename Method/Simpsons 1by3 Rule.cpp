#include<bits/stdc++.h>
#define f(x) 1/(1+x*x)
using namespace std;
int main()
{
    double a,b,n,h,ans=0;
    cin>>a>>b>>n;
    h=(b-a)/n;
    ans=f(a)+f(n);
    for(int i=1;i<=n;i++)
    {
        double xx=a+i*h;
        if(i&1)ans+=(4*f(xx));
        else ans+=(2*f(xx));
    }
    ans*=(h/3);
    cout<<ans<<endl;
    return 0;
}
