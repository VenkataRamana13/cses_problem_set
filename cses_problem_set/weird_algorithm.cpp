#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
//#define for(i,a,b) for(int i = a; i <= b; i++)
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll N;
    scanf("%lld",&N);
    for (;;){
        if (N == 1) {
            printf("1\n");
            break;}
    if (N % 2 == 0){
        printf("%lld ", N);
        N /= 2;
    }    
    else {
        printf("%lld ", N);
        N = 3 * N + 1;
    }
    }
}