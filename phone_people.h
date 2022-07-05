#ifndef PHONE_PEOPLE_H
#define PHONE_PEOPLE_H
#include "phone_card.h"
#include <iostream>
#include <fstream> 
using namespace std;
class phone_people:public phone_card{//继承类：手机联系人类 
	private:
		string qq;//QQ号 
		string native_place;//籍贯 
	public:
		phone_people(string name1="新联系人",string phone="新号码",string qq1="qq号",string place="地址");// 
		void set(string name1,string phone,string qq1,string place);//赋值函数 
		void modify();//修改函数 
		string get_qq();//获取QQ号 
		string get_native_place();//获取籍贯 
		friend ostream& operator<<(ostream& os, const phone_people &p);//重载<<运算符 
		friend istream& operator>>(istream& is, phone_people &p);//重载>>运算符 
};

#endif
