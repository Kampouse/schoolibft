/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 22:19:11 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/06 22:56:04 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"
#include "string.h"
void	*ft_memchr(const void *src, int value, unsigned int num)
{
	unsigned char	*heler_return;
	unsigned char	*interator;

	interator = (unsigned char *)src;
	heler_return = NULL;
	while ((interator != NULL) && (num--))
	{
		if (*interator != (unsigned char)value)
			interator++;
		else
		{
			heler_return = interator;
		}
	}
	return (heler_return);
}
void ft_memchrTest()
{
  char * pch;
  char str[] = "Example string";
  char * pch2;
  char str2[] = "Example string";


  pch = (char*) memchr (str, 'p', strlen(str));
  pch2 = (char*) ft_memchr (str2, 'p', strlen(str));
  
  if (pch!=NULL || pch2 != NULL)
  {
	printf ("'p' found at position %d.\n", pch-str+1);
	printf ("'p' found at position %d.\n", pch2-str2+1);
  }
  
  else
  {
    printf ("'p' not found.\n");
    printf ("'p' not found.\n");
  }
}
