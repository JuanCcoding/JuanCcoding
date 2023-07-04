#include <stdio.h> //para la funcion printf
#include <stdlib.h> //
#include <time.h> //para la funcion srand.
#include <windows.h> //sleep funcion

//Autor: Juan Fernandez.
//programa que genere nombres aleatorios de entre los propuestos en la variable y les asigna un mote tambien aleatorio.
//programa para echarnos unas risas

int main ()

{
    char *nombre[]= {"juancaFer","mariaVerin","annellyMuneca","jesusPTJ","cerredageografia","manubamonzao","cristinabalneario","Juancaastillero","SergioMex","aaronsmith","yurijrusia","celsogalego","oskareisntein","ademircaipirinha","profesorJMMM"};
    char *mote[]= {"El_rapido","la_astuta","elHacker","elparlanchin","labruja","eloso","baywatch","extasisado","zorroviejo","satanas","intruso","malware","troyano","eficiente","cerouno","chapatin","ourensan","apatrida","007"};
    int numero, numeromote, contador; //declaramos la variable numero que tomara valores aleatorios del 0-15 y los pasara a la variable nombre para identificarlos con un nombre segun su orden.

    srand(time(NULL));  //pedimos que se inicie una semilla  con valores pseudo aleatorios tomando el tiempo en segundos como referencia.



        for (contador=0 ;contador<100; contador++) //uso de funcion for "contador", que me permite repetir la siguiente instruccion hasta que se cumpla la condicion de que contador es menor que 100 (es decir al llegar a 99 impresiones en pantalla).

        {
            numero= rand()%15;  // numero sera igual a la aleatoriedad de digitos comprendidos de 0 a 15
            numeromote=rand ()%19;
            printf("Mi nombre aleatorio es: %s  y mi mote es: %s\n", nombre[numero],mote[numeromote]); // aqui imprimo el resultado

            Sleep (3000);
        }


        system("pause");
}





