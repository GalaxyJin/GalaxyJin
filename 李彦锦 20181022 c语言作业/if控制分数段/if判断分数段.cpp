#include<stdio.h>
void main()
{ 
	int grade;
	printf("请输入学生成绩为:");
	scanf("%d",&grade);
	if(grade<60&&grade>=0)
		printf("成绩等级为E。\n");
	else if(grade<69&&grade>=60)
		printf("成绩等级为D。\n");
	else if(grade<79&&grade>=70)
		printf("成绩等级为C。\n");
	else if(grade<89&&grade>=80)
		printf("成绩等级为B。\n");
	else if(grade<=100&&grade>=90)
		printf("成绩等级为A。\n");
	else printf("请输入0到100之间的整数\n");
}