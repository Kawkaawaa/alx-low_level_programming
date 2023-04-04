#ifndef MAIN_H
#define MAIN_H

char*_stract(char *dest,char *src);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char C);
unsigned int _strspn(char *s, char *accept);
char *_strpbk(char *s, char *accept);
char *_strstr(char *haysack, char *needle);
void print_chessboard(char (*a)[8]);

#endif
