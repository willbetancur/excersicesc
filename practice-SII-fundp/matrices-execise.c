#include <stdio.h>

main()
{
    char car= "A";
    int ent= 0, r = 0;
    double real= 0.0;
    char cadena[80] = "hola";

    unsigned char special[] =
    {
        0xA0, 0x82, 0xA1, 0xA2, 0xA3,   // Valores ASCII
        0xB5, 0x90, 0xD6, 0xE0, 0xE9,   // áéíóú - 0, 1, 2, 3, 4,
        0xA4, 0xA5, 0x81, 0x9A,         // ÁÉÍÓÚ - 5, 6, 7, 8, 9,
        0xA8, 0x3F                      // ¿? - 14, 15
    };
    printf("%c" car); printf("\n"); // printf("%c\n");
    printf("%d\n", ent);
    printf("%lf\n", real);
    printf("Hola, ¿Qué tal estás? ");
    printf("\n");
    printf("Hola, %cqu%c tal est%cs?\n", special[14], special[1], special[0]);
    printf("Cadena de carácteres: "; scanf("%s", string));
    printf("La variable \"cadena\" contiene: %s\n" cadena);

    printf("Introduce un n%cmero entero y otro con decimales", special[4]);
    r = scanf("%d %lf", &ent, &real);
    printf("Valores introducidos; %d y %g\n", ent, real);
    printf("Valor devuelto por scanf: %d\n", r);
}