#include <stdio.h>
struct test {
	char name[10];
	float socre;
	test *next;
}
;
test *head;
//创建一个全局的引导进入链表的指针
test *create() {
	test *ls;
	//节点指针
	test *le;
	//链尾指针
	ls = new test;
	//把ls指向动态开辟的堆内存地址
	cin>>ls->name>>ls->socre;
	head=NULL;
	//进入的时候先不设置head指针指向任何地址,因为不知道是否一上来就输入null跳出程序
	le=ls;
	//把链尾指针设置成刚刚动态开辟的堆内存地址,用于等下设置le->next,也就是下一个节点的位置
	while(strcmp(ls->name,"null")!=0)//创建循环条件为ls->name的值不是null,用于循环添加节点 {
		if(head==NULL)//判断是否是第一次进入循环 {
			head=ls;
			//如果是第一次进入循环,那么把引导进入链表的指针指向第一次动态开辟的堆内存地址
		} else {
			le->next=ls;
			//如果不是第一次进入那么就把上一次的链尾指针的le->next指向上一次循环结束前动态创建的堆内存地址
		}
		le=ls;
		//设置链尾指针为当前循环中的节点指针,用于下一次进入循环的时候把上一次的节点的next指向上一次循环结束前动态创建的堆内存地址
		ls=new test;
		//为下一个节点在堆内存中动态开辟空间
		cin>>ls->name>>ls->socre;
	}
	le->next=NULL;
	//把链尾指针的next设置为空,因为不管如何循环总是要结束的,设置为空才能够在循环显链表的时候不至于死循环
	delete ls;
	//当结束的时候最后一个动态开辟的内存是无效的,所以必须清除掉
	return head;
	//返回链首指针
}
void showl(test *head) {
	cout<<"链首指针:"< <
	　　 while(head)//以内存指向为null为条件循环显示先前输入的内容 {
		cout< name<<"|"< socre<
		　　 head=head->next;
	}
}
void main() {
	showl(create());
	cin.get();
	cin.get();
}