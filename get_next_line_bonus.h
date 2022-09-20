#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 9999
# endif

# include <stdlib.h>
# include <unistd.h>

/* 
    Main Functions
*/
char    *get_next_line(int fd);
char    *ft_line(char *buffer);
char    *ft_next(char *buffer);
char    *file_read(int fd, char *buffer);
/*
    Util functions
*/
size_t  ft_strlen(char *str);
char    *ft_strchr(char *str, int c);
char    *ft_strjoin(char *s1, char *s2);

#endif