#include<stdio.h>
int main()
{
 	
	int res[2]={1,2};
	int arr[3]={1,2,3};
	int sum=0;
	printf("ok\n");
	for(int i=0;i<2;i++)
	{
		printf("1,hehe.i=%d\n",i);                      //break 在第二个 for 里执行跳到此处且 i 开始了下一下循环  j 则再一次从头循环 
		for(int j=0;j<3;j++)                            //continue 在执行子之后跳到此处 i 不变 j 进行++开始下一次循环 
		{
			printf("2.hehe.j=%d\n",j);
			if(res[i]<=arr[j])
			{
				sum++;
				arr[j]=0;
				break; 
				//continue; 
			}
			printf("3\n");
		}
	}
	printf("%d\n",sum);

	

	return 0;
}

