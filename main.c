#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, maxNum;

    int max(){
        if (num1 > num2 && num1 > num3)
            maxNum = num1;
        if (num2 > num1 && num2 > num3)
            maxNum = num2;
        if (num3 > num1 && num3 > num2)
            maxNum = num3;
            printf("The maximum number is : %d", maxNum);
        }

    printf("Enter three numbers : ");
    scanf("%d %d %d", &num1,&num2, &num3);

    max(num1, num2, num3);


    return 0;
}
