#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if (x>0){
        printf("Even");
    }
    else if (x<0){
        printf("Odd");
    }
    else{
        printf("Zero");
    }
    return 0;

}