#include<stdio.h>
void main()
{ 
	int grade;
	printf("������ѧ���ɼ�Ϊ:");
	scanf("%d",&grade);
	if(grade<60&&grade>=0)
		printf("�ɼ��ȼ�ΪE��\n");
	else if(grade<69&&grade>=60)
		printf("�ɼ��ȼ�ΪD��\n");
	else if(grade<79&&grade>=70)
		printf("�ɼ��ȼ�ΪC��\n");
	else if(grade<89&&grade>=80)
		printf("�ɼ��ȼ�ΪB��\n");
	else if(grade<=100&&grade>=90)
		printf("�ɼ��ȼ�ΪA��\n");
	else printf("������0��100֮�������\n");
}