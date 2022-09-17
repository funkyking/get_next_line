#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <stddef.h>

# ifndef BUFFER_SIZE
#   define BUFFER_SIZE BUFSIZ
# endif

# if BUFFER_SIZE > 9999999999
# undef BUFFER_SIZE
# define BUFFER_SIZE 0
# endif

/*
    get_next_line.c
*/
char    *before_newline(const char *s);
char    *after_newline(const char *s);
void	read_line(int fd, char **save, char **tmp);
char    *inspect_line(char **save, char **tmp);
char    *get_next_line(int fd);

/*
    get_next_line_utils.c
*/
int	find_newline(const char *s);
int	*ft_strlen(char const *string);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
void	*malloc_clean(unsigned int count, unsigned int size);
void    free_str(char **str, char **str2, char **str3);

/* did not end up using
                        char	*ft_strchr(const char *s, int c);
*/