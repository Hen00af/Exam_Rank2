#include <stdio.h>

static void	ft_alpha_mirror(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
	{
		if (str[cnt] >= 'a' && str[cnt] <= 'z')
			str[cnt] += ('A' - 'a');
		else if (str[cnt] >= 'A' && str[cnt] <= 'Z')
			str[cnt] -= ('A' - 'a');
		cnt++;
	}
}
int	main(void)
{
	char	a[] = "qwerty";

	// char str[2];
	// str[0] = 'a';
	// str[1] = 'b';
	printf("before:%s\n", a);
	ft_alpha_mirror(a);
	printf("after:%s", a);
	// if (str[0] >= 'a' && str[0] <= 'z')
	// 	str[0] += ('A' - 'a');
	// printf("%c", str);
	return (0);
}
