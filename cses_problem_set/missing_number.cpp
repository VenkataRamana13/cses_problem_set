//Created by: Venkata Ramana

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
//#define for(i,a,b) for(int i = a; i <= b; i++)
#define vi vector<int>
using namespace std;

int main(int argc, char *argv[]){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; 
    scanf("%lld", &n);
    bool b[n];
    for (ll i = 0; i <= n - 2; i++){
        ll m; 
        scanf("%lld", &m);
        b[m-1] = true; 
    }

    for (ll i = 0; i <= n-1; i++){
        if (!b[i]){
            printf("%lld\n", i + 1);
            break; 
        }
    } 
}