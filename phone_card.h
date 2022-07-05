#ifndef PHONE_CARD_H
#define PHONE_CARD_H

#include <iostream>
#include <fstream> 
using namespace std;
class phone_card{//手机卡联系人类 
	protected:
		string name;//姓名 
		string telephone;//手机电话 
	public:
		phone_card(string a="新联系人",string b="无号码");//默认有参构造函数 
		void set(string a,string x);//赋值函数
		void modify();//修改数据成员的值
		string get_name();//获取姓名 
		string get_telephone();//获取电话号码 
		friend ostream& operator<<(ostream& os, const phone_card &p);//重载<<运算符
		friend istream& operator>>(istream& is, phone_card &p);//重载>>运算符
};

#endif 
 
