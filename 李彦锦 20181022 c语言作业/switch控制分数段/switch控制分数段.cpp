#include<stdio.h>
void main()
{ 
	int a,grade;
	printf("�������Ϊ:");
	scanf("%d",&grade);
	if(grade<0||grade>100)
		printf("������0��100֮���������\n"); 
  else 
	a=grade/10;
	switch(a)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:printf("�ɼ��ȼ�ΪE��\n");break;
	case 6:printf("�ɼ��ȼ�ΪD��\n");break;
	case 7:printf("�ɼ��ȼ�ΪC��\n");break;
	case 8:printf("�ɼ��ȼ�ΪB��\n");break;
	case 9:
	case 10:printf("�ɼ��ȼ�ΪA��\n");
	
	}
}