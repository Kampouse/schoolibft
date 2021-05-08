/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:17:28 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/07 17:28:59 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "stdio.h"


unsigned int  ft_strlen(const char *str)
{
	unsigned int len;

	len=0;

	while(str[len])
		len++;
return (len);
}


int ft_strlenTest(void)
{

char dog[] =  "help";
printf("%d",ft_strlen(dog));
return 0;
}
