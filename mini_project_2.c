//MINI PROJECT

//EMI Calculator

#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,mn;
	float r,ci,ta,emi;
	printf("Enter Priciple Amount : ");
	scanf("%d",&p);
	printf("Enter Rate : ");
	scanf("%f",&r);
	printf("Enter Time(in Years) : ");
	scanf("%d",&t);
	ta = p * pow(1 + r/100 , t);
	ci = ta - p;
	mn = t * 12;
	emi = p / mn;
	printf("\nTotal Amount is : %.2f",ta);
	printf("\nCompund Interest is : %.2f",ci);
	printf("\nTotal Months : %d",mn);
	printf("\nEMI is : %.2f",emi);
	return 0;
}
