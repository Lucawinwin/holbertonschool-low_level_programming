#include <unistd.h>

int main(void) {
char str[] = "_putchar";
write(1, str, 8);  // Écrit la chaîne sur la sortie standard (descripteur de fichier 1)
write(1, "\n", 1); // Écrit un caractère de nouvelle ligne

return 0;
}

