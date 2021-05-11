/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen_extra.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 19:08:07 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/08 19:22:34 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h" 
#include "string.h"


unsigned long ft_strnlen_extra(char *str,unsigned int maxlen)
{
unsigned int len;
len = 0;

		while(str[len]!= '\0' && len <= maxlen)
			len++;
return (len);
}
