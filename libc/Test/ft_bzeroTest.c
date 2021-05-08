/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                           	:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:26:34 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/05 23:12:23 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"
#include "string.h"


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

void ft_bzeroTest()
{
//char str[] = "almost everything";
char str2[] = "hello my friend";
char str[] = "hello my friend";

ft_bzero(str2,1);
printf(" my version --> %s",str2);
bzero(str,1);
printf("official --> %s",str2);
}
