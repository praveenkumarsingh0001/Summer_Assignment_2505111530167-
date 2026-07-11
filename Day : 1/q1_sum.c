#include <stdio.h>
int main(){
    printf("enter a  positive integer (N):");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    printf("sum of first %d natural number is:%d\n",n,sum);
    return 0;

    }
