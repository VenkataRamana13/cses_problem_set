//Created by: Venkata Ramana

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
    scanf("%lld", &n);
    ll a[n], m = 0;
    for (i, 0, n-1){
        scanf("%lld", &a[i]);
        if (i == 0) continue; 
        if (a[i] >= a[i-1]) continue;
        else {
            m += (a[i -1] - a[i]);
            a[i] = a[i-1];
        }
    }
    printf("%lld\n", m);
}