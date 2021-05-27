#include <unistd.h>
#include <stdio.h>
#include <string.h>

#include "../ex04/ft_strstr.c"

char *ft_strstr(char *str, char *to_find);
//       strstr(char *haystack, char *needle)

int main(void) {

	char needle[] = "AbuDhabi";
	char needle1[] = "vmj92293bv";
	char empty[] = {0x00};
	char havstack[] = "What A Makes AbuDhabi 42 Great";

	printf("str = %s | to_find = %s \n",havstack,needle);
	printf("Calling: ret = ft_strstr(str,to_find);\n");
    printf("ret = %s | str = %s | to_find = %s\n\n", ft_strstr(havstack,needle),havstack,needle);

	printf("str = %s | to_find = %s \n",havstack,needle1);
	printf("Calling: ret = ft_strstr(str,to_find);\n");
	printf("ret = %s | str = %s | to_find = %s\n\n", ft_strstr(havstack,needle1),havstack,needle1);

	printf("str = %s | to_find = (empty)%s \n",havstack,empty);
	printf("Calling: ret = ft_strstr(str,to_find);\n");
	printf("ret = %s | str = %s | to_find = (empty)%s\n\n", ft_strstr(havstack,empty),havstack,empty);

	return 0;
}

