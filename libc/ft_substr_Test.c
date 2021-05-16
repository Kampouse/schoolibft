/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 15:18:18 by jean-phil         #+#    #+#             */
/*   Updated: 2021/05/12 16:36:17 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "stdio.h"
#include  "stdlib.h"



size_t ft_sublenght(char const *src, unsigned int start, size_t end)
{
  size_t  actual;
  while(src[start]&& start != end)
  {
    start++;
	actual++;
  }
return actual;
}

char *ft_substr(char const *src, unsigned int start,size_t end)
{
  char *output;
  char *helper;
  output = malloc(sizeof(char) * ft_sublenght(src,start,end) + 1);
  helper = output;
if(!output)
{
    return (NULL);
}
    while(src[start]&& start != end)
    {
         *output=src[start++];
          output++;      
    }
   output= "\0";
return (helper);
}

int ft_substrTest()
{
char dede[100]="dododo";
printf("%s",ft_substr(dede,1000,sizeof(dede)));
return 0;
}


