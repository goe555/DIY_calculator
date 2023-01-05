#include <stdio.h>
#include <windows.h>

int main ()
{
	int menu=0;
	do{
		
		HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
		
		SetConsoleTextAttribute(h ,13);
		printf("1) Plus\n");
		printf("=====================\n");
		
		SetConsoleTextAttribute(h ,12);
		printf("2) Subtract\n");
		printf("=====================\n");
		
		SetConsoleTextAttribute(h ,11);
		printf("3) Multiply\n");
		printf("=====================\n");
		
		SetConsoleTextAttribute(h ,10);
		printf("4) Divide\n");
		printf("=====================\n");
		
		SetConsoleTextAttribute(h ,14);
		printf("5) Exit\n");
		printf("=======================\n");
		
		
		printf("plese select menu 1-5 ....\n\n\n");
		
		scanf("%d",&menu);
		
		float num1=0,num2=0,sum=0;
		
		switch(menu)
		{
			case 1:{
				SetConsoleTextAttribute(h ,13);
				printf("=============Plus==========\n\n\n");
				printf("plus enter number [1] : ");
				scanf("%f",&num1);
				printf("plus enter number [2] : + ");
				scanf("%f",&num2);
				sum = num1+num2;
				printf("SUM = %5.2f\n\n\n\n",sum);
				
			}
			break;
			case 2:{
				SetConsoleTextAttribute(h ,12);
				printf("========== Subtract ==========\n\n\n");
				printf("Subtract enter number [1] : ");
				scanf("%f",&num1);
				printf("Subtract enter number [2] : - ");
				scanf("%f",&num2);
				sum = num1-num2;
				printf("-----------------------------\n");
				printf("SUM = %5.2f\n\n\n\n",sum);
				
	    	}
			break;
			case 3:{
				SetConsoleTextAttribute(h ,11);
				printf("=========== Multiply =========\n\n\n");
				printf("Multiply enter number [1] : ");
				scanf("%f",&num1);
				printf("Multiply enter number [2] : * ");
				scanf("%f",&num2);
				sum = num1*num2;
				printf("-----------------------------\n");
				printf("SUM = %5.2f\n\n\n\n",sum);
			
			}
			break;
			case 4:{
				SetConsoleTextAttribute(h ,10);
				printf("========== Dived ==========\n\n\n");
				printf("Divide enter number [1] : ");
				scanf("%f",&num1);
				printf("Divide enter number [2] : / ");
				scanf("%f",&num2);
				sum = num1/num2;
				printf("-----------------------------\n");
				printf("SUM = %5.2f\n\n\n\n",sum);
			
			}
			break;
						
		}//switch
	}//do
	while(menu!=5);

		
}
//main
