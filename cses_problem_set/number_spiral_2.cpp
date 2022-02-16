//Created by: Venkata Ramana

#include <bits/stdc++.h>
#define for(i,a,b) for(long long i = a; i <= b; i++)
#define ll long long
using namespace std;
 
void process_array(ll, ll); 

int main(int argc, char *argv[]){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll t;
    scanf("%lld", &t); 
    
    ll y[t + 1], x[t + 1]; 
    for (i, 1, t){ 
        scanf ("%lld%lld", &y[i], &x[i]);
    }     
        
    for (i, 1, t) {
        process_array(y[i], x[i]); 
        printf("\n");
    }
}

void process_array(ll y, ll x) 
{
    int dir = 0;
    const int up = 0, down = 1, left = 2, right = 3; 
    ll z, row = 0, col = 0;
    if (y > x) z = y; else z = x;  
    ll a[z][z]; 

    for (i, 0, z - 1) {
        for (j, 0, z-1){
            a[i][j] = 0;
        }
    }
     
    for (i, 1, z*z){

        a[row][col] = i; 

        if (row == 0 && col == 0){
            dir = right; 
        }
        else if (row == 0){
            if (a[row + 1][col] == 0) dir = down; 
            else dir = right; 
        }
        else if (col == 0) {
            if (a[row][col + 1] == 0) dir = right; 
            else dir = down;  
        }
        else if (row == col) { 
            if (a[row][col - 1] == 0) dir = left; 
            else dir = up; 
        }


        if (dir == up) {
            row--; 
        }
        else if (dir == down){
            row++;
        }
        else if (dir == right){
            col++;
        }
        else if (dir == left){
            col--;
        }
    }
    printf("%lld", a[y - 1][x - 1]);
}