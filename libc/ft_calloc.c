/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 20:06:50 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/11 21:34:00 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t lenght, size_t size)
{
	void	p;

	*p = malloc(lenght * size);
	if (!p)
		return (NULL);
	return (ft_memset(p, 0, lenght * size));
}
