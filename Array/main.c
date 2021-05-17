#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int mostrarNumeros(int vec[], int tam, int inicio, int ultimo);

int main()
{
    int numeros[TAM];
    for(int i=0;i<TAM;i++)
        {
            printf("Ingrese un numero: \n");
            scanf("%d", &numeros[i]);
        }
    if(mostrarNumeros(numeros, TAM, 5, 2) == 1)
        {
            printf("Hubo un error");
        }
        else
            {
                printf("No hubo un error");
            }

    return 0;
}
int mostrarNumeros(int vec[], int tam, int inicio, int ultimo)
{
    int todoOk=0;
    if(tam>0 && vec != NULL && inicio>=0 && inicio<=tam && ultimo <= tam && ultimo>=0)
        {
           if(inicio<ultimo)
            {
                for(int i= inicio-1 ; i<ultimo ; i++)
                {
                    if(vec[i] != EOF)
                    {
                        printf("%d ", vec[i]);
                    }
                    else
                        {
                            todoOk=1;
                            break;
                        }
                }
            }
            else
                {

                    for(int i= inicio ; i>=ultimo ; i--)
                    {
                        if(vec[i] != EOF)
                        {
                            printf("%d ", vec[i]);
                        }
                        else
                            {
                                todoOk=1;
                                break;
                            }

                    }
                }
        }
        else
            {
                todoOk=1;
            }

    return todoOk;
}
