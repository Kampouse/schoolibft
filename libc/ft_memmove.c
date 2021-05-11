/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kampr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:43:13 by kampr             #+#    #+#             */
/*   Updated: 2021/05/09 15:48:49 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void 	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	const char		*help_src = (char *)src;
	char			*help_dest;
	unsigned int	i;

	help_dest = (char *)dest;
	i = 0;
	if (help_dest <= help_src || help_dest >= help_src + n)
	{
		while (i < n)
		{
			help_dest[i] = help_src[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			help_dest[i] = help_src[i];
			i--;
		}
	}
	return (dest);
}
