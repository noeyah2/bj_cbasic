//
// Created by 하연 on 2022/12/05.
//
#include <stdio.h>

int main(){
    int n[6];
    scanf("%d %d",&n[0], &n[1]);
    n[2] = n[0]*(n[1]%10);
    n[3] = n[0]*((n[1]/10)%10);
    n[4] = n[0]*(n[1]/100);
    printf("%d\n%d\n%d\n%d", n[2],n[3],n[4],n[0]*n[1]);
    return 0;
}