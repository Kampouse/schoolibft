/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:31:59 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/07 16:36:38 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "string.h"
#include  "stdio.h"

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

int memcmpTest(void)
{
char first[]= "Help";
char second[]= "help";

printf("%d ",ft_memcmp(first,second,sizeof(first)));

return 0;


}

