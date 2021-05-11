#include "libft.h"

	
char *ft_strnstr(char *str1,char *str2,unsigned int len)

{
 unsigned  int inc;
 unsigned int subinc;
 inc = 0;

 while(str1[inc]&& inc <= len)
 {
	 if(ft_strncmp(&str1[ inc],str2,sizeof(*str1)) ==0)
		 while(str1[inc+ subinc]== str2[subinc])
		 {
			 subinc++;
			 if(subinc == ft_strlen(str2))
				 return (&str1[inc]);
		 }
	 subinc = 0;
	 inc++;
 }
 return NULL;
}

int ft_strnstrTest()
{
char dede[]= "httssss";
 
char be[]= "sss";
printf("%s",ft_strnstr(&dede[0],be,sizeof(dede )));
return 0;
}
