#include <stdio.h>

 int main ()
{
float num1,num2,num3;
printf("Input all three numbers\n");
printf("\nPress the 'Enter or Spacebar' key after each input and press enter for a result\n");
scanf("%f %f %f", &num1,&num2,&num3);
if (num1>num2)
{
    if (num1>num3)
    {
    printf("\n%f is the greatest number", num1);
}
}
if (num2>num3)
{
    if (num2>num1)
    {
    printf("\n%f is the greatest number",num2);
}
}
if (num3>num2)
{
    if (num3>num1)
    {
    printf("\n%f is the greatest number", num3);
}
}
if (num1==num2){
    if(num2==num3){
            printf("\nNon is greater because they are all equal");
}
}
if (num1==num2){
        if (num1&&num2>num3){
     printf("\n%f and %f are the greatest of the three numbers", num1, num2);
}
}
if (num1==num3){
        if (num1&&num3>num2){
            printf("\n%f and %f are the greatest of the three numbers", num3, num1);
}
}
if (num2==num3){
     if (num2&&num3>num1){
            printf("\n%f and %f are the greatest of the three numbers", num2, num3);
}
}
return 0;
}
