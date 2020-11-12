#include <stdio.h>
#include <stdlib.h>

int main()
{
// Introduction into the program:
int num;
printf("This Program Check's if the input number is Perfect Number or not\n");
printf("------------------------------------------------------------------\n");
printf("Please Enter the Integer Number: ");
scanf("%d", &num);
printf("The Number you want to check is: %d\n\n", num);

// Check the Perfect Number:
int i, sum=0;
for (i=1; i<num; i++){
    if (num%i == 0) {sum += i;}
}
if (sum == num) {printf("%d is a Perfect Number\n\n\n", num);}
else            {printf("%d is not a Perfect Number\n\n\n", num);}

return 0;
}
