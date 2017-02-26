/*
え、文字列は配列で

atoi()
strcpy()
strncpy()


#include <stdio.h>
int main(void)
{
	char str[6] = {'M','A','R','I','O','\0'};
	printf("%s\n",str);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
　　char str[] = "145";
　　int suuti = atoi(str);
　　printf("%d\n",suuti);
　　return 0;
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[10];
	strcpy(str,"MARIO");
	printf("%s\n",str);
	return 0;
}

strncpy(コピー先文字列配列名,コピー元文字列配列名,コピーする文字数);
コピー先文字列配列名[コピーする文字数] = '\0';
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "MARIO",str2[10];
	strncpy(str2,str1,3);
	str2[3] = '\0';	/* EOSを付加 */
	printf("%s\n",str2);
	return 0;
}
