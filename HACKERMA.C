#include<stdio.h>
#include<conio.h>
void main()
	{
	float a,b;
	float sum=0,pro=1,div=1,avg=1;
	clrscr();
	printf("enter 2 numbers\n");
	scanf("%f%f",&a,&b);
	sum=a+b;
	printf("sum=%f",sum);
	pro=a*b;
	printf("\nproduct=%f",pro);
	div=a/b;
	printf("\nquotient=%f",div);
	avg=(a+b)/2;
	printf("\naverage=%f",avg);
	getch();








}
