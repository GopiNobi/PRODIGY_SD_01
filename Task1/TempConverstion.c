#include<stdio.h>
int main()
{
    int temp,choice;
    float fahrenheit,kelvin;
    while(1){
            printf("\n-------Temperature Celsius to Fahrenheit or Kelvin-------\n");
            printf("\n 1.Celsius to Fahrenheit.\n");
            printf("\n 2.Celsius to Kelvin. \n");
            printf("\n 3.Exit.");
            printf("\n Enter the Choice : ");
            scanf("%d",&choice);

            switch(choice){
            case 1:
                printf("Enter the Celsius : ");
                scanf("%d",&temp);
                fahrenheit = (temp * 9.0 / 5.0) + 32;
                printf("The Fahrenheit Val is : %.2f \n",fahrenheit);
                break;
            case 2:
                printf("Enter the Celsius : ");
                scanf("%d",&temp);
                kelvin=(temp+273.15);
                printf("The Kelvin value is : %.2f \n",kelvin);
                break;
            case 3:
                printf("Exit");
                exit(0);
                break;
            default:
                printf("Invalid choice! Please enter 1, 2, or 3.\n");

            }


    }
}
