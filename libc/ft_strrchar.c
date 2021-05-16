/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 15:57:56 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/11 16:12:50 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

char	*ft_strrchr(const char *str, int compared)
{
	unsigned int	value;
	int				last;					

	value = 0;
	last = -1;
	while (str[value])
	{
		if (str[value] == (char)compared)
		{
			last = value;
		}
		value++;
	}
	if (last == -1)
	{	
		return (NULL);
	}
	return ((char *)&str[last]);
}
