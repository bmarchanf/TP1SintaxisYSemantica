#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("%s \n","Ingrese oracion");

    int caracter=getchar();


    while(caracter != EOF)
    {
        if(isupper(caracter))
            putchar(tolower(caracter));
        else if(islower(caracter))
            putchar(toupper(caracter));
        else if(!isdigit(caracter))     
            putchar(caracter);
 
        caracter=getchar();

        if(caracter=='\n')
            printf("\n %s \n","Ingrese oracion");
    }

    return 0;
}