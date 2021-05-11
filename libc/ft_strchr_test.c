#include "stdio.h"
#include "string.h"


char *ft_strchr(const char *str,int compared)
{
	unsigned int value; 
	value = 0;
	while(str[value])
	{

     if(str[value]== (char)compared)
	 { 
		return ( char*)&str[value];	
	 }
		value++;
	}	

return(NULL);
}



int main(void)
{
	char dede[] ="quiavuedede";
	printf("%s",ft_strchr(dede,'d'));
}
