#include <stdio.h>

int main(){
    int VP, VR;
    printf("Digite os valores de P e R: ");
    scanf("%d%d", &VP, &VR);
    if(VP == 0){
        printf("C");
    }else{
        if(VR == 0){
            printf("B");
        }else{
            printf("A");
        }
    }
    return 0;
}