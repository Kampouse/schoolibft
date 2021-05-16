/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinv2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 20:45:18 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/12 21:35:45 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strcat(char *output, const char *str)
{
	int	iter;
	int	addon;

	iter = 0;
	addon = 0;
	while (output[iter])
		iter++;
	while (str[addon])
	{
		output[iter + addon] = str[addon];
		addon++;
	}
	output[iter + addon] = '\0';
	return (output);
}

unsigned int	ft_strlen(const char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin(const char *first, const char *second)
{
	char	*output;
	int		len;

	len = ft_strlen(first) + ft_strlen(second) + 1;
	output = malloc(sizeof(char ) * len);
	if (!output)
		return (NULL);
	ft_strcat(output, first);
	ft_strcat(output, second);
	return (output);
}
