#include <unistd.h>
#include <stdio.h>
#include "../ex00/ft_strcmp.c"

int ft_strcmp(char *s1, char *s2);

int main(void) {
	
	char str_cmp1[] = "ABCDEFA";
	char str_cmp2[] = "ABCDEFZ";
	char empty[] = "";
	unsigned int ret=0;

	printf("Calling ft_strcmp(s1,s2);\n");


    ret=ft_strcmp(str_cmp1,str_cmp1);
    if (ret == 0)
		printf("Comparing [s1] %s with [s2] %s | PASS ret %d\n",str_cmp1,str_cmp1,ret);
	else
		printf("Comparing [s1] %s with [s2] %s | FAIL ret %d\n",str_cmp1,str_cmp1,ret);


    ret=ft_strcmp(str_cmp2,str_cmp1);
    if (ret == 25)
		printf("Comparing [s1] %s with [s2] %s | PASS ret %d\n",str_cmp2,str_cmp1,ret);
	else
		printf("Comparing [s1] %s with [s2] %s | FAIL ret %d\n",str_cmp2,str_cmp1,ret);


    ret=ft_strcmp(str_cmp1,str_cmp2);
    if ((int)ret == -25)
		printf("Comparing [s1] %s with [s2] %s | PASS ret %d\n",str_cmp1,str_cmp2,ret);
	else
		printf("Comparing [s1] %s with [s2] %s | FAIL ret %d\n",str_cmp1,str_cmp2,ret);



    ret=ft_strcmp(str_cmp2,empty);
    if (ret == 65)
		printf("Comparing [s1] %s with [s2] \"\"      | PASS ret %d\n",str_cmp2,ret);
	else
		printf("Comparing [s1] %s with [s2] \"\"      | FAIL ret %d\n",str_cmp2,ret);

	return (0);
}

