#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* \brief Solicita un número al usuario y lo valida
* \param input Se carga el numero ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el numero [0] si no [-1]
*
*/
int getInt(int* input,char message[],char eMessage[], int lowLimit, int hiLimit)
{
    int auxInt;
    int flag = -1;
    int resp;
    printf("%s", message);
    fflush(stdin);          // Se pone bandera por si nos olvidamos un return
    resp = scanf("%d", &auxInt);
    if(resp == 1)
    {
        if(auxInt > lowLimit && auxInt < hiLimit)
        {
            *input = auxInt;
            flag = 0;

        }
    }

    if(flag == -1)
    {
        printf("%s", eMessage);
    }

    return flag;







}

/**
* \brief Solicita un número al usuario y lo valida
* \param input Se carga el numero ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el numero [0] si no [-1]
*
*/
int getFloat(float* input,char message[],char eMessage[], float lowLimit, float hiLimit)
{
    float auxFloat;
    int resp;
    printf("%s", message);
    fflush(stdin);
    resp = scanf("%f", &auxFloat);
    if(resp == 1)
    {
        if(auxFloat > lowLimit && auxFloat < hiLimit)
        {
            *input = auxFloat;
            return 0;

        }
        /*else
        {
            printf("%s", eMessage);
            return -1;
        }*/
    }


    printf("%s", eMessage);
    return -1;



}


/**
* \brief Solicita un caracter al usuario y lo valida
* \param input Se carga el caracter ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el caracter [0] si no [-1]
*
*/
int getChar(char* input,char message[],char eMessage[], char lowLimit, char hiLimit)
{
    char auxChar;
    int resp;
    printf("%s", message);
    fflush(stdin);
    resp = scanf("%c", &auxChar);
    if(resp == 1)
    {
        if(auxChar >= lowLimit && auxChar <= hiLimit)
        {
            *input = auxChar;
            return 0;

        }
        else
        {
            printf("%s", eMessage);
            return -1;
        }
    }


    printf("%s", eMessage);
    return -1;
}


/**
* \brief Solicita una cadena de caracteres al usuario y la valida
* \param input Se carga el string ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Longitud mínima de la cadena
* \param hiLimit Longitud máxima de la cadena
* \return Si obtuvo la cadena [0] si no [-1]
*
*/
int getString(char* input,char message[],char eMessage[], int lowLimit, int hiLimit)
{
    char auxChar[hiLimit];
    int resp;
    printf("%s", message);
    fflush(stdin);
    resp = scanf("%s", auxChar);
    if(resp == 1)
    {
        if(auxChar[lowLimit] >= lowLimit && auxChar[hiLimit] <= hiLimit)
        {
            strcpy(input, auxChar);
            return 0;

        }

    }


    printf("%s", eMessage);
    return -1;
}
