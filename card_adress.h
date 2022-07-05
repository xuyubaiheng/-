#ifndef CARD_ADRESS_H
#define CARD_ADRESS_H
 
#include <vector>
#include "phone_people.h"
#include "address_book.h"
class card_adress:public address_book{
	protected:
		int cnt;//手机联系人的数量
		vector<phone_people> v;//手机联系人对象数组
	public:
		card_adress();//构造函数,读取文本文件中的数据,并根据文件内容创建联系人对象数组
		~card_adress();//析构函数,将对象数组中的内容写入到文本文件中
		void add();//增加联系人
		void delete1(string name1);//删除联系人
		void display();//显示所有联系人信息
		void modify(string name1);//修改联系人
		void find(string name1);//查询联系人并显示 
		int getnum_phone_card();//获取手机卡通讯录联系人数量 
		void copy(string name1,string num1);//将联系人姓名、号码放入数组
		string get_name(int x);//获取数组中第x个联系人的姓名
		string get_telephone(int x);//获取数组中第x个联系人的电话号码
		void clear();//清空手机卡通讯录中的联系人信息 
};

#endif
