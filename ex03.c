#include <unistd.h>
#include <stdio.h>
#include <string.h>

#include "../ex03/ft_strncat.c"

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void) {
	
	char str_src[] = "42 Is Awesome!";
	char str_dest[] = "AbuDhabi\0IH8Nominette  ";
	char str_src1[] = "\0";
	char str_dest1[] = "Null String Test\0*****";
	unsigned int size;

	size = 2;
	printf("dest = %s | src = %s | nb = %u\n",str_dest,str_src,size);
	printf("Calling: ret = ft_strncat(dest,src,nb);\n");
    printf("ret = %s | dest = %s | src = %s | nb = %u\n", ft_strncat(str_dest,str_src,size),str_dest,str_src,size);

    size = 5;
	printf("\ndest = %s | src = %s | nb = %u\n",str_dest1,str_src1,size);
	printf("Calling: ret = ft_strncat(dest,src,nb);\n");
	printf("ret = %s | dest = %s | src = %s | nb = %u\n",ft_strncat(str_dest1,str_src1,size),str_dest1,str_src1,size);

     return 0;
}