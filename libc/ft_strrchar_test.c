#include "string.h"
#include "stdio.h"

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

int main(void)
{
char dede[]="chedede";
printf("%s",ft_strrchr(dede,'d'));
printf("%s",strrchr(dede,'d'));

	
}


