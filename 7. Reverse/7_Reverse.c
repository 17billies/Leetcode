#include <stdio.h>
#include <stdlib.h>

int reverse(int x);

int main(){
    int x, y;
    scanf("%d", &x);
    y = reverse(x);
    printf("%d\n", y);
    return 0;
}

int reverse(int x){
    int flag = 0;
    int i, j;
    long long int y = 0;
    int num[35]={0};

    if(x < 0){
        flag = 1;
        x = (unsigned int)x * (-1);//-2147483648
    }
    if(x == 0)return 0;//don't have to calculate
    for(i = 0; x != 0; ++i){
        num[i] = x % 10;
        x = x/10;
    }
    
    for(j = 0; j < i; ++j){
        y = y * 10 + num[j];
    }
    if(flag == 1) y = y * (-1);
    if(y > 2147483647 | y < -2147483648) return 0;
    return y;
}


//1534236469
