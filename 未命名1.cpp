#include <iostream>
#include <fstream> 
using namespace std;
class phone_card{
	private:
		string name;
		int telephone;
	public:
		phone_card(string a="Lihua",int b=12345678911){
			name=a;
			telephone=b;
		}
		void set(string a,int x);
		void modify(string a,int x);
		friend ostream& operator<<(ostream& os, const phone_card &p);
		friend istream& operator>>(istream& is, phone_card &p);
}; 
void phone_card::set(string a,int x)
{
	name=a;
	telephone=x;
}

void phone_card::modify(string a,int x)
{
	cout<<"��ѡ����Ҫ�޸ĵ����ݣ�"<<endl;
	cout<<"1.�޸���ϵ�˵�����\t\t2.�޸���ϵ�˵ĵ绰"<<endl;
	int choice; 
	cin>>choice;
	if(choice==1)
	{
		cout<<"�������µ���ϵ��������";
		cin>>a;
		set(a,x); 
	}else
	{
		cout<<"�������µ���ϵ�˵绰��";
		cin>>x;
		set(a,x); 		
	}
	cout<<"�޸ĳɹ���"<<endl; 
}

ostream& operator<<(ostream& os, const phone_card &p)
{
	return os<<p.name<<"\t"<<p.telephone;
}

istream& operator>>(istream& is, phone_card &p)
{
	cout<<"����������������"<<endl;
	is>>p.name;
	cout<<"���������ĵ绰��"<<endl;
	is>>p.telephone; 
}

int main()
{
	phone_card p("����",12344567123);
	cin>>p;
	cout<<p<<endl;
	return 0;
}

