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
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

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
