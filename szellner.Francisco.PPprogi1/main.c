#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//Francisco Szellner

typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
} ePais;

void actualizarRecuperados(ePais pais, int recuperadosDia);
void invertirCadena(char cadena[]);
void ordenarCaracteres(char cadena[]);

int main()
{
    ePais Argentina= {1000, "Argentina",5,0, 3};
    int recuperados=10;
    char cadena[]="Hola";

    actualizarRecuperados(Argentina, recuperados);
    printf("%d\n", Argentina.recuperados);

    invertirCadena(cadena);
    printf("%s\n", cadena);

    ordenarCaracteres(cadena);
    printf("%s\n", cadena);
    return 0;
}



void actualizarRecuperados(ePais pais, int recuperadosDia)
{
    if(pais.recuperados == 0)
    {
        pais.recuperados = recuperadosDia;
    }
    else
    {
        pais.recuperados = recuperadosDia + pais.recuperados;
    }
}


void invertirCadena(char cadena[])
{
    int longitud = strlen(cadena);
    char aux;
    for(int i = 0; i < strlen(cadena)/2; i++)
    {
        aux = cadena[i];
        cadena[i] = cadena[longitud - i - 1];
        cadena[longitud-i - 1] = aux;
    }
}

void ordenarCaracteres(char cadena[])
{
    int longitud = strlen(cadena);
    char aux;
    for(int h =0;h<longitud;h++)
    {
        cadena[h]=tolower(cadena[h]);
    }
    for(int i=0; i< longitud-1; i++)
    {
        for(int j = i+1; j < longitud; j++)
        {
            if(cadena[i] > cadena[j])
            {
                aux=cadena[i];
                cadena[i]=cadena[j];
                cadena[j]=aux;
            }
        }
    }
}
