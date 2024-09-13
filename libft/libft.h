/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaljabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:39:16 by moaljabe          #+#    #+#             */
/*   Updated: 2024/08/31 13:39:17 by moaljabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/**
 * @brief Allocates memory for an array of `count` elements of `size` bytes each,
 * and initializes all bytes to 0.
 *
 * @param count Number of elements to allocate.
 * @param size Size of each element.
 * @return void* Pointer to the allocated memory.
 * Returns NULL if allocation fails.
 *
 * @example
 * int *arr = ft_calloc(5, sizeof(int));
 * // Allocates memory for 5 integers, all initialized to 0.
 * // The array can be accessed as arr[0], arr[1], etc.
 */
void				*ft_calloc(size_t count, size_t size);

/**
 * @brief Fills the first `len` bytes of the memory area pointed to by `b`
 * with the byte `c`.
 *
 * @param b Pointer to the memory area.
 * @param c Byte to fill the memory with.
 * @param len Number of bytes to fill.
 * @return void* Pointer to the memory area `b`.
 *
 * @example
 * char str[10];
 * ft_memset(str, 'A', 9);
 * str[9] = '\0';
 * // Fills the first 9 characters of `str` with 'A',
 * then null-terminates the string.
 * // The result will be: "AAAAAAAAA".
 */
void				*ft_memset(void *b, int c, size_t len);

/**
 * @brief Fills the first `n` bytes of the memory area pointed to by `s`
 * with zeroes.
 *
 * @param s Pointer to the memory area.
 * @param n Number of bytes to zero out.
 *
 * @example
 * char str[5] = "abcd";
 * ft_bzero(str, 3);
 * // The first three characters of `str` will be set to zero.
 * // The result will be: "\0\0\0d".
 */
void				ft_bzero(void *s, size_t n);

/**
 * @brief Copies `n` bytes from memory area `src` to memory area `dst`.
 *
 * @param dst Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param n Number of bytes to copy.
 * @return void* Pointer to `dst`.
 *
 * @example
 * char src[5] = "abcd";
 * char dst[5];
 * ft_memcpy(dst, src, 5);
 * // Copies the content of `src` to `dst`, including the null terminator.
 * // `dst` will now contain: "abcd".
 */
void				*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief Copies `len` bytes from `src` to `dst`,
 * handling overlapping memory areas.
 *
 * @param dst Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param len Number of bytes to copy.
 * @return void* Pointer to `dst`.
 *
 * @example
 * char str[] = "abcdef";
 * ft_memmove(str + 2, str, 4);
 * // Moves the first 4 characters to start at index 2.
 * // The result will be: "ababcd".
 */
void				*ft_memmove(void *dst, const void *src, size_t len);

/**
 * @brief Scans the initial `n` bytes of the memory area `s`
 * for the byte `c`.
 *
 * @param s Pointer to the memory area.
 * @param c Byte to locate.
 * @param n Number of bytes to scan.
 * @return void* Pointer to the matching byte,
 * or NULL if the byte isn't found.
 *
 * @example
 * char str[] = "Hello, World!";
 * char *result = ft_memchr(str, 'o', 5);
 * // Scans the first 5 bytes of `str` for the byte 'o'.
 * // The result will be a pointer to 'o' in "Hello".
 */
void				*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Compares the first `n` bytes of the memory areas `s1` and `s2`.
 *
 * @param s1 Pointer to the first memory area.
 * @param s2 Pointer to the second memory area.
 * @param n Number of bytes to compare.
 * @return int An integer less than, equal to,
 * or greater than zero if `s1` is found, respectively,
 * to be less than, to match, or be greater than `s2`.
 *
 * @example
 * char str1[] = "abcdef";
 * char str2[] = "abcxyz";
 * int result = ft_memcmp(str1, str2, 3);
 * // Compares the first 3 bytes of `str1` and `str2`.
 * // The result will be 0, since "abc" == "abc".
 */
int					ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Calculates the length of the string `s`,
 * excluding the terminating null byte.
 *
 * @param s Pointer to the string.
 * @return size_t The number of characters in the string.
 *
 * @example
 * char str[] = "Hello, World!";
 * size_t length = ft_strlen(str);
 * // The result will be 13, the length of "Hello, World!".
 */
size_t				ft_strlen(const char *s);

/**
 * @brief Copies up to `dstsize` - 1 characters from the string `src`
 * to `dst`,
 * null-terminating the result if `dstsize` is not 0.
 *
 * @param dst Pointer to the destination buffer.
 * @param src Pointer to the source string.
 * @param dstsize Size of the destination buffer.
 * @return size_t The total length of the string `src`.
 *
 * @example
 * char dst[6];
 * size_t result = ft_strlcpy(dst, "Hello, World!", sizeof(dst));
 * // Copies "Hello" into `dst` (5 characters plus null-terminator).
 * // The result will be 13, which is the full length of "Hello, World!".
 */
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * @brief Duplicates the string `s1`, allocating memory for the new string.
 *
 * @param s1 Pointer to the string to duplicate.
 * @return char* Pointer to the newly allocated duplicate string,
 * or NULL if memory allocation fails.
 *
 * @example
 * char *dup = ft_strdup("Hello");
 * // `dup` will be a new string with the content "Hello".
 * // You need to free the memory allocated for `dup` when done.
 */
char				*ft_strdup(const char *s1);

/**
 * @brief Appends the string `src` to `dst`,
 * ensuring that `dst` is null-terminated
 * and the total size of the destination buffer is `dstsize`.
 *
 * @param dst Pointer to the destination buffer.
 * @param src Pointer to the source string.
 * @param dstsize Size of the destination buffer.
 * @return size_t The total length of the string `dst` would have been
 * if there were enough space.
 *
 * @example
 * char dst[10] = "Hello";
 * ft_strlcat(dst, ", World!", sizeof(dst));
 * // Appends ", World!" to `dst`, but since `dst` is too small,
 * the result will be "Hello, Wo".
 */
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * @brief Locates the first occurrence of the character `c`
 * in the string `s`.
 *
 * @param s Pointer to the string.
 * @param c Character to locate.
 * @return char* Pointer to the first occurrence of `c`,
 * or NULL if `c` is not found.
 *
 * @example
 * char *result = ft_strchr("Hello, World!", 'W');
 * // `result` will point to the "World!" part of the string.
 */
char				*ft_strchr(const char *s, int c);

/**
 * @brief Locates the last occurrence of the character `c` in the string `s`.
 *
 * @param s Pointer to the string.
 * @param c Character to locate.
 * @return char* Pointer to the last occurrence of `c`,
 * or NULL if `c` is not found.
 *
 * @example
 * char *result = ft_strrchr("Hello, World!", 'o');
 * // `result` will point to the "o" in "World!".
 */
char				*ft_strrchr(const char *s, int c);

/**
 * @brief Locates the first occurrence of the substring `needle`
 * in the string `haystack`,
 * but only searches up to `len` characters.
 *
 * @param haystack The string to search in.
 * @param needle The substring to search for.
 * @param len Maximum number of characters to search.
 * @return char* Pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 *
 * @example
 * char *result = ft_strnstr("Hello, World!", "World", 8);
 * // Since we only search up to 8 characters, "World" will not be found.
 * // The result will be NULL.
 */
char				*ft_strnstr(const char *haystack,
						const char *needle, size_t len);

/**
 * @brief Compares up to `n` characters of the strings `s1` and `s2`.
 *
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @param n The maximum number of characters to compare.
 * @return int An integer less than, equal to,
 * or greater than zero if `s1` is found,
 * respectively, to be less than, to match, or to be greater than `s2`.
 *
 * @example
 * int result = ft_strncmp("abc", "abd", 2);
 * // The result will be 0,
 * since the first two characters "ab" are equal in both strings.
 */
int					ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Converts the string `str` to an integer.
 *
 * @param str The string to convert.
 * @return int The converted integer value.
 *
 * @example
 * int result = ft_atoi("42");
 * // The result will be 42.
 */
int					ft_atoi(const char *str);

/**
 * @brief Checks if the given character `c` is an alphabetic letter.
 *
 * @param c The character to check.
 * @return int 1 if `c` is alphabetic, 0 otherwise.
 *
 * @example
 * int result = ft_isalpha('A');
 * // The result will be 1 since 'A' is alphabetic.
 */
int					ft_isalpha(int c);

/**
 * @brief Checks if the given character `c` is a digit.
 *
 * @param c The character to check.
 * @return int 1 if `c` is a digit, 0 otherwise.
 *
 * @example
 * int result = ft_isdigit('5');
 * // The result will be 1 since '5' is a digit.
 */
int					ft_isdigit(int c);

/**
 * @brief Checks if the given character `c` is alphanumeric
 * (either a letter or a digit).
 *
 * @param c The character to check.
 * @return int 1 if `c` is alphanumeric, 0 otherwise.
 *
 * @example
 * int result = ft_isalnum('A');
 * // The result will be 1 since 'A' is alphanumeric.
 */
int					ft_isalnum(int c);

/**
 * @brief Checks if the given character `c` is part of the ASCII
 * character set.
 *
 * @param c The character to check.
 * @return int 1 if `c` is an ASCII character, 0 otherwise.
 *
 * @example
 * int result = ft_isascii(128);
 * // The result will be 0 since 128 is not a valid ASCII character.
 */
int					ft_isascii(int c);

/**
 * @brief Checks if the given character `c` is printable (including space).
 *
 * @param c The character to check.
 * @return int 1 if `c` is printable, 0 otherwise.
 *
 * @example
 * int result = ft_isprint(' ');
 * // The result will be 1 since a space is a printable character.
 */
int					ft_isprint(int c);

/**
 * @brief Converts the given character `c` to uppercase
 * if it is a lowercase letter.
 *
 * @param c The character to convert.
 * @return int The uppercase equivalent of `c`, or `c`
 * if it is not a lowercase letter.
 *
 * @example
 * int result = ft_toupper('a');
 * // The result will be 'A'.
 */
int					ft_toupper(int c);

/**
 * @brief Converts the given character `c` to lowercase
 * if it is an uppercase letter.
 *
 * @param c The character to convert.
 * @return int The lowercase equivalent of `c`, or `c`
 * if it is not an uppercase letter.
 *
 * @example
 * int result = ft_tolower('A');
 * // The result will be 'a'.
 */
int					ft_tolower(int c);

/**
 * @brief Allocates (with malloc) and
 * returns a block of memory of `size` bytes, initialized to 0.
 *
 * @param size The size of the block of memory to allocate.
 * @return void* A pointer to the allocated memory,
 * or NULL if the allocation fails.
 *
 * @example
 * int *arr = (int *)ft_malloc_gc(5 * sizeof(int));
 * // Allocates memory for 5 integers, all initialized to 0.
 * // The array can be accessed as arr[0], arr[1], etc.
 */
void				*ft_malloc_gc(size_t size);

/**
 * @brief Allocates (with malloc) and returns a new string of size `size`,
 * initialized to 0.
 *
 * @param size The size of the new string.
 * @return char* A pointer to the newly allocated string,
 * or NULL if the allocation fails.
 *
 * @example
 * char *str = ft_strnew(10);
 * // Allocates a new string of size 10, initialized to 0.
 */
char				*ft_strnew(size_t size);

/**
 * @brief Applies the function `f` to each character of the string `s`,
 * passing its index as the first argument.
 *
 * @param s The string to iterate over.
 * @param f The function to apply to each character and its index.
 *
 * @example
 * void to_upper(unsigned int i, char *c) { *c = ft_toupper(*c); }
 * char str[] = "hello";
 * ft_striteri(str, to_upper);
 * // Converts each character in `str` to uppercase.
 * // The result will be "HELLO".
 */
void				ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
 * @brief Applies the function `f` to each character of the string `s`
 * and its index, returning a new string.
 *
 * Allocates (with malloc) and
 * returns a new string resulting from the successive applications
 * of the function `f` to each character of the string `s`.
 * The function `f` is passed the index
 * of the character as its first argument.
 *
 * @param s The string to map over.
 * @param f The function to apply to each character and its index.
 * @return char* A new string with the transformed characters,
 * or NULL if memory allocation fails.
 *
 * @example
 * char to_upper(unsigned int i, char c) { return ft_toupper(c); }
 * char *str = ft_strmapi("hello", to_upper);
 * // The result will be "HELLO", a newly allocated string.
 */
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Allocates (with malloc) and returns a new string,
 * which is the result of the concatenation of `s1` and `s2`.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @return char* A newly allocated concatenated string,
 * or NULL if memory allocation fails.
 *
 * @example
 * char *joined = ft_strjoin("Hello, ", "World!");
 * // The result will be "Hello, World!", a newly allocated string.
 */
char				*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Allocates (with malloc) and
 * returns a copy of `s1` with the characters specified in `set`
 * removed from the beginning and the end.
 *
 * @param s1 The string to trim.
 * @param set The set of characters to remove from the beginning
 * and end of the string.
 * @return char* A newly allocated trimmed string,
 * or NULL if memory allocation fails.
 *
 * @example
 * char *trimmed = ft_strtrim("   Hello, World!   ", " ");
 * // The result will be "Hello, World!", a newly allocated string.
 */
char				*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Splits a string into an array of substrings using a delimiter.
 *
 * This function takes a string `s` and splits it into an array of
 * null-terminated substrings, separated by the character `c`.
 * The array of substrings is dynamically allocated, and the last
 * element of the array is set to `NULL` to indicate the end.
 *
 * @param s The input string to be split.
 * @param c The delimiter character used to separate substrings in the string.
 * @return char** A null-terminated array of substrings. If memory allocation
 * fails or if `s` is NULL, the function returns NULL.
 *
 * @note The caller is responsible for freeing the memory allocated for the
 * array and the individual substrings.
 *
 * @example
 * char **result = ft_split("Hello,World,42", ',');
 * The resulting array would be:
 * result[0] = "Hello"
 * result[1] = "World"
 * result[2] = "42"
 * result[3] = NULL
 */
char				**ft_split(char const *str, char delimiter);

/**
 * @brief Converts an integer `n` to a null-terminated string.
 *
 * Allocates (with malloc) and returns a string representing the integer `n`.
 *
 * @param n The integer to convert.
 * @return char* A newly allocated string representing the integer,
 * or NULL if memory allocation fails.
 *
 * @example
 * char *str = ft_itoa(123);
 * // The result will be "123", a newly allocated string.
 */
char				*ft_itoa(int n);

/**
 * @brief Outputs the character `c` to the given file descriptor.
 *
 * @param c The character to output.
 * @param fd The file descriptor to output to.
 *
 * @example
 * ft_putchar_fd('A', 1);
 * // The result will be the character 'A' printed to the standard output
 * (file descriptor 1).
 */
void				ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string `s` to the given file descriptor.
 *
 * @param s The string to output.
 * @param fd The file descriptor to output to.
 *
 * @example
 * ft_putstr_fd("Hello, World!", 1);
 * // The result will be "Hello, World!" printed to the standard output
 * (file descriptor 1).
 */
void				ft_putstr_fd(char const *s, int fd);

/**
 * @brief Outputs the string `s` to the given file descriptor
 * followed by a newline.
 *
 * @param s The string to output.
 * @param fd The file descriptor to output to.
 *
 * @example
 * ft_putendl_fd("Hello, World!", 1);
 * // The result will be "Hello, World!" printed to the standard output,
 * followed by a newline.
 */
void				ft_putendl_fd(char const *s, int fd);

/**
 * @brief Outputs the integer `n` to the given file descriptor.
 *
 * @param n The integer to output.
 * @param fd The file descriptor to output to.
 *
 * @example
 * ft_putnbr_fd(42, 1);
 * // The result will be "42" printed to the standard output
 * (file descriptor 1).
 */
void				ft_putnbr_fd(int n, int fd);

/**
 * @brief Allocates (with malloc) and returns a new element of the list.
 *
 * The content of the new element is initialized by copying the value of
 * `content`, and `content_size` is initialized by copying `content_size`.
 * The next pointer is initialized to NULL.
 *
 * @param content The content to initialize the new element with.
 * @param content_size The size of the content.
 * @return t_list* A pointer to the newly allocated list element,
 * or NULL if memory allocation fails.
 *
 * @example
 * t_list *new_elem = ft_lstnew("Hello", 6);
 * // Creates a new list element where content is "Hello" and
 * content_size is 6.
 */
t_list				*ft_lstnew(void const *content, size_t content_size);

/**
 * @brief Frees the memory of the element's content using the function `del`,
 * then frees the element.
 * The memory of `next` is not freed.
 *
 * @param alst The list element to free.
 * @param del The function used to free the content.
 *
 * @example
 * void del_func(void *content, size_t size) { free(content); }
 * t_list *elem = ft_lstnew("Hello", 6);
 * ft_lstdelone(&elem, del_func);
 * // Frees the content and the element itself, using `del_func`.
 */
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

/**
 * @brief Frees the memory of the content of each element of the list,
 * and then frees the element itself.
 * The memory of `next` is also freed recursively.
 *
 * @param alst The pointer to the list to be freed.
 * @param del The function used to free the content of each element.
 *
 * @example
 * void del_func(void *content, size_t size) { free(content); }
 * t_list *list = ft_lstnew("Hello", 6);
 * ft_lstdel(&list, del_func);
 * // Frees the entire list.
 */
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));

/**
 * @brief Adds the element `new` at the beginning of the list.
 *
 * @param alst The pointer to the first element of the list.
 * @param new The new element to add at the beginning.
 *
 * @example
 * t_list *list = ft_lstnew("Hello", 6);
 * t_list *new_elem = ft_lstnew("World", 6);
 * ft_lstadd_front(&list, new_elem);
 * // Adds `new_elem` to the beginning of `list`.
 */
void				ft_lstadd_front(t_list **alst, t_list *new);

/**
 * @brief Iterates the list `lst` and
 * applies the function `f` to the content of each element.
 *
 * @param lst The list to iterate over.
 * @param f The function to apply to the content of each element.
 *
 * @example
 * void print_content(t_list *elem) { printf("%s\n", (char *)elem->content); }
 * t_list *list = ft_lstnew("Hello", 6);
 * ft_lstiter(list, print_content);
 * // Prints the content of each element in the list.
 */
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));

/**
 * @brief Iterates the list `lst` and
 * applies the function `f` to the content of each element.
 * Creates a new list resulting from the successive applications of `f`.
 *
 * @param lst The list to iterate over.
 * @param f The function to apply to the content of each element.
 * @return t_list* A new list, or NULL if memory allocation fails.
 *
 * @example
 * t_list *duplicate_content(t_list *elem)
 * { return ft_lstnew(elem->content, elem->content_size); }
 * t_list *new_list = ft_lstmap(list, duplicate_content);
 * // Creates a new list with the content of the original list duplicated.
 */
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/**
 * @brief Adds the element `new` at the end of the list.
 *
 * @param alst The pointer to the first element of the list.
 * @param new The new element to add at the end.
 *
 * @example
 * t_list *list = ft_lstnew("Hello", 6);
 * t_list *new_elem = ft_lstnew("World", 6);
 * ft_lstadd_back(&list, new_elem);
 * // Adds `new_elem` to the end of `list`.
 */
void				ft_lstadd_back(t_list **alst, t_list *new);

/**
 * @brief Allocates (with malloc) and
 * returns a substring from the string `s`,
 * starting at index `start` and of length `len`.
 *
 * @param s The source string.
 * @param start The starting index of the substring.
 * @param len The length of the substring.
 * @return char* A newly allocated substring,
 * or NULL if memory allocation fails.
 *
 * @example
 * char *substr = ft_substr("Hello, World!", 7, 5);
 * // The result will be "World", a newly allocated string.
 */
char				*ft_substr(char const *s, unsigned int start, size_t len);

#endif
