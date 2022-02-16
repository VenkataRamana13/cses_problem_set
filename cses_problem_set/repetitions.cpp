//Created by: Venkata Ramana

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define for(i,a,b) for(int i = a; i <= b; i++)
#define vi vector<int>
using namespace std;
#define MAX_SIZE 1000000

int main(int argc, char *argv[]){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int i = 0, rep = 0, max = 0; 
    char ch[MAX_SIZE]; 
    while ((ch[i] = getchar()) != '\n'){
        if (ch[i] == ch[i - 1]){
            rep++; 
        }    
        else rep = 1; 
        if (max < rep){
            max = rep; 
        }
        i++;
    }
    printf("%d\n", max);
}