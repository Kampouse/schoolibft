#include "libft.h
#include  "stdlib.h"


char *ft_strrchr(const char *str,int compared)
{
 unsigned int value;
  int last;
 						
 value=	0;
 last = -1;
  while(str[value])
  {
	if(str[value]==(char)compared)
	{
       last=value;
	}
	value++;
  }
	if(last == -1)
	{	
	return (NULL);
	}
		return ( char*)&str[last];	
}
