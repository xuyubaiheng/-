#include "phone_card.h"
#include "Uimenu.h"
phone_card::phone_card(string a,string b){//�вι��캯�� 
			name=a;
			telephone=b;
}

void phone_card::set(string a,string x)//��ֵ���� 
{
	name=a;
	telephone=x;
}

void phone_card::modify()//�޸����ݳ�Ա��ֵ
{ 
	Uimenu u;
	u.modify_phone();
	int choice; 
	cin>>choice;
	if(choice==1)
	{
		cout<<"�������µ���ϵ��������";
		cin>>name;
		cout<<"�������µ���ϵ�˵绰��";
		cin>>telephone;
	}else if(choice==2) 
	{
		cout<<"�������µ���ϵ��������";
		cin>>name;
	}else if(choice==3) 
	{
		cout<<"�������µ���ϵ�˵绰��";
		cin>>telephone;	
	}else
		return;
	cout<<"�޸ĳɹ���"<<endl; 
}

ostream& operator<<(ostream& os, const phone_card &p)//����<<����� 
{
	os<<"��ϵ��������\t"<< "��ϵ�˵绰��\n";
	os<<p.name<<"\t"<<p.telephone<<"\n";
	return os;
}

istream& operator>>(istream& is, phone_card &p)//����>>����� 
{
	cout<<"����������������"<<endl;
	is>>p.name;
	cout<<"���������ĵ绰��"<<endl;
	is>>p.telephone; 
	return is;
}

string phone_card::get_name(){//��ȡ���� 
	return name;
}

string phone_card::get_telephone(){//��ȡ���� 
	return telephone;
}
