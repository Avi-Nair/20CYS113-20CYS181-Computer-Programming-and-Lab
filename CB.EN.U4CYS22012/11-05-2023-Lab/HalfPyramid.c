#include <stdio.h>

void printstar(int n){
    for(int i=1;i<=n;i++){
        printf("* ");
    }
    printf("\n");
}


int main(){
    int n;
    scanf("%d",&n);
    if(n<=0 || n>=25){
        printf("Invalid Input");
        return 0;
    }
    
    for(int i=1;i<=n;i++){
        printstar(i);
    }
    return 0;
}
