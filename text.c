#include <stdio.h>
#include <string.h>

//�������루���λ��ᣩ����ȷ����ʾ�ɹ����������˳�����
int main()
{
	int n = 0;
	char password[20] = {0};
	
	for(n = 0;n<3;n++)
	{
		printf("���������룺");
		scanf("%s",password);
		if(strcmp(password,"123456") == 0 )		//�ַ����Ƚϣ��⺯��strcmp���ַ���1���ַ���2��
		{
			printf("������ȷ\n");
			break;
		}
	}
	if(n == 3)
	{
		printf("�������ξ�����������˳�\n");
	}

	return 0;
}



////����1!+2!+......+10!
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



////����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d",&n);		//��������n=10
//	for(i=1;i<=n;i++)		//i=1,i=2,i=3,......
//	{
//		ret = ret*i;		//ret=1*1,ret=1*1*2,ret=1*1*2*3,......
//	}
//	printf("%d\n",ret);
//	return 0;
//}



////��do...whileѭ����ӡ1-10
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



////ֻѭ��10��
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



////��forѭ����ӡ1-10
//int main()
//{
//	int i;
//	for(i = 1;i<=10;i++)
//	//for(���ʽ1����ʼ�����֣������ʽ2���жϲ��֣������ʽ�����������֣�)
//	{
//		printf("%d\n",i);
//	}
//
//	return 0;
//}


////��������ַ�����ĸ���������
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
//	printf("����������:>>>");
//	scanf("%s",password);		//��������
//	//��ʱ�������ﻹʣһ����\n��
//	//����ʹ��getchar��ȡ
//	getchar();
//	printf("��ȷ�ϣ�Y/N��:>>>");
//	ret = getchar();
//	if (ret =='Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//
//	return 0;
//}



//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)		//EOF - end of file - (-1)
//		//��ctrl + z���˳�
//	{
//		putchar(ch);
//	}
//
//	//int ch = getchar();		//�����ַ�
//	//putchar(ch);		//putchar - ����ַ�
//	//printf("%c\n",ch);		//��%c������ַ�
//
//	return 0;
//}




////��whileѭ����ӡ1-10
//int main()
//{
//	int n = 1;
//	while (n<=10)
//	{
//		if(n == 5)
//			//break;		//ֹͣ
//			continue;		//������ѭ������ִ�б���ѭ����continue֮������
//		printf("%d\n",n);
//		n++;
//	}
//
//	return 0;
//}