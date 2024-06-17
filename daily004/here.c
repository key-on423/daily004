#include <stdio.h>
#include <string.h>

//编写一个程序，把字符串中的内容用其倒序字符串代替，在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
#define max 50
char* s_gets(char* st, int n);
int main()
{

	printf("请输入输一串字符:\n");
	char arr1[max];
	s_gets(arr1, max);
	int n = strlen(arr1)-1;
	char st[max];
	strcpy(st, arr1);
	int x=0;
	while (n >= x)
	{
		printf("%c", arr1[n]);
		n--;
	}
	n = strlen(arr1) - 1;
	printf("\n");
	x = 0;
	while (n>=0)
	{
		arr1[x] = st[n];
		x++;
		n--;
	}
	printf("%s", arr1);
	return 0;
}
char* s_gets(char* st, int n)
{
	char* ret_val;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (*st != '\n' && *st != '\0')
			st++;
		if (*st == '\n')
			*st = '\0';
		else
			while (getchar() != '\n')
		continue;
	}
	return ret_val;
}