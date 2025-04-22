#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
void	ft_swap_char(char *a, char *b)
{
	char	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
char	*ft_strrev(char *str)
{
	int	len;
	int	start;
	int	end;

	end = len - 1;
	len = ft_strlen(str);
	start = 0;
	end = len - 1;
	while (start < end)
	{
		ft_swap_char(&str[start], &str[end]);
		start++;
		end--;
	}
}
