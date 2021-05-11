/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 15:50:21 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/09 15:51:11 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_strlcat(char *output,const char *src, unsigned int buff)
{
	unsigned int srclen;
	unsigned int outputlen;
	

	  outputlen = strlen(output);
	buff-= outputlen + 1;
if(!buff)
	return (outputlen);
srclen = strlen(src);
if(srclen > buff )
	srclen = buff;
memcpy(output + outputlen,src,srclen);
output[outputlen + srclen] = '\0';
return (srclen + outputlen);
}
