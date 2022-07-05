#include "users.h"
#include "address_book.h"
#include <iostream>
using namespace std;
users::users(){//构造函数
	printf("\n\n");
	printf("\t+--------------------------------------------+\n");
	printf("\t|                                            |\n");
	printf("\t|\t欢迎使用通讯录管理系统               |\n");
	printf("\t|\t手机通讯录里联系人的数量为：%d        |\n",pho.getnum_phone_card()+1);
	printf("\t|\t手机卡通讯录里联系人的数量为：%d      |\n",car.getnum_phone_card()+1);
	printf("\t|                                            |\n");
	printf("\t+--------------------------------------------+\n");
} 

users::~users(){//析构函数
	printf("\n\n");
	printf("\t+--------------------------------------------+\n");
	printf("\t|                                            |\n");
	printf("\t|\t\t欢迎使用通讯录管理系统     |\t\n");
	printf("\t|手机通讯录里联系人的数量为：phone_adress.get_phone_card()+1\n");
	printf("\t|手机卡通讯录里联系人的数量为：card_adress.get_phone_card()+1\n");
	printf("\t|                                            |\n");
	printf("\t+--------------------------------------------+\n");
	system("pause");//暂停 
	system("cls");//清屏 
	fflush(stdin);//清除缓冲
}

void users::add(){//增加联系人
	int cnt=3;
	while(cnt)
	{
		address_book *tmp;//通讯录基类指针 
		int x;
		u.addmenu();//新建菜单 
		cin>>x;
		cnt--;
		if(x==1)//在手机通讯录新建联系人 
		{
			tmp=&pho;//指针指向手机通讯簿对象 
			tmp->add();//调用手机通讯录对象 
			break;
		}else if(x==2)//在手机卡通讯录新建联系人
		{
			tmp=&car;//指针指向手机卡通讯簿对象
			tmp->add();//调用手机卡通讯录对象
			break;
		}else if(x==0)
			return;
		else
		{
			cout<<"输入错误，请重新输入！"<<endl;
			system("pause");//暂停 
			system("cls");//清屏 
			fflush(stdin);//清除缓冲
		}
	}
	if(cnt==0)
		cout<<"你已多次输入错误，现已无法输入"<<endl;
} 

void users::delete1(){//删除联系人
	int cnt=3;
	while(cnt)
	{
		address_book *tmp;//通讯录基类指针 
		int x;
		u.deletemenu();//删除菜单 
		string s;
		cin>>x;
		cnt--;
		if(x==1)//在手机通讯录删除联系人
		{
			cout<<"请输入你要删除的联系人姓名："; 
			cin>>s;
			tmp=&pho;//指针指向手机通讯簿对象 
			tmp->delete1(s);//调用手机通讯录对象 
			break;
		}else if(x==2)//在手机卡通讯录删除联系人
		{
			cout<<"请输入你要删除的联系人姓名："; 
			cin>>s;
			tmp=&car;//指针指向手机卡通讯簿对象
			tmp->delete1(s);//调用手机卡通讯录对象
			break;
		}else if(x==3)//在两个通讯录删除联系人
		{
			cout<<"请输入你要删除的联系人姓名："; 
			cin>>s;
			tmp=&pho;//指针指向手机通讯簿对象 
			tmp->delete1(s);//调用手机通讯录对象
			tmp=&car;//指针指向手机卡通讯簿对象
			tmp->delete1(s);//调用手机卡通讯录对象
			break;	
		}else if(x==0)
			return;
		else
		{
			cout<<"输入错误，请重新输入！"<<endl;
			system("pause");//暂停 
			system("cls");//清屏 
			fflush(stdin);//清除缓冲
		}
	}
	if(cnt==0)
		cout<<"你已多次输入错误，现已无法输入"<<endl;
} 

void users::modify(){//修改联系人 
	int cnt=3;
	while(cnt)
	{
		address_book *tmp;//通讯录基类指针
		int x;
		u.modifymenu();//修改菜单 
		string s;
		cin>>x;
		cnt--;
		if(x==1)//在手机通讯录修改联系人
		{
			cout<<"请输入你要修改的联系人姓名："; 
			cin>>s;
			tmp=&pho;//指针指向手机通讯簿对象
			tmp->modify(s);//调用手机通讯录对象  
			break;
		}else if(x==2)//在手机卡通讯录修改联系人
		{
			cout<<"请输入你要修改的联系人姓名："; 
			cin>>s;
			tmp=&car;//指针指向手机卡通讯簿对象
			tmp->modify(s);//调用手机卡通讯录对象
			break;
		}else if(x==3)//在两个通讯录修改联系人
		{
			cout<<"请输入你要修改的联系人姓名："; 
			cin>>s;
			tmp=&pho;//指针指向手机通讯簿对象
			tmp->modify(s);//调用手机通讯录对象  
			tmp=&car;//指针指向手机卡通讯簿对象
			tmp->modify(s);//调用手机卡通讯录对象
			break;	
		}else if(x==0)
			return;
		else
		{
			cout<<"输入错误，请重新输入！"<<endl;
			system("pause");//暂停 
			system("cls");//清屏 
			fflush(stdin);//清除缓冲
		}
	}
	if(cnt==0)
		cout<<"你已多次输入错误，现已无法输入"<<endl;
} 

void users::find(){//查找联系人 
	int cnt=3;
	while(cnt)
	{
		address_book *tmp;//通讯录基类指针
		int x;
		u.findmenu();//修改菜单 
		string s;
		cin>>x;
		cnt--;
		if(x==1)//在手机通讯录查找联系人
		{
			cout<<"请输入你要查询的联系人姓名："; 
			cin>>s;
			tmp=&pho;//指针指向手机通讯簿对象
			tmp->find(s);//调用手机通讯录对象 
			break;
		}else if(x==2)//在手机卡通讯录查找联系人
		{
			cout<<"请输入你要查询的联系人姓名："; 
			cin>>s;
			tmp=&car;//指针指向手机卡通讯簿对象
			tmp->find(s);//调用手机卡通讯录对象
			break;
		}else if(x==3)//在两个通讯录查找联系人
		{
			cout<<"请输入你要查询的联系人姓名："; 
			cin>>s;
			tmp=&pho;//指针指向手机通讯簿对象
			tmp->find(s);//调用手机通讯录对象
			tmp=&car;//指针指向手机卡通讯簿对象
			tmp->find(s);//调用手机卡通讯录对象
			break;	
		}else if(x==0)
			return;
		else
		{
			cout<<"输入错误，请重新输入！"<<endl;
			system("pause");//暂停 
			system("cls");//清屏 
			fflush(stdin);//清除缓冲
		}
	}
	if(cnt==0)
		cout<<"你已多次输入错误，现已无法输入"<<endl;
} 

void users::display(){//显示联系人
	int cnt=3;
	while(cnt)
	{
		address_book *tmp;//通讯录基类指针
		u.displaymenu();//显示菜单 
		int x;
		cin>>x;
		cnt--;
		if(x==1)//显示手机通讯录所有联系人
		{
			printf("\t|\t\t  手机通讯录               |\t\n");
			tmp=&pho;//指针指向手机通讯簿对象
			tmp->display();//调用手机通讯录对象 
			break;
		}else if(x==2)//显示手机卡通讯录所有联系人
		{
			printf("\t|\t\t  手机卡通讯录             |\t\n");
			tmp=&car;//指针指向手机卡通讯簿对象
			tmp->display();//调用手机卡通讯录对象
			break;
		}else if(x==3)//显示两个通讯录所有联系人
		{
			printf("\t|\t\t  手机通讯录               |\t\n");
			tmp=&pho;//指针指向手机通讯簿对象
			tmp->display();//调用手机通讯录对象 
			printf("\t|\t\t  手机卡通讯录             |\t\n");
			tmp=&car;//指针指向手机卡通讯簿对象
			tmp->display();//调用手机卡通讯录对象
			break;	
		}else if(x==0)
			return;
		else
		{
			cout<<"输入错误，请重新输入！"<<endl;
			system("pause");//暂停 
			system("cls");//清屏 
			fflush(stdin);//清除缓冲
		}
	}
	if(cnt==0)
		cout<<"你已多次输入错误，现已无法输入"<<endl;
} 

void users::move_card_to_phone(){//将手机卡中的存储的联系人的信息移动到手机中
	if(car.getnum_phone_card()<0)//手机卡通讯录无联系人 
	{
		cout<<"手机卡通讯录已无联系人"<<endl; 
		return;
	}
	for(int i=0;i<=car.getnum_phone_card();i++)
	{
		if(pho.getnum_phone_card()>=1000)//手机通讯录联系人已满 
		{
			cout<<"手机通讯录内存已满"<<endl;  
			return;
		}
		pho.copy(car.get_name(i),car.get_telephone(i));//将联系人姓名、号码放入数组
		car.clear();//清空手机卡通讯录中的联系人信息
		cout<<"移动成功"<<endl;
	 } 
}

void users::move_phone_to_card(){//将手机中存储的联系人的信息移动到手机卡中
	if(pho.getnum_phone_card()<0)//手机通讯录无联系人
	{
		cout<<"手机通讯录已无联系人"<<endl; 
		return;
	}
	for(int i=0;i<=pho.getnum_phone_card();i++)
	{
		if(car.getnum_phone_card()>=1000)//手机卡通讯录联系人已满
		{
			cout<<"手机卡通讯录内存已满"<<endl;  
			return;
		}
		car.copy(pho.get_name(i),pho.get_telephone(i));//将联系人姓名、号码放入数组
		pho.clear();//清空手机通讯录中的联系人信息
		cout<<"移动成功"<<endl;
	 } 
}

void users::copy_card_to_phone(){//将手机卡中的存储的联系人的信息复制到手机中
	if(car.getnum_phone_card()<0)//手机卡通讯录无联系人
	{
		cout<<"手机卡通讯录已无联系人"<<endl; 
		return;
	}
	for(int i=0;i<=car.getnum_phone_card();i++)
	{
		if(pho.getnum_phone_card()>=1000)//手机通讯录联系人已满
		{
			cout<<"手机通讯录内存已满"<<endl;  
			return;
		}
		pho.copy(car.get_name(i),car.get_telephone(i));//将联系人姓名、号码放入数组
		car.clear();//清空手机卡通讯录中的联系人信息
		cout<<"复制成功"<<endl;
	 } 
}

void users::copy_phone_to_card(){//将手机中存储的联系人的信息复制到手机卡中
	if(pho.getnum_phone_card()<0)//手机卡通讯录无联系人
	{
		cout<<"手机通讯录已无联系人"<<endl; 
		return;
	}
	for(int i=0;i<=pho.getnum_phone_card();i++)
	{
		if(car.getnum_phone_card()>=1000)//手机卡通讯录联系人已满
		{
			cout<<"手机卡通讯录内存已满"<<endl;  
			return;
		}
		car.copy(pho.get_name(i),pho.get_telephone(i));//将联系人姓名、号码放入数组
		pho.clear();//清空手机卡通讯录中的联系人信息
		cout<<"复制成功"<<endl;
	 } 
}
