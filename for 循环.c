#include<stdio.h>
int main()
{
 	
	int res[2]={1,2};
	int arr[3]={1,2,3};
	int sum=0;
	printf("ok\n");
	for(int i=0;i<2;i++)
	{
		printf("1,hehe.i=%d\n",i);                      //break �ڵڶ��� for ��ִ�������˴��� i ��ʼ����һ��ѭ��  j ����һ�δ�ͷѭ�� 
		for(int j=0;j<3;j++)                            //continue ��ִ����֮�������˴� i ���� j ����++��ʼ��һ��ѭ�� 
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

