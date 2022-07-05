#ifndef ADDRESS_BOOK_H
#define ADDRESS_BOOK_H

#include <iostream>
#include <string> 
using namespace std;
class address_book{//通讯录抽象类 
	public:
		virtual void add()=0;//增加函数 
		virtual void delete1(string name1)=0;//删除函数 
		virtual void find(string name1)=0;//查找联系人并显示 
		virtual void modify(string name1)=0;//修改联系人信息 
		virtual void display()=0;//显示全部联系人信息 
};

#endif 
