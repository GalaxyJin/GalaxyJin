
#include<stdio.h>
#include<math.h>
void main()
{
  double a,b,c,p,s;
	printf("��������Ϊ��Ϊ:");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	 
	{	printf("�������߿�����������Ρ�\n");
		p=(a+b+c)/2;
    	s=sqrt(p*(p-a)*(p-b)*(p-c));
	    printf("���Ϊ:s=%lf\n",s);
		
		
	  if(a==b||a==c||b==c)
		printf("����һ�����������Ρ�\n");
	else if(pow(a,2)+pow(b,2)==pow(c,2)||pow(a,2)+pow(c,2)==pow(b,2)||pow(c,2)+pow(b,2)==pow(a,2))
		printf("����һ��ֱ�������Ρ�\n");
	else if(a!=b&&a!=c&&b!=c)
		printf("����һ����ͨ�����Ρ�\n");
	
	 
	}
	else 
		printf("�������߲�����������Ρ�\n");
	
}