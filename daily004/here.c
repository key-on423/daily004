#include <stdio.h>
#include <string.h>

//��дһ�����򣬰��ַ����е��������䵹���ַ������棬��һ�������ĳ����в��Ըú�����ʹ��һ��ѭ���������ṩ����ֵ��
#define max 50
char* s_gets(char* st, int n);
int main()
{

	printf("��������һ���ַ�:\n");
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