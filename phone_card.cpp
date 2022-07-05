#include "phone_card.h"
#include "Uimenu.h"
phone_card::phone_card(string a,string b){//有参构造函数 
			name=a;
			telephone=b;
}

void phone_card::set(string a,string x)//赋值函数 
{
	name=a;
	telephone=x;
}

void phone_card::modify()//修改数据成员的值
{ 
	Uimenu u;
	u.modify_phone();
	int choice; 
	cin>>choice;
	if(choice==1)
	{
		cout<<"请输入新的联系人姓名：";
		cin>>name;
		cout<<"请输入新的联系人电话：";
		cin>>telephone;
	}else if(choice==2) 
	{
		cout<<"请输入新的联系人姓名：";
		cin>>name;
	}else if(choice==3) 
	{
		cout<<"请输入新的联系人电话：";
		cin>>telephone;	
	}else
		return;
	cout<<"修改成功！"<<endl; 
}

ostream& operator<<(ostream& os, const phone_card &p)//重载<<运算符 
{
	os<<"联系人姓名：\t"<< "联系人电话：\n";
	os<<p.name<<"\t"<<p.telephone<<"\n";
	return os;
}

istream& operator>>(istream& is, phone_card &p)//重载>>运算符 
{
	cout<<"请输入您的姓名："<<endl;
	is>>p.name;
	cout<<"请输入您的电话："<<endl;
	is>>p.telephone; 
	return is;
}

string phone_card::get_name(){//获取姓名 
	return name;
}

string phone_card::get_telephone(){//获取号码 
	return telephone;
}
