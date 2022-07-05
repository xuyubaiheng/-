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
	cout<<"请选择您要修改的内容："<<endl;
	cout<<"1.修改联系人的姓名\t\t2.修改联系人的电话"<<endl;
	int choice; 
	cin>>choice;
	if(choice==1)
	{
		cout<<"请输入新的联系人姓名：";
		cin>>a;
		set(a,x); 
	}else
	{
		cout<<"请输入新的联系人电话：";
		cin>>x;
		set(a,x); 		
	}
	cout<<"修改成功！"<<endl; 
}

ostream& operator<<(ostream& os, const phone_card &p)
{
	return os<<p.name<<"\t"<<p.telephone;
}

istream& operator>>(istream& is, phone_card &p)
{
	cout<<"请输入您的姓名："<<endl;
	is>>p.name;
	cout<<"请输入您的电话："<<endl;
	is>>p.telephone; 
}

int main()
{
	phone_card p("张三",12344567123);
	cin>>p;
	cout<<p<<endl;
	return 0;
}

