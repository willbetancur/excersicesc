#include <stdio.h>

typedef enum colores{
    azul, amarillo, rojo, verde, blanco, negro
} t_colores;

int main() 
{
    t_colores color = azul;
    printf("color: ");
    scanf("%d", &color);
    printf("%d\n", color);
    if (color == verde) 
        printf("esperanza\n");

    return 0;
}