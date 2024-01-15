#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

struct Penguin {
    int age;
    char* name;
};

struct Penguin1 {
    int id;
    unsigned char age;
    char color;
};

struct Penguin2 {
    unsigned char age;
    int id;
    char color;
};

union Number {
    char a;
    int b;
};

int main(void) {
    printf("%s\n", "hello world");

    int a = 5;

    int* ptr = &a;

    printf("%d\n", *ptr);

    /*
    Equivalent
    ptr[3] = *(ptr+3)
    */

    // Arrays practise

    int arr[] = {1, 2, 3};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        printf("%d\n", arr[i]);
    }

    int8_t num = 5;

    // Strings
    char str1[] = {'a', 'b', 'c', '\0'};

    char str2[] = "abc";

    char* str3 = "abc";

    // Structs and padding of the structs and padding within the structs

    struct Penguin penguin3 = {5, "jeff"};
    printf("%lu\n", sizeof(struct Penguin1));
    printf("%lu\n", sizeof(struct Penguin2));

    union Number num1 = {.b=5};

    // Safety in C

    char buffer[5];

    // fgets() is much better than gets() and scanf() because we actually limit the size
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        printf("%s\n", buffer);
    } else {
        printf("Error with reading input");
    }



}