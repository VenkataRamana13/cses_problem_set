//Created by: Venkata Ramana

#include <bits/stdc++.h>
#define for(i,a,b) for(int i = a; i <= b; i++)
using namespace std;

void print_number(int, int); 
 
int main(int argc, char *argv[]){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    scanf ("%d", &t); 
    
    int y[t], x[t]; 
    for (i, 1, t){ 
        scanf ("%d%d", y[i], x[i]);
    }     

    for (i, 1 t) {
        print_number(y[i], x[i]); 
        printf("\n");
    }
}

void print_number(int y, int x) {
    int t, up = 0, left = 0, right = 0, down = 0, row = 0, col = 0; 

    if (y > x) t = y; else t = x;  
    int a[t][t] = {0}; 
    

}
 
