#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/* Funções auxiliares para ft_strmapi e ft_striteri */
char add_index(unsigned int i, char c)
{
    return (c + i);
}

void to_upper_iter(unsigned int i, char *c)
{
    (void)i;
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}

/* Função para comparar resultado e imprimir OK/FAIL */
void compare_str(const char *desc, const char *ft_res, const char *libc_res)
{
    if ((ft_res && libc_res && strcmp(ft_res, libc_res) == 0) || (ft_res == NULL && libc_res == NULL))
        printf("%s: OK\n", desc);
    else
        printf("%s: FAIL (ft='%s', libc='%s')\n", desc, ft_res ? ft_res : "NULL", libc_res ? libc_res : "NULL");
}

void compare_int(const char *desc, int ft_res, int libc_res)
{
    if (ft_res == libc_res)
        printf("%s: OK\n", desc);
    else
        printf("%s: FAIL (ft=%d, libc=%d)\n", desc, ft_res, libc_res);
}

int main(void)
{
    char str1[] = "42 Lisboa";
    char str2[] = "   1234abc";
    char *dup;
    char *sub;
    char *join;
    char *trim;
    char **split;
    char *mapped;
    int i;

    printf("--- Teste de ft_isalpha vs isalpha ---\n");
    compare_int("ft_isalpha('A')", ft_isalpha('A'), isalpha('A'));

    printf("--- Teste de ft_isdigit vs isdigit ---\n");
    compare_int("ft_isdigit('5')", ft_isdigit('5'), isdigit('5'));

    printf("--- Teste de ft_strlen vs strlen ---\n");
    compare_int("ft_strlen(\"42 Lisboa\")", (int)ft_strlen(str1), (int)strlen(str1));

    printf("--- Teste de ft_toupper vs toupper ---\n");
    compare_int("ft_toupper('a')", ft_toupper('a'), toupper('a'));

    printf("--- Teste de ft_tolower vs tolower ---\n");
    compare_int("ft_tolower('A')", ft_tolower('A'), tolower('A'));

    compare_str("ft_strchr(\"42 Lisboa\", 'L')", ft_strchr(str1, 'L'), strchr(str1, 'L'));
    compare_str("ft_strrchr(\"banana\", 'a')", ft_strrchr("banana", 'a'), strrchr("banana", 'a'));
    compare_int("ft_strncmp(\"abc\", \"abd\", 2)", ft_strncmp("abc", "abd", 2), strncmp("abc", "abd", 2));
    compare_str("ft_memchr(\"abcdef\", 'd', 6)", (char *)ft_memchr("abcdef", 'd', 6), (char *)memchr("abcdef", 'd', 6));
    compare_int("ft_memcmp(\"abc\", \"abd\", 3)", ft_memcmp("abc", "abd", 3), memcmp("abc", "abd", 3));
    compare_int("ft_atoi(\"   1234abc\")", ft_atoi(str2), atoi(str2));

    dup = ft_strdup("duplicar");
    compare_str("ft_strdup(\"duplicar\")", dup, strdup("duplicar"));
    free(dup);

    sub = ft_substr("subtexto", 3, 4);
    compare_str("ft_substr(\"subtexto\",3,4)", sub, "text");
    free(sub);

    join = ft_strjoin("ola ", "mundo");
    compare_str("ft_strjoin(\"ola \",\"mundo\")", join, "ola mundo");
    free(join);

    trim = ft_strtrim("xxxabcxxx", "x");
    compare_str("ft_strtrim(\"xxxabcxxx\",\"x\")", trim, "abc");
    free(trim);

    split = ft_split("um dois tres", ' ');
    printf("ft_split:\n");
    for (i = 0; split && split[i]; i++)
    {
        printf("  [%d] %s\n", i, split[i]);
        free(split[i]);
    }
    free(split);

    mapped = ft_itoa(-123);
    printf("ft_itoa(-123) = %s\n", mapped);
    free(mapped);

    mapped = ft_strmapi("abc", add_index);
    printf("ft_strmapi(\"abc\", add_index) = %s\n", mapped);
    free(mapped);

    char str3[] = "abc";
    ft_striteri(str3, to_upper_iter);
    printf("ft_striteri -> %s\n", str3);

    printf("ft_putchar_fd('X',1): "); ft_putchar_fd('X',1); printf("\n");
    ft_putstr_fd("ft_putstr_fd: Ola\n",1);
    ft_putendl_fd("ft_putendl_fd: fim",1);
    ft_putnbr_fd(42,1);
    printf("\n");

    return 0;
}
