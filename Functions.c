#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void show(double amount)
{
	printf("The future value is $%.2lf\n", amount);
}

void future_val(double principal, double rate, double years)
{
	double final_amout = 0;
	final_amout = ceil((principal * pow((1 + rate), years)) * 100.0) / 100.0;
	show(final_amout);

}

#include <stdio.h>

int main(void)
{
	double principal = 0;
	double rate = 0;
	double years = 0;

	printf("Investment Calculator\n");
	printf("=====================\n");
	printf("Principal  :  ");
	scanf("%lf", &principal);
	printf("Annual Rate:  ");
	scanf("%lf", &rate);
	printf("No of Years:  ");
	scanf("%lf", &years);

	future_val(principal, rate, years);
	return 0;
}