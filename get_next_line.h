#ifndef GET_NEXT_LINE_h
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

/* 
    Main Functions
*/
char    *get_next_line(int fd);
char    *ft_line(char *buffer);
char    *ft_next(char *buffer);
char    *read_file(int fd, char *buffer);


/*
    Util functions
*/
size_t  ft_strlen(char *str);
char    ft_strchr(char *str, int c);
char    *ft_strjoin(char *s1, char *s2);

#endif