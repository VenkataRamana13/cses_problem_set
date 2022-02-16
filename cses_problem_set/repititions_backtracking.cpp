//Created by: Venkata Ramana //implementing repetitions using backtracking

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define for(i,a,b) for(int i = a; i <= b; i++)
#define vi vector<int>
using namespace std;

void search(int, int); 
int iter;
vi permutation; 

int main(int argc, char *argv[]){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    scanf("%d", &n);
    search(1, n);     
}

void search(int x, int n){ 
    if(x == n) {
        //process permutation 
    }
    
}