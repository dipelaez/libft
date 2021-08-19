#ifndef	LIBFT_H
# define	LIBFT_H

# define INT_MIN -2147483648
# define INT_MAX 2147783647

#include	<stddef.h>
#include	<unistd.h>
#include	<stdlib.h>

//Part 1 - Libc function

/**
 * @brief Checks if the passed character is alphabetic.
 * 
 * @param c This is the param to be checked.
 * @return This function returns non-zero value if c is an alphabetic, else it 
 * returns 0.
*/
int		ft_isalpha(int  c);

/**
 * @brief Checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).
 * 
 * @param c This is the param to be checked.
 * @return This function returns non-zero value if c is an alphanumeric, else it 
 * returns 0.
*/
int		ft_isalnum(int	c);

/**
 * @brief Checks if the character is ASCII.
 * 
 * @param c This is the param to be checked.
 * @return This function returns non-zero value if c is an ASCII, else it 
 * returns 0.
*/
int		ft_isascii(int	c);

/**
 * @brief Checks for a digit (0 through 9).
 * 
 * @param c This is the param to be checked.
 * @return This function returns non-zero value if c is a digit, else it 
 * returns 0.
*/
int		ft_isdigit(int	c);

/**
 * @brief Checks for any printable character including space.
 * 
 * @param c This is the param to be checked.
 * @return This function returns non-zero value if c is printable, else it 
 * returns 0.
*/
int		ft_isprint(int	c);

/**
 * @brief Calculates the length of the string pointed to by s,
 *  excluding the terminating null byte.
 * 
 * @param s This is the string whose lenght is to be found.
 * @return Returns the number of characters in the string pointed to by s.
*/
size_t	ft_strlen(const char	*s);


void	*ft_memset(void	*s, int	c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void	*dest, const void	*src, size_t n);
void	*ft_memmove(void	*dest, const void	*src, size_t	n);
size_t	ft_strlcpy(char	*dst, const char	*src, size_t	size);
int	ft_toupper(int	c);
int	ft_tolower(int	c);
char	*ft_strchr(const char	*s, int	c);
char	*ft_strrchr(const	char *s, int	c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int	ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char	*s);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
