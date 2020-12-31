#include <stdio.h>
#include <stdlib.h>



int main()
{
int score;
printf("\n1. 0 to 44\n");
printf("\n2. 45 to 49\n");
printf("\n3. 50 to 59\n");
printf("\n4. 60 to 69\n");
printf("\n5. 70 to 100\n");
printf("Choose an option if your grade falls into any interval.\n");
scanf("%d", &score);
    switch(score){
        case(1): {
                    printf("\nYour grade is F");
                    break;
            }
        case(2):{
                    printf("\nYour grade is D");
                    break;
                }
        case(3):{
                    printf("\nYour grade is C");
                    break;
                }
        case(4): {
                    printf("\nYour grade is B");
                    break;
                }
        case(5): {
                    printf("\nYour grade is A");
                    break;
                }
        default: printf("\nThe value provided is invalid");
                         printf("\nTry again");
                         break;
    }
           return 0;
        }
