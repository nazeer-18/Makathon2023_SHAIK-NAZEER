/*
21161 shaik nazeer
*/

#include<bits/stdc++.h>
#define ll long long
#define loop(i,n) for(int i = 0; i < n; i++)
#define loop1(i,n) for(int i = 1; i <= n; i++)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         /*
        for a given n all prime subsequences should contain white beads greater than black beads so 
        say for n = 3 
        possible cases are 
            white   black
            3       0
            2       1
        now these beads can be arranged in any ways so we can use combinations here
            which gives us 3c3 + 3c2
            which is half of binomail coefficient of 2^n
            so the desired output is least integer function of pow of n to the base 2 divided ny 2
            so the output is : int((pow(2,n)+1)/2) 
        */
        cout<<int((pow(2,n)+1)/2)<<endl;
    }
    return 0;
}
