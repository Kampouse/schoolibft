/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 23:06:39 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/09 15:44:19 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft;.h"
void	*ft_memccpy(void *dest, const void *src, int c, unsigned int n)
{
	unsigned int	i;
	char			*heler_src;
	char			*heler_dest;

	 heler_src = (char *)src;
	 heler_dest = (char *)dest;
	while (i != n && heler_src[i] != c)
	{
		heler_dest[i] = heler_src[i];
		i++;
	}
	if (i == n)
		return (NULL);
	heler_dest[i++] = c;
	heler_dest[i++] = '\0';
	return (dest);
}
