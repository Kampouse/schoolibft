/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                           	:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:26:34 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/05 19:27:08 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"

void	*ft_bzero (void *ptr, unsigned int num)

{
	unsigned char	*pted;

	pted = ptr;
	while (num--)
	{
		*pted++ = '\0';
	}
	return (ptr);
}
