#include <unistd.h>

void	writeInts(int i, int j, int k, int first);

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;
	int	first;

	first = 1;
	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				writeInts(i, j, k, first);
				first = 0;
				k++;
			}
			j++;
		}
		i++;
	}
}

void	writeInts(int i, int j, int k, int first)
{
	char	writer[3];

	if (!first)
	{
		write(1, ", ", 2);
	}
	writer[0] = i + '0';
	writer[1] = j + '0';
	writer[2] = k + '0';
	write(1, &writer, 3);
}
