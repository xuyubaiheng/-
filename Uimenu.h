#ifndef UIMENU_H
#define UIMENU_H

#include <iostream>
using namespace std;
class Uimenu{
	public:
		void mainmenu();//主菜单
		void addmenu();//添加联系人菜单
		void deletemenu();//删除联系人菜单
		void modifymenu();//修改联系人菜单
		void modify_phone();//修改手机联系人菜单
		void modify_card();//修改手机卡联系人菜单
		void findmenu();//查找联系人菜单
		void displaymenu();//显示联系人菜单
		void copymovemenu();//复制移动联系人菜单
};

#endif
