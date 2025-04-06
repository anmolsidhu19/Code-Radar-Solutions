#include <stdio.h>
int main() 
{
    int x,y;
    char c;
    scanf("%d %c %d",&x,&c,&y);
    switch(op){
        case "+":
        printf("%d",x+y);
        break;
            case "-":
        printf("%d",x-y);
        break;
            case "*":
        printf("%d",x*y);
        break;
            case "/":
            if(x!=0){
        printf("%d",x/y);}
        else{printf("Error");}
        break;
    }
    return 0;

}