#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//#include<unistd.h>
#include<string.h>

//int main()
//{
//	while (1)
//	{
//		//����һ��shell��ʾ
//		printf("[test@minishell]$ ");
//		fflush(stdout);//ˢ�±�׼���������
//		//1,�ȴ���׼����
//		char buf[1024] = { 0 };
//		fegts(buf, 1023, stdin);
//		buf[strlen(buf) - 1] = '\0';
//		//2,���������ݽ��н���
//		char *argv[32] = { NULL };
//		int argc = 0;
//		char *ptr = buf;
//		//[   ls   -a    -l    ]
//		while (*ptr != '\0')
//		{
//			if (*ptr != ' ')
//			{
//				argv[argc] = ptr;
//				argc++;
//				while (*ptr != ' ' && *ptr != '\0')
//				{
//					ptr++;
//				}
//				*ptr = '\0';
//			}
//			ptr++;
//		}
//		argv[argc] = NULL;//���һ����������һ��λ����NULL
//		//3,�����ӽ���	4�����ӽ����г����滻
//		pid_t pid = fork();
//		if (pid == 0)
//		{
//			execvp(argv[0], argv);//�����滻�ɹ���ȥ�����³����ˣ�pid_t pid = fork()����ĳ���Ͳ��������ˣ�
//			//�ܹ�����������ô�϶������滻ʧ����
//			perror("execvp error");//��ӡ��һ��ϵͳ���ýӿ�ʹ�õĴ���ԭ��
//			exit(0);
//		}
//		//5,���̵ȴ�
//		wait(NULL);
//	}
//	return 0;
//}