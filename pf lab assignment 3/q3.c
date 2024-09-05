#include <stdio.h>
int main()
{
    // declaring the variables
    float Tax_rate;
    int salary;
    float tax_amount;
    float final_salary;

   // Asking the user to enter his salary and the tax on it
    printf("Enter your Salary: ");
    scanf("%d",&salary);
    printf("Enter tax on salary in %: ");
    scanf("%f",&Tax_rate);

    // Calculating the tax amount and the final salary
    tax_amount=(salary)*(Tax_rate/100);
    final_salary=(salary)-(tax_amount);

    // Printing the tax amount and the final salary
    printf("The tax on your salary is %f\n ",tax_amount);
    printf("Your salary after tax is %f\n ",final_salary);

    return 0;

}