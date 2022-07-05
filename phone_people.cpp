#include "phone_people.h"
#include "Uimenu.h"
phone_people::phone_people(string name1,string phone,string qq1,string place):phone_card(name1,phone){//有参构造函数 
	qq=qq1;
	native_place=place;
}

void phone_people::set(string name1,string phone,string qq1,string place)//赋值函数 
{
	phone_card::set(name1,phone);//调用基类set函数 
	qq=qq1;
	native_place=place;
}

void phone_people::modify()//修改函数 
{
	Uimenu u;
	u.modify_card();
	int choice; 
	cin>>choice;
	if(choice==1)
	{
		cout<<"请输入新的联系人姓名：";
		cin>>name;
		cout<<"请输入新的联系人电话：";
		cin>>telephone;
		cout<<"请输入新的联系人qq号码：";
		cin>>qq;
		cout<<"请输入新的联系人籍贯：";
		cin>>native_place; 
	}else if(choice==2) 
	{
		cout<<"请输入新的联系人姓名：";
		cin>>name;
	}else if(choice==3) 
	{
		cout<<"请输入新的联系人电话：";
		cin>>telephone;	
	}else if(choice==4)
	{
		cout<<"请输入新的联系人qq号码：";
		cin>>qq; 
	}else if(choice==5)
	{
		cout<<"请输入新的联系人籍贯：";
		cin>>native_place; 	
	}else
		return;
	cout<<"修改成功！"<<endl; 
}

ostream& operator<<(ostream& os, const phone_people &p)//重载<<运算符 
{
	os<<"联系人姓名：\t"<< "联系人电话：\t"<<"联系人QQ号：\t"<<"联系人籍贯：\n";
	os<<p.name<<"\t"<<p.telephone<<p.qq<<"\t"<<p.native_place<<"\n";
	return os;
}

istream& operator>>(istream& is, phone_people &p)//重载>>运算符 
{
	cout<<"请输入您的姓名："<<endl;
	is>>p.name;
	cout<<"请输入您的电话："<<endl;
	is>>p.telephone; 
	cout<<"请输入您的qq号码："<<endl;
	is>>p.qq;
	cout<<"请输入您的籍贯："<<endl;
	is>>p.native_place; 
	return is;
}

string phone_people::get_qq(){//获取QQ号 
	return qq;
}

string phone_people::get_native_place(){//获取籍贯 
	return native_place;
}
