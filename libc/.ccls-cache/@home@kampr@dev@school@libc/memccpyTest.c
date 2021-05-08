#include  "stdio.h"
#include  "string.h"


void	*ft_memccpy(void *dest, const void *src,int c, unsigned int n)
{
	unsigned int	i;
	char			*heler_src;
	char			*heler_dest;

	 heler_src = (char *)src;
	 heler_dest = (char *)dest;
	while (i != n && heler_src[i] != c)
	{
		heler_dest[i] = heler_src[i];
		i++;
	}
	if(i == n)
		return(NULL);
heler_dest[i++] = c;		
heler_dest[i++] = '\0';		
	return (dest);
}

void ft_MemccpyTest()
{
char  output[40];
const char src[40] = "This is the string: not copied"; 

ft_memccpy(output,src,'v',sizeof(src));
printf("->>my version %s \n",output);
}

