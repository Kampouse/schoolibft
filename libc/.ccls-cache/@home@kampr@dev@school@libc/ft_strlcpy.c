#include "stdio.h"
#include "string.h" 

unsigned int  ft_strlen(const char *str)
{
	unsigned int len;

	len = 0;

	while(str[len])
		len++;
return (len);
}

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	char			*heler_src;
	char			*heler_dest;

	i = 0;
	 heler_src = (char *)src;
	 heler_dest = (char *)dest;
	while (i != n)
	{
		heler_dest[i] = heler_src[i];
		i++;
	}
	return (dest);
}

unsigned int ft_strlcpy(char *output,char *src, unsigned int lenght)
{
const  unsigned int len = ft_strlen(src);
unsigned int inc;
if(len + 1 < len )
{
ft_memcpy(output,src,len  + 1);
}
else if(lenght != 0)
{
ft_memcpy(output,src,len - 1);
output[len - 1] = 1;
}
return lenght;
}
