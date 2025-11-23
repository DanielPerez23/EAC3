#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//funcio principal
int main (int argc, char **argv) {

//comprovador
if (argc != 4) {
    printf("Proporciona 3 arguments: operador num1 num2\n");
    return 1;
}
    //comproba si es una suma
    if (!strcmp (argv[1], "+"))
        printf ("La suma de %s i %s es %d\n", argv[2], argv[3], atoi(argv[2]) + atoi(argv[3]));
    	//comproba si es una multiplicacio
	else if (!strcmp (argv[1], "*"))
        printf ("El producte de %s i %s es %d\n", argv[2], argv[3], atoi(argv[2]) * atoi(argv[3]));

    return 0;
}
