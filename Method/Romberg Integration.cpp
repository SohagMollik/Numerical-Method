#include <bits/stdc++.h>
using namespace std;
int N ;
double romberg(double (*func)(double), double a, double b) {
    double h[N+1], r[N+1][N+1];
    for (int i = 1; i < N + 1; ++i) {
        h[i] = (b - a) / pow(2, i - 1);
    }
    r[1][1] = h[1] / 2 * (func(a) + func(b));
    for (int i = 2; i < N + 1; ++i) {
        double coeff = 0;
        for (int k = 1; k <= pow(2, i - 2); ++k) {
            coeff += func(a + (2 * k - 1) * h[i]);
        }
        r[i][1] = 0.5 * (r[i - 1][1] + h[i - 1] * coeff);
    }

    for (int i = 2; i < N + 1; ++i) {
        for (int j = 2; j <= i; ++j) {
            r[i][j] = r[i][j - 1] + (r[i][j - 1] - r[i - 1][j - 1]) / (pow(4, j - 1) - 1);
        }
    }
    return r[N][N];
}

double f(double x) {
    return 1/(1+x*x);
}

int main()
{
    double a,b;
    cin>>a>>b;
    cin>>N;
    cout << romberg(f, a, b) << endl;
}
