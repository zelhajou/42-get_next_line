#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 4
#endif

char    *get_next_line(int fd);

size_t  ft_strlen(const char *s);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif