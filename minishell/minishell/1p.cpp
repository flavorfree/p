#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//#include<unistd.h>
#include<string.h>

//int main()
//{
//	while (1)
//	{
//		//增加一个shell提示
//		printf("[test@minishell]$ ");
//		fflush(stdout);//刷新标准输出缓冲区
//		//1,等待标准输入
//		char buf[1024] = { 0 };
//		fegts(buf, 1023, stdin);
//		buf[strlen(buf) - 1] = '\0';
//		//2,对输入数据进行解析
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
//		argv[argc] = NULL;//最后一个参数的下一个位置置NULL
//		//3,创建子进程	4，在子进程中程序替换
//		pid_t pid = fork();
//		if (pid == 0)
//		{
//			execvp(argv[0], argv);//程序替换成功就去运行新程序了，pid_t pid = fork()后面的程序就不会运行了；
//			//能够走下来，那么肯定程序替换失败了
//			perror("execvp error");//打印上一次系统调用接口使用的错误原因
//			exit(0);
//		}
//		//5,进程等待
//		wait(NULL);
//	}
//	return 0;
//}