#include <unistd.h>
#include <stdio.h>
#include <string.h>

#include "../ex02/ft_strcat.c"

char *ft_strcat(char *dest, char *src);

int main(void) {
	
	char str_src[] = "42 Is Awesome!";
	char str_dest[] = "AbuDhabi\0IH8Nominette  ";
	char str_src1[] = "\0";
	char str_dest1[] = "Null String Test\0*****";

	printf("dest = %s | src = %s\n",str_dest,str_src);
	printf("Calling: ret = ft_strcat(dest,src);\n");
    printf("ret = %s | dest = %s | src = %s\n",ft_strcat(str_dest,str_src),str_dest,str_src);

	printf("\ndest = %s | src = %s\n",str_dest1,str_src1);
	printf("Calling: ret = ft_strcat(dest,src);\n");
	printf("ret = %s | dest = %s | src = %s\n",ft_strcat(str_dest1,str_src1),str_dest1,str_src1);
	return 0;
}

