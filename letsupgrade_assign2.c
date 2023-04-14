#include<stdio.h>

int main()

{

int num;

int i,sum=0;

printf("Enter the number:");

scanf("%d",&num);

for(i=1; i<num; i++)

{

if(i%2==1)

{

sum=sum+i;

}

}

printf("Sum=%d",sum);

return 0;

}
