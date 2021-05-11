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
int ft_strnstrTest()
{
char dede[]= "httssss";
 
char be[]= "sss";
printf("%s",ft_strncmp(&dede[0],be,sizeof(dede )));
return 0;
}
