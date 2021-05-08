#include "stdio.h"
#include "string.h"



void *ft_memset(void *ptr,int value, unsigned int num)
{
unsigned char *pted;
pted = ptr;
    while(num--)
    {
      *pted++= (unsigned char)value; 
    }
return ptr;
}


void assert()
{
//char str[] = "almost everything";
char str2[] = "hello my friend";
ft_memset(str2,'0',1);
printf("--> my version%s real version",str2);
memset(str2,'0',1);
printf("official --> %s",str2);

}
int main(void)
{
assert();
}



