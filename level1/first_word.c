#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(1, str, len);
	write(1, "\0", 1);
}

int	main(int ac, char **av)
{
	if (ac < 0x01)
		return (1);
	ft_putstr(av[1]);
	return (0);
}