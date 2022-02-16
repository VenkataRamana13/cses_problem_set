//Created by: Venkata Ramana
 
//missing number solution using the sum of natural numbers property

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define for(i,a,b) for(int i = a; i <= b; i++)
#define vi vector<int>
using namespace std;

int main(int argc, char *argv[]){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; 
    scanf("%lld",&n);

    ll sum = 0, actual = n*(n + 1)/2, m; 

    for (i, 1, n-1){
        scanf("%lld",&m);
        sum = sum + m; 
    } 

    printf("%lld\n", actual - sum);  
}