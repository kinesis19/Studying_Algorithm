#include <stdio.h>

int main(void){

    int n1;
    scanf("%d", &n1);

    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n1-i-1; j++){
            printf(" ");
        }
        printf("*");
    }
    return 0;
}