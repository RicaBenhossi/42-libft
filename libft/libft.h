/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:02:16 by luricard          #+#    #+#             */
/*   Updated: 2021/09/14 21:28:05 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

/**
 * @brief Converts a string into a number (with signal).
 *
 * @param nptr String to convert
 * @return int Integer it found.
 */
int		ft_atoi(const char *nptr);
/**
* @brief  The ft_bzero() function erases the data in the n bytes of the memory
* starting at the location pointed by s, by writing zeros (\0) to that area
* @param b, the pointer to the start memory region to be erased.
* @param len, the lenght in bytes of the region that will be erased.
* @return none
*/
void	ft_bzero(void *s, size_t n);
/**
* @brief The ft_calloc() function allocates size bytes and returns a pointer to
* the allocated memory. The memory is intialized to zero.
* @param nmemb Number of elements to be allocated.
* @param size Size of the elements to be allocated.
* @return A pointer to the memory region which was allocated.
*/
void	*ft_calloc(size_t arr_len, size_t size);
/**
 * @brief Check if the integer c is alphanumeric.
 *
 * @param c Integer to be validated.
 * @return int Return 1 (true) or 0 (false).
 */
int		ft_isalnum(int c);
/**
 * @brief Check if the integer c is an alphabetic character (a..z or A..Z).
 *
 * @param c Integer to be validated.
 * @return int Return 1 (true) or 0 (false).
 */
int		ft_isalpha(int c);
/**
 * @brief Check if the integer c is a valid ascii code.
 *
 * @param c Integer to be validated.
 * @return int Return 1 (true) or 0 (false).
 */
int		ft_isascii(int c);
/**
 * @brief Check if the integer c is a number (0..9).
 *
 * @param c Integer to be validated.
 * @return int Return 1 (true) or 0 (false).
 */
int		ft_isdigit(int c);
/**
 * @brief Check if the integer c is a printable character according to ascii
 * table.
 *
 * @param c Integer to be validated.
 * @return int Return 1 (true) or 0 (false).
 */
int		ft_isprint(int c);
/**
 * @brief Converts an integer to char (the inverse of atoi).
 *
 * @param n Integer to be converted.
 * @return char* Integer in char format.
 */
char	*ft_itoa(int n);
/**
 * @brief Scans the initial n bytes of the memory area pointed to by s for the
 * first instance of c.
 *
 * @param s String to search on.
 * @param c Character your want to find
 * @param n Number of bytes you want to search.
 * @return void* A pointer to the matching byte or NULL if the character does
 * not occur in the  given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n);
/**
 * @brief Compares the first n bytes (each interpreted as unsigned char) of the
 * memory areas s1 and s2.
 *
 * @param s1 First string to be compared.
 * @param s2 Second string to be compared.
 * @param n Number of bytes you want to search.
 * @return Returns an integer less than, equal to, or greater than zero if the
 * first n bytes of s1 is found.
 * For a nonzero return value, the sign is determined by the sign of the
 * difference between the first pair of bytes (interpreted as unsigned char)
 * that differ in s1 and s2.
 * If n is zero, the return value is zero.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/**
* @brief Copies n bytes from memory area src to the memory area dest. The memory
* areas MUST NOT overlap.
* @param dest Pinter to the start of memory to receive the copied bytes
* @param src Pointer to the start of memory area to be copied.
* @param n Length in bytes to be copied.
* @return A pointer to dest.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n);
/**
* @brief Copies n bytes from memory area src to the memory area dest. The memory
* areas may overlap, as the bytes in src are first copied into a temporary array
* that does not overlap src or dest, then copied over to dest.
* @param dest Pointer to the start of memory to receive the copied bytes
* @param src Pointer to the start of memory area to be copied.
* @param n length in bytes to be copied.
* @return A pointer to dest.
*/
void	*ft_memmove(void *dest, const void *src, size_t n);
/**
* @brief Function fills the first len bytes of memory pointed to by dest, with
* the constant byte c.
* @param s Pointer to the memory region to be filled.
* @param c Byte to be filled with.
* @param n Number of the bytes to filled.
* @return Pointer to dest.
*/
void	*ft_memset(void *s, int c, size_t n);
/**
 * @brief Insert the character c inside a file fd.
 *
 * @param c Character to be write into file.
 * @param fd File descriptor on which to write.
 */
void	ft_putchar_fd(char c, int fd);
/**
 * @brief Outputs the string ’s’ to the given file * descriptor, followed by a
 * newline
 *
 * @param s String to output.
 * @param fd File descriptor on which to write.
 */
void	ft_putendl_fd(char *s, int fd);
/**
 * @brief Outputs the integer n to the given file
 * descriptor.
 *
 * @param n String to be write into file.
 * @param fd File descriptor on which to write.
 */
void	ft_putnbr_fd(int n, int fd);
/**
 * @brief Insert a string s inside a file fd.
 *
 * @param s String to be write into file.
 * @param fd File descriptor on which to write.
 */
void	ft_putstr_fd(char *s, int fd);
/**
 * @brief Allocates (with malloc(3)) and returns an array of strings obtained by
 * splitting ’s’ using the character ’c’ as a delimiter. The array must be ended
 * by a NULL pointer.
 *
 * @param s String to be splited.
 * @param c Delimiter character.
 * @return char** The) array of new strings resulting from the split (NULL if the
 * allocation fails.
 */
char	**ft_split(char const *s, char c);
/**
 * @brief Returns a pointer to the first occurrence of char c in the
 * string s.
 *
 * @param s String where to search.
 * @param c Char you want to find
 * @return char* Pointer to the char found (NULL if not found or 'c' or 's'
 * is empty)
 */
char	*ft_strchr(const char *s, int c);
/**
* @brief Function returns a pointer to a new string which is a duplicate of the
* string s.
* @param src Pointer to string to be duplicated.
* @return Pointer to the new string. It returns NULL if insufficient memory was
* available, with errno set to indicate the error.
*/
char	*ft_strdup(const char *s);
/**
 * @brief Applies the function f to each character of the string passed as
 * argument, and passing its index as first argument. Each character is
 * passed by address to f to be modified if necessary.
 *
 * @param s String to be iterated.
 * @param f Function to be applied to character (if necessary).
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/**
 * @brief Allocates (with malloc(3)) and returns a new string, which is the
 * result of the concatenation of ’s1’ and ’s2’.
 *
 * @param s1 Prefix string.
 * @param s2 Suffix string.
 * @return char* The new string (NULL if the allocations fails).
 */
char	*ft_strjoin(char const *s1, char const *s2);
/**
 * @brief Function appends the NUL-terminated string src to the end of dst.
 * It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the
 * result.
 * @param dst Pointer to the string to receive the concatenation.
 * @param src Pointer to the string to concatenate.
 * @param dstsize The ammount of characters to copy, including NULL terminator.
 * @return The ammount of bytes that make up the length of the string they tried
 * to create. For strlcat() that means the initial length of dst plus the
 * length of src. While this may seem somewhat confusing, it was done to make
 * truncation detection simple.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);
/**
 * @brief Copies up to size - 1 characters from the NUL-terminated string src to
 * dst, NUL-terminating the result.
 *
 * @param dest Destination string where to copy.
 * @param src String that will be copied.
 * @param size The number of bytes to copy.
 * @return size_t Total length of the string they tried to create, for strlcpy()
 * that means the length of src.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
/**
 * @brief Calculates the length of the string pointed to by s, excluding the
 * terminating null byte ('\0').
 *
 * @param str String to determine the size.
 * @return size_t The number of bytes in the string pointed to by s.
 */
size_t	ft_strlen(const char *str);
/**
 * @brief Applies the function ’f’ to each character of the string ’s’ to create
 * a new string (with malloc(3)) resulting from successive applications of ’f’.
 *
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return char* The string created from the successive applications of ’f’
 * (NULL if the allocation fails).
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/**
 * @brief Function compares the two strings s1 and s2. The locale is not taken
 * into account (for a locale-aware comparison, see strcoll(3)).
 * The comparison is done using unsigned characters.
 * @param s1 First string to be compared.
 * @param s2 Second string to be compared.
 * @param n Max ammount of characters to be compared.
 * @return An integer less than, equal to, or greater than zero if s1 (or the
 * first n bytes thereof) is found, respectively, to be less than, to match,
 * or be greater than s2.
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/**
 * @brief It locates the first occurrence of the null-terminated string little
 * in the string big, where not more than len characters are searched.
 *
 * @param big Big string to be searched.
 * @param little The string to serach inside big.
 * @param len How much characters you want to search.
 * @return char*
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);
/**
* @brief Returns a pointer to the last occurrence of the character c in the
* string s.
* @param s Pointer to the string to be matched upon.
* @param c Char to match, passed as an int.
* @return Pointer to the first occurrence of the character c in the string str,
* or NULL if the character is not found.
*/
char	*ft_strrchr(const char *s, int c);
/**
 * @brief Cuts out the characters in set of the beginning and end of the string
 *
 * @param s1 String to be trimmed.
 * @param set Characters to be cut off.
 * @return char* Strig trimmed.
 */
char	*ft_strtrim(char const *s1, char const *set);
/**
 * @brief Allocates (with malloc(3)) and returns a substring from the string
 * ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
 *
 * @param s The string from which to create the substring.
 * @param start The start index of the substring in the string 's'.
 * @param len The maximum length of the substring.
 * @return char* The substring. NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);
/**
 * @brief Convert the characters c to lower case.
 *
 * @param c 	- Character to be changed.
 * @return int	- Character changed.
 */
int		ft_tolower(int c);
/**
 * @brief Convert the character c to upper case.
 *
 * @param c 	- Character to be changed.
 * @return int 	- Character changed.
 */
int		ft_toupper(int c);

#endif
