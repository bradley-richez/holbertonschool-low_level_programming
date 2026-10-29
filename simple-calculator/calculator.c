#include <stdio.h>
#include <stdlib.h>

int main(void){
    int quit;
    
    printf("Welcome in simple calculator\n");
    printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");

    scanf("%d", &quit);
    if (quit == 0) {        
        printf("Choice: %d\n Bye!", quit);
        exit(EXIT_SUCCESS); 
    }
    else {
        printf("Choice: %d\nInvalid choice\n",quit);
    }
    return (0);
}