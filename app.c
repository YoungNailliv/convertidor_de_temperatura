#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("Que unidad deseas convertir?(C o F): ");
    scanf("%c",&unit);

    unit = toupper(unit);

    printf("Ingresa la temperatura: ");
    scanf("%f",&temp);

    if(unit=='C'){
        temp = (temp * 9/5 ) + 32;
        printf("La temperatura en Fahrenheit es %f", temp);
    }
    
    else if(unit=='F'){
        temp = (temp - 32) * 5/9;
        printf("La temperatura en Celsius es %f", temp);
    }
    
    else{
        printf("Ingresa una medida valida.");
    }
    



    return 0;
}