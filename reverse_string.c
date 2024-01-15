#include <stdio.h>
#include <string.h>

void reverse_string(char* string) {

    char temp;

    int l = 0;
    int r = strlen(string) - 1;

    while (l < r) {
        temp = string[l];
        string[l] = string[r];
        string[r] = temp;

        l++;
        r--;
    }

}

int main() {
    char test[] = "One small step for man";

    printf("%s\n", test);

    reverse_string(test);

    printf("%s\n", test);
}