#include<stdio.h>
#include <stdlib.h>
 
int main()
{

	int num1,num2,num3,x; 

	printf("�п�JX,Y,Z�T�ӼƦr�i��ƧǡG");  
	scanf("%d%d%d",&num1,&num2,&num3); 

	if(num1>num2)
	{ 
	 x=num1;  
	 num1=num2; 
  	 num2=x; 
	}

	if(num1>num3)
	{ 
	 x=num1; 
	 num1=num3;
	 num3=x; 
	}

	if(num2>num3)
	{   
	 x=num2;   
	 num2=num3; 
	 num3=x;

	}

	printf("�q�p��j���ƦC�O:%d %d %d\n",num1,num2,num3);
    system("pause");
	return 0;

}
