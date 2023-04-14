
#include <stdio.h>

int main()
{
    int A, B, C;

    printf("Enter the 1st number : ");
    scanf("%d",&A);
     printf("\nEnter the 2nd number : ");
     scanf("%d",&B);
      printf("\nEnter the 3rd number : ");
          scanf("%d",&C);

    if (A >= B && A >= C)
        printf("%d is the largest number.", A);

    if (B >= A && B >= C)
        printf("%d is the largest number.", B);

    if (C >= A && C >= B)
        printf("%d is the largest number.", C);

    return 0;
}
