//strcmp:��ȫ��ͬ����0������if�ж�0Ϊ�٣��ʼ��ϣ�������ͬʱִ��if�ڵ����
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[]= "I Love  U";
	char str2[] = "I Love U";

	if (!strcmp(str1 ,str2))//�жϵ���ASCII�룬�ո�ASCIIΪ32
	{
		printf("�������ַ�����ȫ��ͬ��");
	}
	else
	{
		printf("�������ַ������ڲ��죡");
	}
	return 0;
}