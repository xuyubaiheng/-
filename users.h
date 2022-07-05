#ifndef USERS_H
#define USERS_H

#include "Uimenu.h"
#include "card_adress.h"
#include "phone_adress.h"
#include "address_book.h"
class users{
		Uimenu u;//菜单对象 
		phone_adress pho;//手机通讯录 
		card_adress car;//手机卡通讯录
	public:
		users();//构造函数
		~users();//析构函数
		void add();//增加联系人
		void delete1();//删除联系人
		void display();//显示相应的通讯簿中联系人信息
		void modify();//修改联系人
		void find();//查询联系人并显示 
		void move_card_to_phone();//将手机卡中的存储的联系人的信息移动到手机中
		void move_phone_to_card();//将手机中存储的联系人的信息移动到手机卡中
		void copy_card_to_phone();//将手机卡中的存储的联系人的信息复制到手机中
		void copy_phone_to_card();//将手机中存储的联系人的信息复制到手机卡中
};

#endif 
