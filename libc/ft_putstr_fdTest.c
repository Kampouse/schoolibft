#include "unistd.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

void	ft_putstr_fdTest(void)
{
	char str[] = "help";
	ft_putstr_fd(str,1);
}
