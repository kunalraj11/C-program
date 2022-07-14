#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a,b,choice;
    float z;
    char ch;
    do
    {
        printf("*****choose the one you want to do*****");
        printf("\n1.Additon\n2.Subtraction\n3.Multiplication\n4.Division\n5.Percentage\n6.Square\n7.Square root\n8.Exit\n");
        printf("\nEnter your choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1: 
            printf("\nYou choose:Addition");
            printf("\nenter first number:");
            scanf("%d",&a);
            printf("\nenter second number:");
            scanf("%d",&b);
            z=a+b;
            printf("Addition of two number is:%2f",z);
            break;

        case 2: 
            printf("\nYou choose:Subtraction");
            printf("\nenter first number:");
            scanf("%d",&a);
            printf("\nenter second number:");
            scanf("%d",&b);
            z=a-b;
            printf("Subtraction of two number is:%2f",z);
            break;  
        case 3: 
            printf("\nYou choose:Multiplication");
            printf("\nenter first number:");
            scanf("%d",&a);
            printf("\nenter second number:");
            scanf("%d",&b);
            z=a*b;
            printf("Multiplication of two number is:%2f",z);
            break;  
        case 4: 
            printf("\nYou choose:Division");
            printf("\nenter first number:");
            scanf("%d",&a);
            printf("\nenter second number:");
            scanf("%d",&b);
            z=a/b;
            printf("Division of two number is:%2f",z);
            break;
        case 5: 
            printf("\nYou choose:Percentage");
            printf("\nenter first number:");
            scanf("%d",&a);
            printf("\nenter second number:");
            scanf("%d",&b);
            z=(a/b)*100;
            printf("Percentage of two number is:%2f",z);
            break;  
        case 6: 
            printf("\nYou choose:Square");
            printf("\nenter first number:");
            scanf("%d",&a);
            z=a*a;
            printf("Square of %d number is:%2f",a,z);
            break;
        case 7: 
            printf("\nYou choose:Square root");
            printf("\nenter first number:");
            scanf("%d",&a);
            z=sqrt(a);
            printf("Square root  of %d number is:%2f",a,z);
            break;   
        case 8: 
            printf("\nYou choose:Exit");
            exit(0);
            break; 
        default:
             printf("Something is wrong!!");
            break;
        }

            printf("\n\n*********************************\n");
    }while(choice !=8);

        return 0;
}