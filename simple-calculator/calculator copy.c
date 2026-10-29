#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int number;
    char name[4][10] = {"Add", "Subtract", "Multiply","Divide"};
    int quit;
    printf("Simple calcultor\n");
    for (int i=0;i<=3;i++){
        printf("%d) ", i+1);
        printf("%s\n", name[i]);
    }
    printf("0) Quit\n");
    scanf("%d", &quit);
    if (quit == 0) {        
        printf("Choice: %d\n Bye!", quit);
        exit(EXIT_SUCCESS); 
    }
    return (0);
}