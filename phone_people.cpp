#include "phone_people.h"
#include "Uimenu.h"
phone_people::phone_people(string name1,string phone,string qq1,string place):phone_card(name1,phone){//�вι��캯�� 
	qq=qq1;
	native_place=place;
}

void phone_people::set(string name1,string phone,string qq1,string place)//��ֵ���� 
{
	phone_card::set(name1,phone);//���û���set���� 
	qq=qq1;
	native_place=place;
}

void phone_people::modify()//�޸ĺ��� 
{
	Uimenu u;
	u.modify_card();
	int choice; 
	cin>>choice;
	if(choice==1)
	{
		cout<<"�������µ���ϵ��������";
		cin>>name;
		cout<<"�������µ���ϵ�˵绰��";
		cin>>telephone;
		cout<<"�������µ���ϵ��qq���룺";
		cin>>qq;
		cout<<"�������µ���ϵ�˼��᣺";
		cin>>native_place; 
	}else if(choice==2) 
	{
		cout<<"�������µ���ϵ��������";
		cin>>name;
	}else if(choice==3) 
	{
		cout<<"�������µ���ϵ�˵绰��";
		cin>>telephone;	
	}else if(choice==4)
	{
		cout<<"�������µ���ϵ��qq���룺";
		cin>>qq; 
	}else if(choice==5)
	{
		cout<<"�������µ���ϵ�˼��᣺";
		cin>>native_place; 	
	}else
		return;
	cout<<"�޸ĳɹ���"<<endl; 
}

ostream& operator<<(ostream& os, const phone_people &p)//����<<����� 
{
	os<<"��ϵ��������\t"<< "��ϵ�˵绰��\t"<<"��ϵ��QQ�ţ�\t"<<"��ϵ�˼��᣺\n";
	os<<p.name<<"\t"<<p.telephone<<p.qq<<"\t"<<p.native_place<<"\n";
	return os;
}

istream& operator>>(istream& is, phone_people &p)//����>>����� 
{
	cout<<"����������������"<<endl;
	is>>p.name;
	cout<<"���������ĵ绰��"<<endl;
	is>>p.telephone; 
	cout<<"����������qq���룺"<<endl;
	is>>p.qq;
	cout<<"���������ļ��᣺"<<endl;
	is>>p.native_place; 
	return is;
}

string phone_people::get_qq(){//��ȡQQ�� 
	return qq;
}

string phone_people::get_native_place(){//��ȡ���� 
	return native_place;
}
