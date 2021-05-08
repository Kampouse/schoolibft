/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 21:28:42 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/05 21:37:34 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	char			*heler_src;
	char			*heler_dest;

	 heler_src = (char *)src;
	 heler_dest = (char *)dest;
	while (i != n)
	{
		heler_dest[i] = heler_src[i];
		i++;
	}
	return (dest);
}
