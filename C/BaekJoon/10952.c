#include <stdio.h>

int main(void){

    int n1, n2;
    while(1){
        scanf("%d %d", &n1, &n2);
        if(n1+n2 == 0){
            break;
        }else{
            printf("%d\n", n1+n2);
        }
    }
    return 0;
}