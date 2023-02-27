#include <bits/stdc++.h>
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    /*
    take the inputs as n and m
    Now for minimizing number of cuts first cut along the maximum dimension of both n and m
    for this if we have 2 bars we need one cut similarly for 3 bars we need 2 cuts so in general for k bars we need k-1 cuts
    now we reduced the problem from 2d to 1d so for this 1d bars we need similarly k-1 cuts if its width is k these k-1 cuts are made for t number of times where t is the maximum of n and m so total number of final cuts is : (max(n,m)-1) + (min(n,m)-1)*max(n,m)
    */
    cout << (max(n, m) - 1) + (min(n, m) - 1) * max(n, m) << endl;
    return 0;
}