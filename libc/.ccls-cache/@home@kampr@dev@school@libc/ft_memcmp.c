/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:31:59 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/07 16:48:06 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *first,const void  *second,unsigned int lenght)
{

char *helper_first;
char *helper_second;
helper_second = (char *)second;
helper_first = (char *)first;
while(lenght > 0)
{
	if(*helper_first - *helper_second != 0)
		return *helper_first - *helper_second;
	lenght--;
	helper_first++;
	helper_second++;
}	
return lenght;
}
