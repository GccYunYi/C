#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//int a = 0;
	//int b = sizeof a;
	//int c;
	//scanf("%d%d", &a,&c);
	//printf("a+b+c=%d", a + b + c);

	//char ch[] = { 'a','b','c','\0' };
	//char ch1[4];
	//int a[] = { 0,1,2,3,4,5 };

	//scanf("%s", &ch1);

	//printf("�����ַ�Ϊ��%s��ԭ�����ַ�Ϊ��%s���ַ�����Ϊ��%d\n", ch, ch1, sizeof(ch1));

	//printf("������һ��Ԫ��ռ�ÿռ�Ϊ��%d;����������ռ�ó���Ϊ��%d;���鳤�ȼ��㹫ʽ��sizeof(����)/sizeof(һ��Ԫ��)��%d\n", sizeof(a), sizeof(a[0]), sizeof(a) / sizeof(a[0]));

	char ch[10] = { "abcdefghi" };   //���һ��'\0'�ַ�����ʾ��10���ȵ��ַ�����ֻ�ܶ���ʱֻ�ܴ洢9���ַ�

	printf("������ַ�����ռ�ÿռ��СΪ��%d;\n�ַ�����һ���ַ�ռ�ÿռ�Ϊ��%d;\n%d\n", sizeof(ch), sizeof(ch[0]),sizeof(char));

	printf("%d\n", sizeof(int));

	return 0;
}