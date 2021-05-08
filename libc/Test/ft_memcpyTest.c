#include  "stdio.h"
#include  "string.h"




void *ft_memcpy(void *dest,const void *src,unsigned int n)
{
unsigned int i;
char *heler_src = (char *)src;
char *heler_dest = (char *)dest;
while(i != n)
{
heler_dest[i] = heler_src[i];
i++;
}
return dest;
}




void original_memcpy()
{



char  output1[20];
const char src1[20] = "help me become"; 

memcpy(output1,src1,sizeof(src1));
printf("->> offical version %s ",output1);
}



void ft_memcpyassert()
{
char  output[20];
const char src[20] = "help me become"; 

ft_memcpy(output,src,sizeof(src));
printf("->>my version %s \n",output);
	original_memcpy();
}
