#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * addBinary(char * a, char * b);

int main(){
    return 0;
}

char * addBinary(char * a, char * b){
    int flag = 0;
    int x, y;
    int z = 0;
    char c[1005];
    char d[1005];
    x = strlen(a);
    y = strlen(b);
    while(x != 0 | y != 0){
        int s = a[x-1]-'0';
        int t = b[y-1]-'0';
        if(s == t){
            if(flag == 1)c[z] = '1';
            else c[z] = '0';
            if(s == 0)flag = 0;    
        }
        else{
            if(flag == 1)c[z] = '0';
            else c[z] = '1';
            flag = 0; 
        }
        x -= 1;
        y -= 1;
        z += 1;
    }
    for(int i = z; i >= 0; --i){
        d[z-i] = c[i];
    }
    return &d;
}