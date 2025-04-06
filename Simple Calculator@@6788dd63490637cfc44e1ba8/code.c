#include <stdio.h>
int main() 
{
    int x,y;
    char c;
    scanf("%d %d %c",&x,&y,&c);
    switch(c){
        case '+':
        printf("%d",x+y);
        break;
            case '-':
        printf("%d",x-y);
        break;
            case '*':
        printf("%d",x*y);
        break;
            case '/':
            if(y!=0){
        printf("%d",x/y);}
        else{printf("Error");}
        break;
    }
    return 0;

}