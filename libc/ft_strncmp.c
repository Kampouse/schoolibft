#include "libft.h"

unsigned int ft_strncmp(char *str1,char *str2,unsigned int len)  
{
	while(len--)
	{
		if(*str1 != *str2)
			return (*str1 - *str2);
		else
		{
		++str1;
       ++str2;
		}
	}	
return 0;
}	
