#include <stdio.h>
int main()
{
    int x,y,z;
    int max;
    scanf("%d %d %d",&x,&y,&z);
    if(x>=y&&x>=z){
     max = x;}
     else if(y>=x&&y>=z){
     max = y;}
      else{
     max = z;}
     printf("%d",max);
     return 0;
    
    
    
    
    
}
