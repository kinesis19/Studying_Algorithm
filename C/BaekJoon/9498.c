#include <stdio.h>

int main(){
    int n1;
    scanf("%d", &n1);
    if(n1 >= 90){
        printf("A");
    }else if(n1 >= 80){
        printf("B");
    }else if(n1 >= 70){
        printf("C");
    }else if(n1 >= 60){
        printf("D");
    }else{
        printf("F");
    }
    return 0;
}