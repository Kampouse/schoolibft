#include "unistd.h"

void	ft_putendl_fd(char *str, int fd)
{
	int		i;
	char	nl;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	write(fd, &nl, 1);
}
