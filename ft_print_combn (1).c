#include <unistd.h>

void	writeBuffer(int buff[], int size, int reset)
{
	char		char_buffer;
	int			i;
	static int	first = 1;

	if (reset)
	{
		first = 1;
		return ;
	}
	if (first)
		first = 0;
	else
		write(1, ", ", 2);
	i = 0;
	while (i < size)
	{
		char_buffer = buff[i] + '0';
		write(1, &char_buffer, 1);
		i++;
	}
}

void	looper(int max_depth, int parent_depth, int parent_value, int buffer[])
{
	int	depth_index;
	int	value;

	depth_index = parent_depth + 1;
	value = parent_value + 1;
	while (value < 10)
	{
		buffer[depth_index] = value;
		if (depth_index == max_depth - 1)
		{
			writeBuffer(buffer, max_depth, 0);
		}
		else
		{
			looper(max_depth, depth_index, value, buffer);
		}
		value++;
	}
}

void	ft_print_combn(int n)
{
	int	buffer[16];

	looper(n, -1, -1, buffer);
	writeBuffer(buffer, -1, 1);
}
