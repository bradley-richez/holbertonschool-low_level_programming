#include <stdio.h>
#include <stdlib.h>

int main(void){
    int choice;
    int n1,n2;
    int result;

    printf("Welcome in simple calculator\n");
    printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 0:
        printf("Choice: %d\n Bye!", choice);
        exit(EXIT_SUCCESS); 
        break;
    case 1:
        printf("Choice: %d\n", choice);
        printf("Choice a number for A:\n");
        scanf("%d", &n1);
        printf("A: %d\n",choice);
        printf("Choice a number for B:\n");
        scanf("%d", &n2);
        printf("B: %d\n",choice);
        result = n1 + n2;
        printf("Result: %d\n",result);
        
    case 2:
        printf("Choice: %d\n", choice);
        printf("Choice a number for A:\n");
        scanf("%d", &n1);
        printf("A: %d\n",choice);
        printf("Choice a number for B:\n");
        scanf("%d", &n2);
        printf("B: %d\n",choice);
        result = n1 - n2;
        printf("Result: %d\n",result);
        break;
    case 3:
        break;
    case 4:
        break;
    default:
            printf("Choice: %d\nInvalid choice\n",choice);
            break;
    }

    
    
    return (0);
}