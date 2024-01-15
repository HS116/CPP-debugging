#include <string.h>
#include <stdio.h>

void reverse_string(char* string, int l, int r) {
    if (l >= r) {
        return;
    }

    char temp = string[l];
    string[l] = string[r];
    string[r] = temp;

    return reverse_string(string, l+1, r-1);
}

int main() {

    char test[] = "One small step for man";

    printf("%s\n", test);

    reverse_string(test, 0, strlen(test)-1);

    printf("%s\n", test);

}