#include <stdio.h>
#include <string.h>

//输入密码（三次机会）：正确则提示成功，错误则退出程序
int main()
{
	int n = 0;
	char password[20] = {0};
	
	for(n = 0;n<3;n++)
	{
		printf("请输入密码：");
		scanf("%s",password);
		if(strcmp(password,"123456") == 0 )		//字符串比较：库函数strcmp（字符串1，字符串2）
		{
			printf("密码正确\n");
			break;
		}
	}
	if(n == 3)
	{
		printf("密码三次均输入错误，请退出\n");
	}

	return 0;
}



////计算1!+2!+......+10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//
//	for(n=1;n<=10;n++)
//	{
//		int ret = 1;
//		for(i=1;i<=n;i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum+ret;
//	}
//	printf("sum = %d\n",sum);
//
//	return 0;
//}



////计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d",&n);		//假设输入n=10
//	for(i=1;i<=n;i++)		//i=1,i=2,i=3,......
//	{
//		ret = ret*i;		//ret=1*1,ret=1*1*2,ret=1*1*2*3,......
//	}
//	printf("%d\n",ret);
//	return 0;
//}



////用do...while循环打印1-10
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n",i);
//		i++;
//	}
//	while(i<=10);
//
//	return 0;
//}



////只循环10次
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for(;i<10;i++)
//	{
//		for(;j<10;j++)
//			printf("hehe\n");
//	}
//
//	return 0;
//}



////用for循环打印1-10
//int main()
//{
//	int i;
//	for(i = 1;i<=10;i++)
//	//for(表达式1（初始化部分）；表达式2（判断部分）；表达式三（调整部分）)
//	{
//		printf("%d\n",i);
//	}
//
//	return 0;
//}


////仅输出数字符，字母符不会输出
//int main( )
//{
//	int ch = 0;
//	while ((ch = getchar( )) != EOF)
//	{
//		if(ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}



//int main()
//{
//	int ret = 0;
//	char password[20] = {0};
//	printf("请输入密码:>>>");
//	scanf("%s",password);		//输入密码
//	//此时缓冲区里还剩一个‘\n’
//	//可以使用getchar读取
//	getchar();
//	printf("请确认（Y/N）:>>>");
//	ret = getchar();
//	if (ret =='Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//
//	return 0;
//}



//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)		//EOF - end of file - (-1)
//		//“ctrl + z”退出
//	{
//		putchar(ch);
//	}
//
//	//int ch = getchar();		//输入字符
//	//putchar(ch);		//putchar - 输出字符
//	//printf("%c\n",ch);		//“%c”输出字符
//
//	return 0;
//}




////用while循环打印1-10
//int main()
//{
//	int n = 1;
//	while (n<=10)
//	{
//		if(n == 5)
//			//break;		//停止
//			continue;		//进入死循环，不执行本次循环中continue之后的语句
//		printf("%d\n",n);
//		n++;
//	}
//
//	return 0;
//}