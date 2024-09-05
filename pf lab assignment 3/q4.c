include <stdio.h>
int main()
{
	//declaring variables
	int Single_distance=1207;
	int Fuel_forward=118;
	int Fuel_backward=123;
	float Fuel_average;
	float forward_cost;
	float backward_cost;
	float Total_cost;
	float total_fuel;

	//asking for input from the user
	printf(" what is your car fuel average : ");
	scanf("%f",&Fuel_average);
	if (Fuel_average>0)
	{
		//calculating forward cost and priniting it
		
	    forward_cost=(Single_distance*Fuel_forward)/Fuel_average;
	    printf(" you forward cost is %f \n",forward_cost);

		//calculating backward cost and printing it
	    backward_cost=(Single_distance*Fuel_backward)/Fuel_average;
	    printf(" you backward cost is %f \n",backward_cost);

		//calculating total cost
	    Total_cost=forward_cost+backward_cost;
	    printf(" total fuel cost is %f \n",Total_cost);

		//calculating total fuel consumed
	    total_fuel=(Single_distance*2)/Fuel_average;
	    printf(" total fuel average is %f",total_fuel);
	    
	   
	    return 0;
	} //end if
	else
	{
	    printf(" invalid input ");
	} //end else
	
}
