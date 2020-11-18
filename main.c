#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int ft_strlen(char *str);
int ft_isalpha(char c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, int n);
char *ft_strnstr(const char *big, const char *little, int len);
int ft_atoi(const char *nbr);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
void *ft_memset(void *s, int c, int n);

int main(int argc, char **argv)
{
    char *s_tab[5];
    (void)argc;
    //printf("%d\n", ft_strlen(argv[1]));
    //printf("%d\n", ft_isalpha(atoi(argv[1])));
    //printf("%d\n", ft_isdigit(atoi(argv[1])));
    //printf("%d\n", ft_isascii(atoi(argv[1])));
    //printf("%d\n", ft_isprint(atoi(argv[1])));
    //printf("%d\n", ft_toupper(atoi(argv[1])));
    //printf("%d\n", ft_tolower(atoi(argv[1])));
    //printf("%s\n", ft_strchr(argv[1], atoi(argv[2])));
    //printf("%s\n", strchr(argv[1], atoi(argv[2])));
    //printf("%s\n", ft_strrchr(argv[1], atoi(argv[2])));
    //printf("%s\n", strrchr(argv[1], atoi(argv[2])));
    //printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
    //printf("%d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
    //printf("%d\n", ft_atoi(argv[1]));
    //printf("%d\n", atoi(argv[1]));
    //printf("%d", ft_strlcat(argv[1], argv[2], atoi(argv[3])));
    //printf("%s\n", ft_memset(s_tab, atoi(argv[1]), atoi(argv[2])));
    //printf("%s", memset(s_tab, atoi(argv[1]), atoi(argv[2])));
    printf("%s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
    printf("%s", strnstr(argv[1], argv[2], atoi(argv[3])));
}