#include <stdio.h>

int main(void) 
{
size_t taille = 10;
unsigned char tableau[10];

remplirMemoire(tableau, taille, 0xAB);

for (size_t i = 0; i < taille; i++) {
printf("%02X ", tableau[i]);
}
return 0;
}
