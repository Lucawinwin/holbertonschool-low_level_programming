#include <stdio.h>

void reset_to_98(int *n) {
*n = 98;
}

int main() {
int value = 42;
printf("Avant : %d\n", value);
reset_to_98(&value);
printf("Après : %d\n", value);
return 0;
}
