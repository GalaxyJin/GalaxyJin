#include<stdio.h>
void main()
{
  int year;
  printf("请输入年份为:");
  scanf("%d",&year);
  if((year%400==0)||(year%4==0&&year%100!=0))
	  printf("该年份为瑞年。\n");
  else 
	  printf("该年份为平年。\n");
}