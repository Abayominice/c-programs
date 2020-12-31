#include <stdio.h>
#include <stdlib.h>

int main()
{
int x=0;
while(x<=1000){
    printf("%d", &x);
    if(x%2==0){
        x++;
        printf(x);
}
}
return 0;
}
