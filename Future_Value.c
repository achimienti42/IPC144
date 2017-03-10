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