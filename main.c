#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;

	s = (char*)malloc(sizeof(char) * (size + 1));
	if (s)
	{
		ft_bzero(s, size + 1);
		return (s);
	}
	return (NULL);
}

char	*ft_itoaa(int nbr)
{
	int		length;
	int		sign;
	char	*str;

	sign = nbr;
	length = 1;
	while (sign /= 10)
		length++;
	sign = nbr < 0 ? 1 : 0;
	length = nbr < 0 ? length += 1 : length;
	if (nbr == -2147483648)
		return (str = ft_strdup("-2147483648"));
	str = ft_strnew(length);
	if (!str)
		return (NULL);
	if (sign)
		str[0] = '-';
	nbr = nbr < 0 ? nbr *= -1 : nbr;
	while (--length >= sign)
	{
		str[length] = (nbr >= 10) ? (nbr % 10) + 48 : nbr + 48;
		nbr /= 10;
	}
	str[ft_strlen(str)] = '\0';
	return (str);
}

int main(int argc, char **argv)
{
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
    //printf("%zu", ft_strlcat(argv[1], argv[2], atoi(argv[3])));
    //printf("%s\n", ft_memset(s_tab, atoi(argv[1]), atoi(argv[2])));
    //printf("%s", memset(s_tab, atoi(argv[1]), atoi(argv[2])));
    //printf("%s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
    //printf("%s", strnstr(argv[1], argv[2], atoi(argv[3])));
    //printf("%s\n", ft_strdup(argv[1]));
    //printf("%s", strdup(argv[1]));
    //printf("%s", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
    //printf("%s", ft_strjoin(argv[1], argv[2]));
    printf("%s\n", ft_itoa(atoi(argv[1])));
    printf("%s", ft_itoaa(atoi(argv[1])));

}