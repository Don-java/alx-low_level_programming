#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int _putchar(char);
char *creat_array(unsigned int size, char c);
char *_strdup(char *sl, char *s2);
int  **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char **strtow(char *str);

#endif
