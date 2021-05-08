/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kampr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:43:13 by kampr             #+#    #+#             */
/*   Updated: 2021/05/06 22:45:41 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"
#include <string.h>
/* memmove example */
void *ft_memmove(void *dest,const void *src, unsigned int n)
{
  const char *help_src = (char *)src;
  char *help_dest = (char *)dest;
  unsigned int i;
  i = 0;
  if(help_dest <= help_src||help_dest >= help_src + n)
  {
    while( i < n )
    {
      help_dest[i] = help_src[i];
     i++;   
    }
  }
  else {
    i = n;
  while(i > 0)
  {
    help_dest[i] =  help_src[i];
    i--;
  }
  }
return dest;
}
int ft_memmoveTest ()
{
  char str[] = "memmove Can be help.....q1";
  char str2[] = "memmove Can be help.....q1";
  ft_memmove (str+20,str+12,6);
  memmove(str+20,str+12,6);
 printf("%s  my version ->>",str);
 printf("%s officel 	->>",str2);

  return 0;
}


