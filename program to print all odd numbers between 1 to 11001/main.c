#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("This program would print the sum of all numbers between 1 and 11001");
    int i, num, sum=0;

    /*do{
    sum++;
    num=sum % 2;
    if(num!=0){
        printf("%d is an odd number\n",sum);
    }
    }while(1<=sum && sum<100);
    return 0;*/

    for(num=1; num<=10; num++){
        sum+=num;
        printf("%d\n",sum);
    }printf("%d" sum);
}
