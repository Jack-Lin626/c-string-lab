#ifndef MY_STRING_H
#define MY_STRING_H

#include <stddef.h>

/* length */
// using size_t because returning size, which is unsign int. 
size_t  my_strlen(const char *str);

/* copy */
char *my_strcpy(char *dest, const char *src);
char *my_strncpy(char *dest, const char *src, size_t n);

/* concatenate */
char *my_strcat(char *dest, const char *src);
char *my_strncat(char *dest, const char *src, size_t n);

/* compare */
int my_strcmp(const char *s1, const char *s2);
int my_strncmp(const char *s1, const char *s2, size_t n);

/* search */
char *my_strchr(const char *str, int c);
char *my_strrchr(const char *str, int c);
char *my_strstr(const char *haystack, const char *needle);

/* tokenize */
char *my_strtok(char *str, char* delim);

/* convert */
int my_atoi(const char *str){

/* memory function */
void *my_memcpy(void *dest, const void *src, size_t n);
void *my_memmove(void *dest, const void *src, size_t n);
void *my_memset(void *ptr, int value, size_t n);
int my_memcmp(const void *ptr1, const void *ptr2, size_t n);


#endif

