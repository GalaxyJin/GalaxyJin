#include<stdio.h>
void main()
{
  int year;
  printf("���������Ϊ:");
  scanf("%d",&year);
  if((year%400==0)||(year%4==0&&year%100!=0))
	  printf("�����Ϊ���ꡣ\n");
  else 
	  printf("�����Ϊƽ�ꡣ\n");
}