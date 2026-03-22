#include <stdio.h>

void main (){
    float AJ, AP;
    int ano = 0;
    AJ = 1.50;
    AP = 1.1;
    while(AJ >= AP){
        AJ = AJ + 0.02;
        AP = AP + 0.03;
        ano++;
    }
    printf("\nNumero de Anos para que Pedro seja mais alto que Jose: %d\n\n", ano);
}
