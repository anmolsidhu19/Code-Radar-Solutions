#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if (x%5==0&&x%11==0){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
    return 0;

}