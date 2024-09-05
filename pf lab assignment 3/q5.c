#include <stdio.h>
int main()
{
	int Principle;
	float Rate;
	int Time_period;
	int interest;
	printf(" Enter the principle : ");
	scanf("%d",&Principle);
	while ((Principle<100) || (Principle>1000000))
	{
		printf(" Enter the principle again :");
		scanf("%d",&Principle);
	} 
	printf(" Enter the rate : ");
	scanf("%f",&Rate);
	while ((Rate<5) || (Rate>10))
	{
		printf(" Enter the rate again :");
		scanf("%d",&Rate);
	} 
	printf(" Enter the time period :");
	scanf("%d",&Time_period);
	while ((Time_period<1) || (Time_period>10))
	{
		printf(" Enter the time period again : ");
		scanf("%d",&Time_period);
	} 
	Rate=Rate/100;
	interest=Principle*Rate*Time_period;
	printf(" The interest is %d",interest);
	return 0;	
}
