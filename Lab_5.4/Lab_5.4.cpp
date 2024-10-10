#include <iostream>
#include <cmath>
using namespace std;

 double P0(const int N)
{
 double p = 1;
    for (int i = N; i <= 16; i++)
        p *= (i * N) / (pow(i, 2) + pow(N, 2));
    return p;
}

 double P1(const int N, const int i)
{
    if (i > 16)
        return 1;
    else
        return ((i * N) / (pow(i, 2) + pow(N, 2))) * P1(N, i + 1);
}

 double P2(const int N, const int i)
{
    if (i < N)
        return 1;
    else
        return ((i * N) / (pow(i, 2) + pow(N, 2))) * P2(N, i - 1);
}

 double P3(const int N, const int i,  double t)
{
    t *= (i * N) / (pow(i, 2) + pow(N, 2));
    if (i >= 16)
        return t;
    else
        return P3(N, i + 1, t);
}

 double P4(const int N, const int i,  double t)
{
    t *= (i * N) / (pow(i, 2) + pow(N, 2));
    if (i <= N)
        return t;
    else
        return P4(N, i - 1, t);
}

int main()
{
    int N;
    cout << "N = "; cin >> N;
    cout << "(iter)        P0 = " << P0(N) << endl;
    cout << "(rec up ++)   P1 = " << P1(N, N) << endl;
    cout << "(rec up --)   P2 = " << P2(N, 16) << endl;
    cout << "(rec down ++) P3 = " << P3(N, N, 1) << endl;
    cout << "(rec down --) P4 = " << P4(N, 16, 1) << endl;
    return 0;
}