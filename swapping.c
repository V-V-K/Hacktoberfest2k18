#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int a,b;
 	printf("Enter the values of a and b:");
 	scanf("%d %d", &a, &b);
 	printf("Before swapping a=%d , b =%d", a,b);
 	a=a+b;
 	b=a-b;
 	a=a-b;
 	printf("After swapping a=%d, b=%d", a,b);
 	getch();
 	
 	
 }
