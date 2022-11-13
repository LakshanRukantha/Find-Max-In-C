#include <stdio.h>
#include <stdlib.h>

int num1, num2, num3, maxNum, minNum;

    int max(){
        if (num1 >= num2 && num1 >= num3)
            maxNum = num1;
        if (num2 >= num1 && num2 >= num3)
            maxNum = num2;
        if (num3 >= num1 && num3 >= num2)
            maxNum = num3;
            printf("The maximum number is : %d", maxNum);
        }

    int min(){
        if (num1 <= num2 && num1 <= num3)
            minNum = num1;
        if (num2 <= num1 && num2 <= num3)
            minNum = num2;
        if (num3 <= num1 && num3 <= num2)
            minNum = num3;
            printf("\nThe minimum number is : %d", minNum);
        }

int main()
{
    printf("Enter three numbers (ex:4 8 2): ");
    scanf("%d %d %d", &num1,&num2, &num3);

    max(num1, num2, num3);
    min(num1, num2, num3);

    return 0;
}
