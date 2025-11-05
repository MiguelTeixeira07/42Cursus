#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char		*c_str = "Olá 42!";
	char		*null_str = NULL;
	int			c = 'A';
	int			num = 42;
	int			neg = -12345;
	unsigned int	u = 4294967295U; // max unsigned int
	void		*ptr = &num;
	void		*null_ptr = NULL;

	printf("=== Teste %%c ===\n");
	printf("printf   : [%c]\n", c);
	ft_printf("ft_printf: [%c]\n\n", c);

	printf("=== Teste %%s ===\n");
	printf("printf   : [%s]\n", c_str);
	ft_printf("ft_printf: [%s]\n", c_str);
	printf("printf   : [%s]\n", null_str);
	ft_printf("ft_printf: [%s]\n\n", null_str);

	printf("=== Teste %%p ===\n");
	printf("printf   : [%p]\n", ptr);
	ft_printf("ft_printf: [%p]\n", ptr);
	printf("printf   : [%p]\n", null_ptr);
	ft_printf("ft_printf: [%p]\n\n", null_ptr);

	printf("=== Teste %%d e %%i ===\n");
	printf("printf   : [%d] [%i]\n", num, neg);
	ft_printf("ft_printf: [%d] [%i]\n\n", num, neg);

	printf("=== Teste %%u ===\n");
	printf("printf   : [%u]\n", u);
	ft_printf("ft_printf: [%u]\n\n", u);

	printf("=== Teste %%x e %%X ===\n");
	printf("printf   : [%x] [%X]\n", num, num);
	ft_printf("ft_printf: [%x] [%X]\n\n", num, num);

	printf("=== Teste %% (percentagem literal) ===\n");
	printf("printf   : [%%]\n");
	ft_printf("ft_printf: [%%]\n\n");

	printf("=== Teste combinado ===\n");
	printf("printf   : Caractere=%c, String=%s, Ponteiro=%p, Inteiro=%d, Hex=%x, Percent=%%\n",
		c, c_str, ptr, num, num);
	ft_printf("ft_printf: Caractere=%c, String=%s, Ponteiro=%p, Inteiro=%d, Hex=%x, Percent=%%\n",
		c, c_str, ptr, num, num);

	printf("\n=== Testes extra de robustez ===\n");
	printf("printf   : [%s]\n", (char *)0);
	ft_printf("ft_printf: [%s]\n", (char *)0);

	printf("printf   : [%p]\n", (void *)0);
	ft_printf("ft_printf: [%p]\n", (void *)0);

	printf("printf   : [%d]\n", (int)0);
	ft_printf("ft_printf: [%d]\n", (int)0);

	printf("printf   : [Antes%%%sDepois]\n", (char *)0);
	ft_printf("ft_printf: [Antes%%%sDepois]\n", (char *)0);

	printf("printf   : [%%%%]\n");
	ft_printf("ft_printf: [%%%%]\n");

	printf("printf   : [] (string vazia)\n");
	ft_printf("ft_printf: [] (string vazia)\n");

	return (0);
}