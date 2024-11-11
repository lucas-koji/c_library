#ifndef CLIB_H
# define CLIB_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

/* UTILS */
int		atoi(const char *nptr);
int		isalnum(int c);
int		isalpha(int c);
int		isascii(int c);
int		isdigit(int c);
int		isprint(int c);
int		tolower(int c);
int		toupper(int c);

/* FILE DESCRIPTOR */
void	putchar_fd(char c, int fd);
void	putendl_fd(char *s, int fd);
void	putnbr_fd(int n, int fd);
void	putstr_fd(char *s, int fd);

/* MEMORY */
void	*bzero(void *s, size_t n);
void	*calloc(size_t nmeb, size_t size);
void	*memchr(const void *s, int c, size_t n);
int		memcmp(const void *s1, const void *s2, size_t n);
void	*memcpy(void *dst, const void *src, size_t n);
void	*memmove(void *dst, const void *src, size_t n);
void	*memset(void *s, int c, size_t n);

/* STRING */
char	*itoa(int n);
char	**split(char const *s, char c);
char	*strchr(const char *s, int c);
char	*strdup(const char *s);
void	striteri(char *s, void (*f)(unsigned int, char *));
char	*strjoin(char const *s1, char const *s2);
size_t	strlcat(char *dst, const char *src, size_t dsize);
size_t	strlcpy(char *dst, const char *src, size_t dsize);
size_t	strlen(const char *s);
char	*strmapi(char const *s, char (*f)(unsigned int, char));
int		strncmp(const char *s1, const char *s2, size_t n);
char	*strnstr(const char *big, const char *little, size_t len);
char	*strrchr(const char *s, int c);
char	*strtrim(char const *s1, char const *set);
char	*substr(char const *s, unsigned int start, size_t len);

#endif
