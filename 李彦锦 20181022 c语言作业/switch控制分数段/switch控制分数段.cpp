#include<stdio.h>
void main()
{ 
	int a,grade;
	printf("输入分数为:");
	scanf("%d",&grade);
	if(grade<0||grade>100)
		printf("请输入0到100之间的整数。\n"); 
  else 
	a=grade/10;
	switch(a)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:printf("成绩等级为E。\n");break;
	case 6:printf("成绩等级为D。\n");break;
	case 7:printf("成绩等级为C。\n");break;
	case 8:printf("成绩等级为B。\n");break;
	case 9:
	case 10:printf("成绩等级为A。\n");
	
	}
}