#ifndef MAIN_H
#define MAIN_H

char *_memset(char *s, char b, unsigned int n);
cgar *_memcpy(char *dest, char *src, unsigned int n);
char *strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
int _putchar(char c);

#endif
