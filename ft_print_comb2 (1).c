#include <unistd.h>

void	print_two_digit_int(int i)
{
	int		d1;
	int		d2;
	char	c[2];

	d1 = i % 10;
	d2 = (i / 10) % 10;
	c[0] = d2 + '0';
	c[1] = d1 + '0';
	write(1, c, 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	first;

	first = 1;
	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			if (first)
				first = 0;
			else
				write(1, ", ", 2);
			print_two_digit_int(a);
			write(1, " ", 1);
			print_two_digit_int(b);
			b++;
		}
		a++;
	}
}

int	main (void)
{
	ft_print_comb2();
	return(0);
}
