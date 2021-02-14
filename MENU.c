#include<stdio.h>
main()
{
	int choice=0;
	printf("What do you want to eat? \n1. CHAPATHI, Rs 50 \n2. FRIED RICE, RS 150  \n3. BIRIYANI, RS 200 \n4. GRILL CHICKEN RS 120 \n5. ALL THE FOOD ITEMS :) \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("You want Chapathi to eat");
			break;
		case 2:	
			printf("You want Fried rice to eat");
			break;
		case 3:
			printf("You want Biriyani to eat");
			break;
		case 4:
			printf("You want Grill Chicken to eat");
			break;
		case 5:
			printf("You want all the food items available");
			break;
		default:
			printf("You don`t want anything to eat");	
		}
}
