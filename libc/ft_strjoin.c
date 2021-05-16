#include "stdio.h"
#include "stdlib.h"

char	*ft_strcat(char *output, char *str)


{
	char	*helper;

	helper = output;
	while (*output)
		output++;
	while (*str)
	{
		*output = *str;
		str++;
		output++;
	}
	*output = '\0';
	return (helper);
}

unsigned int	ft_strlen(const char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_lenof(char **word, int nbr)
{
	size_t	total;

	total = 0;
	while (nbr >= 0)
	{
		total += ft_strlen(word[nbr]);
		nbr--;
	}
	return (total);
}

char	*ft_strjoin(char **word, char *sep, int nbr)
	{
	int				counter;
	char			*output;
	size_t			total;

	counter = 0;
	total = (nbr * ft_strlen(sep)) + ft_lenof(word, nbr);
	output = malloc(sizeof(char) * total);
	while (counter != nbr)
	{
		if (counter <= nbr - 1)
		{
			ft_strcat(output, word[counter]);
			ft_strcat(output, sep);
		}
		counter++;
	}
	ft_strcat(output, word[counter]);
	return (output);
}
