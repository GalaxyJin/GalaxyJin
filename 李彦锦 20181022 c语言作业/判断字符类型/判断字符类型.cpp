#include<stdio.h>
void main()
{
	char c;
	printf("������һ���ַ�:");
	c=getchar();
	if(c<32)
		printf("����һ�������ַ���\n");
	else if(c>='0'&&c<='9')
		printf("����һ�����֡�\n");
	else if(c>='A'&&c<='Z')
		printf("����һ����д��ĸ��\n");
	else if(c>='c'&&c<='z')
		printf("����һ��Сд��ĸ��\n");
	else printf("����һ�������ַ���\n");
}