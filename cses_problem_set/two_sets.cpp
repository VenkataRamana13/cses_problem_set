//Created by: Venkata Ramana

#include <bits/stdc++.h>
#define ll long long
#define for(i,a,b) for(ll i = a; i <= b; i++)
#define vi vector<int> 
using namespace std;

vector<ll> subset; 

void search(int, ll); 
bool flag = false; 
int main(int argc, char *argv[]){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll n;int j = 0; scanf("%lld", &n); 
    if ((n*(n+1)/2) % 2 == 1){
        printf ("NO\n");
        return 0; 
    }
    printf ("YES\n");  
    search(1, n);
    vector<ll> subset_2;
    for (i, 1, n){ 
        if (i == subset[j]) j++; 
        else subset_2.push_back(i); 
    }
    printf ("%lld\n", (ll)subset.size());
    for (i, 0, (ll)subset.size() - 1){
        printf("%lld ", subset[i]);
    }
    printf ("\n%lld\n", (ll)subset_2.size());
    for (i, 0, (ll)subset_2.size() - 1){
        printf("%lld ", subset_2[i]);
    }
    printf("\n");
}

void search(int k, ll n){
    if(flag) return;
    if (k == n + 1){
        ll sum = 0; 
        for (i, 0, (int)subset.size() - 1){
            sum += subset[i]; 
        }
        if (sum == (n*(n+1)/4)){
            flag = true;
            return; 
        }
        sum = 0; 
    }    
    else {
        //include k in the subset
        if(flag) return;
        subset.push_back(k);
        if(flag) return;
        search(k+1, n);
        if(flag) return;
        subset.pop_back();
        if(flag) return;
        //don't include k in the subset
        search(k+1, n);
        if(flag) return; 
    }
}