#include <stdio.h>
#include <stdlib.h>
int main()
{
    int temperaturaC, suma, i=0;
    float temperaturaF, promedio;
    char comparacion;
    printf("¿Que tipo de temperatura se medira? (c=celcius f=fahrenheit)\t");
    scanf("%c",comparacion);
    if(comparacion =='c' || comparacion=='C')
    {
        system("cls");
        while( temperaturaC != 0)
        {
            printf("ingrese el valor de la tempratura\t");
            scanf("%i",&temperaturaC);
            i++;
        }
        suma+=temperaturaC;
        promedio=(float)suma/i;
        printf("El promedio de la temperatura es: %f °C",promedio);
    }
    if(comparacion =='f' || comparacion=='F')
    {
        system("cls");
        while( temperaturaF != 0)
        {
            printf("ingrese el valor de la tempratura\t");
            scanf("%i",&temperaturaF);
            i++;
        }
        suma+=temperaturaF;
        promedio=(float)suma/i;
        printf("El promedio de la temperatura es: %f °F",promedio);
    }
}
