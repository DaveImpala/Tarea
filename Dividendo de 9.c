#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dividendo=0, comparacion, suma;
    float promedio;
    char rep;

    do
    {
        system("cls");
        printf("\t\t\tPrograma de numeros divisibles entre 9\n\n");
        printf("\n\ningrese un numero\t");
        scanf("%d", &dividendo);
        while(dividendo==0)
        {
            printf("\n\ningrese un numero\t");
            scanf("%d", &dividendo);
        }
        comparacion=dividendo%9;
        if(comparacion==0)
        {
            printf("Si es divisible entre 9\n");
            suma+=dividendo;
        }
        else
        {
            printf("no es divisible entre 9\n");
        }
        fflush(stdin);
        printf("¿Desea ingresar otro numero?\t");
        scanf("%c",&rep);
    }while(rep=='s' || rep=='S');
    system("color a1");
    printf("la suma de los numeros divisores es: %d\n\n",suma);
    system("pause");
    return 0;
}
