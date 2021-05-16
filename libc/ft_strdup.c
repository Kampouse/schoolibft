/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 20:44:23 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/12 15:09:52 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char	*strdup(const char *str)
{
	char	*output;
	int		inc;

	c = 0;
	output = malloc(sizeof(char) * ft_strlen(str));
	if (!output)
		return (NULL);
	while (str[inc] != '\0')
	{
		output[inc] = str[inc];
		inc++;
	}
	output[inc + 1] ='\0';
	return (output);
}
