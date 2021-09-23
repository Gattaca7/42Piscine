#include<unistd.h>

void	ft_print_alphabet(void)
{
	int	a;

	a = 97;
	while (a <= 122)
	{
		write(STDOUT_FILENO, &a, 1);
		a++;
	}
}
