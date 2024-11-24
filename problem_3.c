#include<stdio.h>
int main(){

    int x;

    printf("Enter your age\t:\t");
    scanf("%d",&x);

    if(x>=13 && x<=19){
        printf("He/she is a teenager");
    }
    else{
        printf("He/she is not a teenager");
    }
return 0;
}
