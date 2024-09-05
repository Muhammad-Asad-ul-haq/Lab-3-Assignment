#include <stdio.h>
int main()
{
	float X1;
	float Y1;
	float X2;
	float Y2;
	float Slope; 
	
	printf(" enter the first x cordinate ");
	scanf("%f",&X1);
	printf(" enter the first y cordinate ");
	scanf("%f",&Y1);
	printf(" enter the second x cordinate ");
	scanf("%f",&X2);
	printf(" enter the second y cordinate ");
	scanf("%f",&Y2);
	Slope=((Y2-Y1)/(X2-X1));
	printf(" slope is %.3f ",Slope);
	return 0;
	
	
}