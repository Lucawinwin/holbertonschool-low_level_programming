#include <unistd.h>

int main() {
    int i = 0;

    while (i < 10) {
        putchar(i + '0'); // Print the digit
        i++;
    }
    
    putchar('\n'); // Print newline at the end
		   // return 0;
}
