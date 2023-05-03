#include <stdio.h>
void bill(int);
void meter(char);
int main()
{
	char m;
	int units, ID, r, p;
	float cost;
	printf("Welcome to South Indian Electricity department\n\n");
    printf("ELECTRICITY BOARD RATE CHART (Rates/Unit)\n");
    printf("An electricity board charges the following rates \n");
    printf("0 Unit to 100 Units ..................................=Rs.1/Unit\n");
    printf("101 Unit to 200 Units .............................. =Rs.2/Unit\n");
    printf("201 Unit to 300 Units .............................. =Rs.3/Unit\n");
    printf("and more than 300 Uits .............................. =Rs.4/Unit\n");
    printf("______________________________________________________________________________________________________\n\n");
	printf("\nEnter Customer ID : ");
	scanf("%d", &ID);
	
	main_menu:
	printf("\nPress 1 to generate electricity bill and Press 2 for meter replacement: ");
	scanf("%d",&r);
	if(r==1)
	{
		bill(units);
	}
	else if(r==2)
	{
		meter(m);
	}
	else
	{
		printf("Choose only 1 or 2");
		goto main_menu;
	}
	printf("\n\nPress 1 to go to main menu or any key to exit : ");
	scanf("%d",&p);
	if(p==1)
	{
		goto main_menu;
	}
	else
	{
		printf("\nThank you!!");
	}
	return 0;
}
void bill(int units)
{
	float cost;
	printf("Enter total units consumed : ");
	scanf("%d", &units);
	if(units <= 100)
	{
		cost = units * 1;
	}
	else if(units <= 200)
	{
		cost = units * 2;
	}
	else if(units <= 300)
	{
		cost = units * 3;
	}
	else
	{
		cost = units * 4;
	}
	printf("Your Electricity Bill is = Rs. %.2f", cost);
}
void meter(char m)
{
	printf ("\nDo you want to replace your meter? (Y/N): \n");
	scanf("%s",&m);
	if(m=='Y'||m=='y')
	{
		printf("Your request for meter replacement has been placed. We will contact you shortly");
	}
	else
	{
		printf("You have declined meter replacement request");
	}
}
