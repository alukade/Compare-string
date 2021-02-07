//strcmp:完全相同返回0，由于if判断0为假，故加上！，即相同时执行if内的语句
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[]= "I Love  U";
	char str2[] = "I Love U";

	if (!strcmp(str1 ,str2))//判断的是ASCII码，空格ASCII为32
	{
		printf("这两个字符串完全相同！");
	}
	else
	{
		printf("这两个字符串存在差异！");
	}
	return 0;
}