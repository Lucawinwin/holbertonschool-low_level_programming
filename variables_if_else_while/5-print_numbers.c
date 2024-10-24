#include <unistd.h>

int main() {
int i;

for (i = 0; i < 10; i++) {
	:
putchar(i + '0'); // Print the digit
}
    
putchar('\n'); // Print newline at the end
return 0;
}
