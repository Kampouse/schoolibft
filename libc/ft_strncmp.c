/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:06:49 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/11 17:08:58 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strncmp(char *str1, char *str2, unsigned int len)
{
	while (len--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		else
		{
			++str1;
			++str2;
		}
	}	
	return (0);
}	
