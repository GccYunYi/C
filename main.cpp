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

	//printf("输入字符为：%s；原定义字符为：%s；字符长度为：%d\n", ch, ch1, sizeof(ch1));

	//printf("数组中一个元素占用空间为：%d;整个数组所占用长度为：%d;数组长度计算公式：sizeof(数组)/sizeof(一个元素)：%d\n", sizeof(a), sizeof(a[0]), sizeof(a) / sizeof(a[0]));

	char ch[10] = { "abcdefghi" };   //最后一个'\0'字符不显示，10长度的字符数组只能定义时只能存储9个字符

	printf("定义的字符数组占用空间大小为：%d;\n字符数组一个字符占用空间为：%d;\n%d\n", sizeof(ch), sizeof(ch[0]),sizeof(char));

	printf("%d\n", sizeof(int));

	return 0;
}