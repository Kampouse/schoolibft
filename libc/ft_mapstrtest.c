/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:51:25 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/16 15:16:23 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "stdio.h"
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

char fun(char a)
{
return (a - 32);
}


int     ft_mapTest(void)
{
char *ray =  "HELP";
printf("%s",ft_mapstr (ray,&fun));
return(0);
}
