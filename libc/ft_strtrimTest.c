/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 21:40:12 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/13 14:31:18 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "stdio.h"

unsigned int	ft_strlen(const char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_findme(char comp, const char *set)
{
	int	inc;

	inc = 0;
	while (set[inc])
	{
		if (comp == set[inc])
			return (1);
		inc++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	int		inc;
	int		end;
	char	*output;
	int		last;

	last = 0;
	inc = 0;
	end = ft_strlen(str) - 1;
	while (str[inc] && ft_findme(str[inc], set))
		inc++;
	while (end != inc && ft_findme(str[end - 1], set))
		end--;
	 output = malloc(sizeof(char) * (end - inc));
	while (inc != end)
	{
		output[last] = str[inc];
		inc++;
		last++;
	}
	return (output);
}

int main(void)
{

char dog[]= "abcffaacba";
char nop[]= "abc";

printf("%s",ft_strtrim(dog,nop));


}
