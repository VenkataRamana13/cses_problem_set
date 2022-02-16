//Created by: Venkata Ramana

//employing solution not using recursion but backtracking 

//well I've seen the solution online, it's easy as hell and doesn't 
//even involve recursion

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define for(i,a,b) for(int i = a; i <= b; i++)
#define vi vector<int>
using namespace std;
 
void search(int, int *, int); 
int find_element(int, int *);
int diff(int, int); 

bool flag = false;

int main(int argc, char *argv[]){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    scanf("%d", &n);

    int permutation[n] = {0};
    permutation[1] = 1; 
    search(n, permutation, 2); 
    if (flag) {
        for (i, 0, n - 1){
            printf ("%d ", permutation[i]); 
        }
        printf ("\n");
    }
    else {
        printf ("NO SOLUTION\n");
    }
} 

void search(int n, int *p, int k){
    if (k == n) {
        int j = find_element(n, p); 
        if ((diff(p[j - 1] ,k) > 1) && (diff(p[j + 1] , k) > 1)) {
            p[j] = k; 
            flag = true; 
            exit(0);
        }
    }
    for(i, 0, n - 1){
        if ((p[i] == 0) && (diff(p[i - 1] , k) > 1) && (abs(p[i + 1] - k) > 1)){
            p[i] = k; 
        }
        search(n, *p, k+1); 
        p[i] = 0; 
    }
}

int find_element(int n, int *p){
    for (i, 0, n - 1) { 
        if (p[i] == 0) return i; 
    }
    return 0; 
}

int diff(int a, int b){
    if (a < b){
        return a - b; 
    }
    else return b - a; 
}