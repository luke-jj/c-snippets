# C Snippets

## Clear Screen In Unix Compatible Shells
```c
void clear_screen()
{
    // clear screen in unix compatible shells
    printf("\033[H\033[2J");
}
```


## Simple Abort-On-Error Function
```c
void qbort(const char *message)
{
    if (errno) {
        perror(message);
    } else {
        printf("ERROR: %s\n", message);
    }

    exit(1);
}
```


## Simple Data Type - Bytelength Tester
Test for older cpu architectures - [library link](src/typesize-tester/typesize-tester.c)
```c
#include <stdio.h>

int main(int argc, char *argv[])
{
    char character = 8;
    short int shorty = 16;
    int integer = 32;
    long int longer = 64;
    long long int longest = 80;
    float floaty = 32;
    double duble = 64;
    long double longest_duble = 128;

    printf("char:        %ld\n", sizeof(char));
    printf("short:       %ld\n", sizeof(short int));
    printf("int:         %ld\n", sizeof(int));
    printf("long:        %ld\n", sizeof(long int));
    printf("long long:   %ld\n", sizeof(long long int));
    printf("float:       %ld\n", sizeof(float));
    printf("double:      %ld\n", sizeof(double));
    printf("long double: %ld\n", sizeof(long double));

    return 0;
}
```
