/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:51:25 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/16 15:17:19 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft.h"

char	*ft_mapstr(const char *str, char (*fnptr)(char))
{
	int				i;
	unsigned int	len;
	char			*ptr;
	char			*copy;

	i = 0;
	len = ft_strlen(str) + 1;
	copy = malloc(sizeof(char) * len);
	ptr = copy;
	while (str[i])
	{
		*copy = (*fnptr)(str[i++]);
		copy++;
	}
	*copy = '\0';
	return (ptr);
}
