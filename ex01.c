#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../ex01/ft_strncmp.c"

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main() {
	
	char str_cmp1[12] = "ABCDEFAQrSt";
	char str_cmp2[12] = "ABCDEFZQrSt";
	char empty[] = "";
	unsigned int ret;

	printf("Calling ft_strncmp(s1,s2,n);\n");
    ret=ft_strncmp(str_cmp1,str_cmp2,6);
	if (ret == 0)
		printf("Comparing [s1] %s with [s2] %s n = 6 | PASS ret %d\n",str_cmp1,str_cmp2,ret);
	else
		printf("Comparing [s1] %s with [s2] %s n = 6 | FAIL ret %d\n",str_cmp1,str_cmp2,ret);

	ret=ft_strncmp(str_cmp2,str_cmp1,7);
    if (ret == 25)
		printf("Comparing [s1] %s with [s2] %s n = 7 | PASS ret %d\n",str_cmp2,str_cmp1,ret);
	else
		printf("Comparing [s1] %s with [s2] %s n = 7 | FAIL ret %d\n",str_cmp2,str_cmp1,ret);


    ret=ft_strncmp(str_cmp1,str_cmp2,8);
    if ((int)ret == -25)
		printf("Comparing [s1] %s with [s2] %s n = 8 | PASS ret %d\n",str_cmp1,str_cmp2,ret);
	else
		printf("Comparing [s1] %s with [s2] %s n = 8 | FAIL ret %d\n",str_cmp1,str_cmp2,ret);

    ret=ft_strncmp(str_cmp2,empty,7);
    if (ret == 65)
		printf("Comparing [s1] %s with [s2] \"\" n = 9          | PASS ret %d\n",str_cmp2,ret);
	else
		printf("Comparing [s1] %s with [s2] \"\" n = 9          | FAIL ret %d\n",str_cmp2,ret);

	ret=ft_strncmp("ZBACD","ABACD",0);
	if ((int)ret == 0)
		printf("Comparing [s1] ZBACD with [s2] ABACD n = 0             | PASS ret %d\n",ret);
	else
		printf("Comparing [s1] ZBACD with [s2] ABACD n = 0             | FAIL ret %d\n",ret);

	return (0);
}

