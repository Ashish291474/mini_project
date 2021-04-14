#include"prototypes.h"

FILE *fp,*ft,*dp,*dt;



int main()
{
	mainmenu();
	return 0;
}



void mainmenu(void)
{
	system("cls");
	printf("                                 **************************************************************************\n");
	printf("                                                     WELCOME TO FOOD ORDER SYSTEM\n");
	printf("                                 **************************************************************************\n\n\n");
	printf("          1. order--> \n\n          2. about us--> \n\n          3. exit--> \n\n                      Enter Your Choice --->");
	int choice;
	scanf("%d",&choice);
	if(choice==1)
	{
		customer();
	}
	else if(choice==2)
	{
		aboutus();
	}
	else if(choice==3)
	{
		system("cls");
		printf("\n\n\n");
		printf("*******************************THANK YOU**************************************\n");

		printf("*********Feeling HUNGRY ? Call or Walk-In FOODIE GOODIE KITCHEN***************\n\n");
		exit(0);
	}
	
}