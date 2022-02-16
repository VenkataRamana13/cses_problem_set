//Created by: Venkata Ramana 

#include <bits/stdc++.h>
#define ll long long
//#define for(i,a,b) for(int i = a; i <= b; i++)
using namespace std;

int main(int argc, char *argv[]){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; 
    scanf("%lld", &n);
    for (ll i = 1; i <= n; i++){
    if (i == 1) printf("0\n"); 
    else if (i == 2) printf ("6\n"); 
    else{
        printf ("%lld\n", (i*i)*(i*i-1)/2 - 4*((i-1)*(i-2)));
    }
    }
}
