#include <stdio.h>

char *ma_strcat(char *dest, const char *src) {

while (*dest) {
dest++;  
}


while (*src) {
*dest++ = *src++;  
}

*dest = '\0';  
return dest;   
}

int main() {
char dest[100] = "Bonjour, ";  
char src[] = "monde!";

ma_strcat(dest, src);
printf("%s\n", dest);  

return 0;
}

