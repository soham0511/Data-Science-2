#include<stdio.h>
#define MIN(x,y) (x<y)?x:y
int main(){
    int x=13,y=14,z;
    z=MIN(x+y/2,y-4);
    if(z>0)
    printf("%d",z);
    return 0;
}