#include <stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x==R){
        printf("Stop");
    }
    else if(x==Y){
        printf("Slow Down");
    }
    else if(x==G){
        printf("Go");
    }
     else{
        printf("Invalid input");
    }
    return 0;
}