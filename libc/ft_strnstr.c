/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 16:25:50 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/11 17:06:10 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char	*ft_strnstr(char *str1, char *str2, unsigned int len)
{
	unsigned int	inc;
	unsigned int	subinc;

	inc = 0;
	while (str1[inc] && inc <= len)
	{
		if (ft_strncmp(&str1[inc], str2, ft_strlen(str2)) == 0)
		{
			while (str1[inc + subinc] == str2[subinc])
			{
				subinc++;
				if (subinc == ft_strlen(str2))
					return (&str1[inc]);
			}
		}
		subinc = 0;
		inc++;
	}
	return (NULL);
}
