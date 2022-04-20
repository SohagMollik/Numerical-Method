#include<bits/stdc++.h>
#define f(x) 1/(1+x*x)
using namespace std;
int main()
{
    double a,b,n,h,ans=0,xx;
    cin>>a>>b>>n;
    h=(b-a)/n;
    ans=f(a)+f(n);
    for(int i=1;i<=n;i++)
    {
        xx=a+i*h;
        ans+=(2*f(xx));
    }
    ans=ans*(h/2);
    cout<<ans<<endl;

    return 0;
}
