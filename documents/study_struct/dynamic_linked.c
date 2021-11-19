#include <stdio.h>
#include <stdlib.h>   				//调用malloc函数需要stdlib库
#define LEN sizeof(struct student)  //可以简单的理解为将程序中所有的"LEN"替换为"sizeof(struct student)"
struct student
{
	long num;
	float score;
	struct student *next; 			//定义一个student类型的结构体指针，用于链表的链接 
};


/*********************************************************************************************************************************/ 
int n;									//n是一个全局变量，用于记录有多少个学生信息在这个链表中 
struct student *creat(void)				//链表创建函数 
{
	struct student *head;
	struct student *p1,*p2;
	n=0;								
	p1=p2=(struct student*)malloc(LEN);	//在标准库中malloc函数给到的是一个void类型的空间，需要用强制转换符来获得合适类型的空间
	printf("请输入key和value,中间用英文逗号隔开:");
	scanf("%ld,%f",&p1->num,&p1->score);//录入第一个学生信息
	head=NULL;							//在不确定信息是否有效时，动态链表应该为空，也即头指针指向为空
	while(p1->num!=0)					//这里假定学生学号不为零，若输入零代表这个动态链表结束链接
	{
		n=n+1;							//每录入一个学生信息，n就加一 
		//当录入第一个学生信息之后，这个学生信息的地址就作为链表的头指针，让head指向p1（此时p1、p2都指向第一个学生信息）
		if(n==1)head=p1;
		//如果录入的学生信息不是第一个，那么（由后面的操作）p1此时指向的是这个学生信息的地址，而p2指向的是上一个学生信息地址
		//此时需要让p2->next指向p1，也即让上一个链表成员与新的成员链接起来 				 
		else p2->next=p1;				
		p2=p1;							//再让p2向前指一位，以便于下次操作，此时p1、p2都指向最新加入链表的成员							
		p1=(struct student*)malloc(LEN);//让p1开辟新的studdent类型的空间，输入下一个链表成员信息。可以理解为while循环中的x++ 
		printf("请输入key和value,中间用英文逗号隔开:");
		scanf("%ld,%f",&p1->num,&p1->score);
	}
	p2->next=NULL;						//最后一位链表成员不再链接其他东西，这里的指向NULL相当于表尾 
	return (head); 						//向主函数返回构造好的动态链表d的第一个结点的地址 
 }
/*********************************************************************************************************************************/ 


/*********************************************************************************************************************************/ 
void print(struct student *head)		//构造结构体输出函数 
{
	struct student *p;
	printf("\nNow,These %d records are:\n",n);
	p=head;
	if(head!=NULL)
	do
	{
		printf("%ld %5.1f\n",p->num,p->score);
		p=p->next;
	}while(p!=NULL);
 } 
/*********************************************************************************************************************************/ 


 int main()
 {
 	struct student* pt;
 	pt=creat();
 	print(pt);
 	
 	return 0;
  } 
