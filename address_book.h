#ifndef ADDRESS_BOOK_H
#define ADDRESS_BOOK_H

#include <iostream>
#include <string> 
using namespace std;
class address_book{//ͨѶ¼������ 
	public:
		virtual void add()=0;//���Ӻ��� 
		virtual void delete1(string name1)=0;//ɾ������ 
		virtual void find(string name1)=0;//������ϵ�˲���ʾ 
		virtual void modify(string name1)=0;//�޸���ϵ����Ϣ 
		virtual void display()=0;//��ʾȫ����ϵ����Ϣ 
};

#endif 
