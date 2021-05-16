/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 16:39:15 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/15 15:40:48 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

unsigned int	ft_strlentw(const char *str, char sep, unsigned int index)
{
	unsigned int	ccp;

	ccp = 0;
	while (str[index] && str[index] != sep)
	{
		index++;
		ccp++;
	}
	ccp++;
	return (ccp);
}

char	*ft_strcat(char *output, const char *str, char comp)
{
	int	iter;
	int	addon;

	iter = 0;
	addon = 0;
	while (str[addon] && str[addon] != comp)
	{
		output[iter + addon] = str[addon];
		addon++;
	}
	output[iter + addon] = '\0';
	return (output);
}

unsigned int	ft_coutchr(const char *str, char comp)
{
	int				inc;
	unsigned int	nbr;

	inc = 0;
	nbr = 0;
	while (str[inc + 1])
	{
		if (str[inc] == comp)
			nbr++;
		inc++;
	}
	return (nbr);
}

char	**ft_create( const char *str, char comp)
{
	int				len;
	unsigned int	inc;
	unsigned int	index;
	char			**strlist;

	index = 0;
	inc = 0;
	len = ft_coutchr(str, comp);
	strlist = malloc(sizeof(char) * len);
	if (!strlist)
		return (NULL);
	while (len >= 0)
	{
		if (ft_strlentw(str, comp, index) > 1)
		{
			strlist[inc] = malloc(sizeof(char) * ft_strlentw(str, comp, index));
			if (!strlist[inc])
				return (NULL);
			inc++;
		}
		len--;
		index += ft_strlentw(str, comp, index);
	}
	return (strlist);
}

char	**ft_split( const char *str, char comp)
{
	int		index;
	int		inc;
	int		len;
	char	**strlist;

	inc = 0;
	 len = ft_coutchr(str, comp);
	strlist = ft_create(str, comp);
	while (len >= 0)
	{
		if (ft_strlentw(str, comp, index) > 1)
		{
			ft_strcat(strlist[inc], &str[index], comp);
			inc++;
		}
		len--;
		index += ft_strlentw(str, comp, index);
	}
	return (strlist);
}
