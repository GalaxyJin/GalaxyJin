#include<stdio.h>
void main()
{
  int age;
  printf("���뺢������Ϊ:");
  scanf("%d",&age);
  switch(age)
  {
  case 2:printf("age:2,enter lower class\n");break;
  case 3:printf("age:3,enter lower class\n");break;
  case 4:printf("age:4,enter middle class\n");break;
  case 5:printf("age:5,enter middle class\n");break;
  case 6:printf("age:6,enter high class\n");break;
  default :printf("��������ȷ�����䡣");
  }
}