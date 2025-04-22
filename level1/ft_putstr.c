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

int	main(void)
{
	char	*a;

	a = "qwerty";
	ft_putstr(a);
	return (0);
}
