/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float prova1 = 8.5;
    float prova2 = 4.8;
    float resultado = (prova1 + prova2)/2;
    
    if (resultado >= 5) {
        printf ("passou");
    } else {
        printf ("não passou");
    }

    return 0;
}