#include <unistd.h>

int	get_digit_count(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb != 0)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

void	ft_putnbr(int nb)
{
	int		digit_count;
	int		character_index;
	char	characters[12];
	int		negative;

	digit_count = get_digit_count(nb);
	character_index = digit_count - 1;
	negative = 0;
	if (nb < 0)
	{
		nb = -nb;
		characters[0] = '-';
		negative = 1;
	}
	while (character_index >= 0)
	{
		characters[character_index] = (nb % 10) + '0';
		nb = nb / 10;
		character_index--;
		if (negative && character_index == 0)
		{
			character_index--;
		}
	}
	write(1, characters, digit_count);
}
