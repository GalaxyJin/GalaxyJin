
#include<stdio.h>
#include<math.h>
void main()
{
  double a,b,c,p,s;
	printf("输入三边为别为:");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	 
	{	printf("这三个边可以组成三角形。\n");
		p=(a+b+c)/2;
    	s=sqrt(p*(p-a)*(p-b)*(p-c));
	    printf("面积为:s=%lf\n",s);
		
		
	  if(a==b||a==c||b==c)
		printf("这是一个等腰三角形。\n");
	else if(pow(a,2)+pow(b,2)==pow(c,2)||pow(a,2)+pow(c,2)==pow(b,2)||pow(c,2)+pow(b,2)==pow(a,2))
		printf("这是一个直角三角形。\n");
	else if(a!=b&&a!=c&&b!=c)
		printf("这是一个普通三角形。\n");
	
	 
	}
	else 
		printf("这三个边不能组成三角形。\n");
	
}