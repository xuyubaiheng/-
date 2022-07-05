#include "phone_adress.h"
#include "phone_card.h"
#include "address_book.h" 
#include <fstream>
phone_adress::phone_adress(){//读取文本文件中的数据,并根据文件内容创建联系人对象数组 
	ifstream file("手机.txt",ios::out|ios::app);
	string s[1010];
	string name1,num1;
	cnt=-1;
	while(file>>name1>>num1)//读取文件中联系人的姓名和号码 
	{
		phone_card x;//建立临时手机联系人对象 
		x.set(name1,num1);//存储联系人姓名和电话 
		v.push_back(x);//放入数组中 
		cnt++;//联系人数量+1 
	}
	file.close();//关闭文件 
}

phone_adress::~phone_adress(){//析构函数,将对象数组中的内容写入到文本文件中
	ofstream file("手机.txt");//打开文件 
	printf("\n\n");
	printf("\t+--------------------------------------------+\n");
	printf("\t|                                            |\n");
	file<<"\t|"<<"联系人姓名"<<"\t\t"<<"联系人号码"<<"\n";
	for(int i=cnt;i>=0;i--)
	{
		file.setf(ios::left);//设置左对齐 
		file<<"\t|"<<v[i].get_name()<<"\t\t"<<v[i].get_telephone()<<endl;//写入姓名和电话 
	}
	cnt=-1;//联系人数量-1 
	v.clear();//清空vector 
	file.close();//关闭文件 
} 

void phone_adress::add(){//增加联系人
	if(cnt>1000)//手机通讯录容量已满 
	{
		cout<<"手机通讯录容量已满，无法新建联系人"<<endl;
		cout<<"请删除手机通讯录部分联系人或在手机卡通讯录新建联系人"<<endl; 
		return;
	}
	phone_card x;//建立临时手机联系人对象 
	cin>>x;
	v.push_back(x);//放入数组中
	cnt++;//联系人数量+1 
	cout<<"恭喜你！新建联系人成功"<<endl; 
}

void phone_adress::delete1(string name1)//删除联系人
{
	if(cnt<0)//手机通讯录无联系人 
	{
		cout<<"手机通讯录里已无联系人，现无法删除！"<<endl;
		return; 
	}
	while(1)
	{
		bool flag=false;
		for(int i=0;i<=cnt;i++)
		{
			if(v[i].get_name()==name1)//寻找名字相同的联系人 
			{
				flag=true;
				cout<<"该联系人信息为："<<endl;
				cout<<v[i];
				cout<<"是否选择删除该联系人？ （y/n)"<<endl;
				char c;
				cin>>c;
				if(c=='y')
				{ 
					v.erase(v.begin()+i);
					cnt--;
					cout<<"恭喜你！删除成功"<<endl; 
				 }else
				 	continue; 
				cout<<"\n是否选择寻找相同姓名联系人？ （y/n)"<<endl;
				cin>>c;
				if(c=='y')
					continue;
				else
					break;
			}
		}
		if(!flag)//没有该联系人 
		{
			cout<<"很抱歉,未在手机通讯录里找到对应联系人"<<endl;
			cout<<"是否选择重新输入所删除联系人的姓名？ （y/n)"<<endl;
			char c;
			cin>>c;
			if(c=='y')
			{
				cout<<"请重新输入姓名："<<endl;
				cin>>name1;
				continue; 
			}else
			{
				cout<<"取消输入"<<endl;
				break;
			}
		}else
			break;
	}
	return;
}

void phone_adress::display()//显示所有联系人信息
{
	if(cnt<0)//手机通讯录无联系人
	{
		cout<<"手机通讯录里已无联系人！"<<endl;
		return; 
	}
	cout<<"手机通讯录联系人数量为："<<cnt+1<<endl;
	printf("\n\n");
	printf("\t+--------------------------------------------+\n");
	printf("\t|                                            |\n");
	cout<<"\t|"<<"联系人姓名"<<"\t\t"<<"联系人号码"<<"\n";
	vector<phone_card>::iterator x;
	for(x=v.begin();x!=v.end();x++)//显示vector容器内的所有联系人信息 
		cout<<(*x);
}

void phone_adress::modify(string name1)//修改联系人
{
	if(cnt<0)//手机通讯录无联系人
	{
		cout<<"手机通讯录里无联系人，现无法修改！"<<endl;
		return; 
	}
	while(1)
	{
		int flag=false;
		for(int i=0;i<=cnt;i++)
		{
			if(v[i].get_name()==name1)//寻找名字相同的联系人
			{
				flag=true;
				cout<<"该联系人信息为："<<endl;
				cout<<v[i];
				cout<<"是否选择修改该联系人？ （y/n)"<<endl;
				char c;
				cin>>c;
				if(c=='y')
				{
					v.erase(v.begin()+i);
					cnt--;
					cout<<"恭喜你！修改成功"<<endl; 
				 }else
				 	continue; 
				cout<<"\n是否选择寻找相同姓名联系人？ （y/n)"<<endl;
				cin>>c;
				if(c=='y')
					continue;
				else
					break;
			}
		}
		if(!flag)//没有该联系人 
		{
			cout<<"很抱歉,未在手机通讯录里找到对应联系人"<<endl;
			cout<<"是否选择重新输入所修改联系人的姓名？ （y/n)"<<endl;
			char c;
			cin>>c;
			if(c=='y')
			{
				cout<<"请重新输入姓名："<<endl;
				cin>>name1;
				continue; 
			}else
			{
				cout<<"取消输入"<<endl;
				break;
			}
		}else
			break;
	}
	return;
}

void phone_adress::find(string name1)//查询联系人并显示 
{
	if(cnt<0)//手机通讯录无联系人
	{
		cout<<"手机通讯录里无联系人，现无法修改！"<<endl;
		return; 
	}
	while(1)
	{
		int flag=false;
		for(int i=0;i<=cnt;i++)
		{
			if(v[i].get_name()==name1)//寻找名字相同的联系人
			{
				flag=true;
				cout<<"该联系人信息为："<<endl;
				cout<<v[i];
				cout<<"是否选择查询该联系人？ （y/n)"<<endl;
				char c;
				cin>>c;
				if(c=='y')
				{
					v.erase(v.begin()+i);
					cnt--;
					cout<<"恭喜你！查询成功"<<endl; 
				 }else
				 	continue; 
				cout<<"\n是否选择寻找相同姓名联系人？ （y/n)"<<endl;
				cin>>c;
				if(c=='y')
					continue;
				else
					break;
			}
		}
		if(!flag)//没有该联系人 
		{
			cout<<"很抱歉,未在手机通讯录里找到对应联系人"<<endl;
			cout<<"是否选择重新输入所查询联系人的姓名？ （y/n)"<<endl;
			char c;
			cin>>c;
			if(c=='y')
			{
				cout<<"请重新输入姓名："<<endl;
				cin>>name1;
				continue; 
			}else
			{
				cout<<"取消输入"<<endl;
				break;
			}
		}else
			break;
	}
	return;
}

int phone_adress::getnum_phone_card(){//获取手机通讯录联系人数量 
	return cnt;
}

void phone_adress::copy(string name1,string num1)//将联系人姓名、号码放入数组 
{
	for(int i=0;i<=cnt;i++)
	{
		if(v[i].get_name()==name1&&v[i].get_telephone()==num1)
		{
			cout<<"相同姓名联系人已存在！"<<endl;
			return;
		}
	}
	phone_card x;
	x.set(name1,num1);
	v.push_back(x);
	cnt++;
}

string phone_adress::get_name(int x)//获取数组中第x个联系人的姓名
{
	return v[x].get_name();
}

string phone_adress::get_telephone(int x){//获取数组中第x个联系人的电话号码
	return v[x].get_telephone();
}

void phone_adress::clear(){//清空手机通讯录中的联系人信息
	v.clear();
	cnt=-1;
}
