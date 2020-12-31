#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    if(expression){
                  statements;
    }else{
         statements;
         }
    */
    int age = 22;
    if( age <=18){
        printf("Ok you are a minor\n");
                 }else{
                    printf("Ok you are an adult\n");
                      }

    getch();
    return 0;
}
