#include "card_adress.h"
#include <fstream>
#include "phone_people.h"
card_adress::card_adress(){//构造函数,读取文本文件中的数据,并根据文件内容创建联系人对象数组
	ifstream file("手机卡.txt",ios::out|ios::app);//打开文件 
	cnt=-1;
	string name1,num1,qq1,place1;
	while(file>>name1>>num1>>qq1>>place1)//读取文件中联系人的姓名、号码、QQ号、籍贯 
	{
		phone_people x;//建立临时手机卡联系人对象
		x.set(name1,num1,qq1,place1);//存储联系人姓名和电话 
		v.push_back(x);//放入数组中
		cnt++;//联系人数量+1 
	}
	file.close();//关闭文件 
}

card_adress::~card_adress()//析构函数,将对象数组中的内容写入到文本文件中
{
	ofstream file("手机卡.txt");//打开文件
	printf("\n\n");
	printf("\t+--------------------------------------------+\n");
	printf("\t|                                            |\n");
	file<<"\t|"<<"联系人姓名"<<"\t\t"<<"联系人号码"<<"\t\t"<<"联系人QQ号"<<"\t\t"<<"联系人籍贯"<<"\n";
	for(int i=cnt;i>=0;i--)
	{
		file.setf(ios::left);//设置左对齐
		file<<"\t|"<<v[i].get_name()<<"\t\t"<<v[i].get_name()<<"\t\t"<<v[i].get_qq()<<"\t\t"<<v[i].get_native_place()<<endl;//写入姓名和电话
	}
	cnt=-1;//联系人数量-1 
	v.clear();//清空vector
	file.close();//关闭文件
}

void card_adress::add(){//增加联系人
	if(cnt>1000)//手机卡通讯录容量已满
	{
		cout<<"手机卡通讯录容量已满，无法新建联系人"<<endl;
		cout<<"请删除手机卡通讯录部分联系人或在手机通讯录新建联系人"<<endl; 
		return;
	}
	phone_people x;//建立临时手机卡联系人对象
	cin>>x;
	v.push_back(x);//放入数组中
	cnt++;//联系人数量+1 
	cout<<"恭喜你！新建联系人成功"<<endl; 
}

void card_adress::delete1(string name1)//删除联系人
{
	if(cnt<0)//手机卡通讯录无联系人 
	{
		cout<<"手机卡通讯录里已无联系人，现无法删除！"<<endl;
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
			cout<<"很抱歉,未在手机卡通讯录里找到对应联系人"<<endl;
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

void card_adress::display()//显示所有联系人信息
{
	if(cnt<0)//手机卡通讯录无联系人
	{
		cout<<"手机卡通讯录里已无联系人，现无法删除！"<<endl;
		return; 
	}
	cout<<"手机卡通讯录联系人数量为："<<cnt+1<<endl;
	printf("\n\n");
	printf("\t+--------------------------------------------+\n");
	printf("\t|                                            |\n");
	cout<<"\t|"<<"联系人姓名"<<"\t\t"<<"联系人号码"<<"\n";
	vector<phone_people>::iterator x;
	for(x=v.begin();x!=v.end();x++)//显示vector容器内的所有联系人信息 
		cout<<(*x);
}

void card_adress::modify(string name1)//修改联系人
{
	if(cnt<0)//手机卡通讯录无联系人
	{
		cout<<"手机卡通讯录里无联系人，现无法修改！"<<endl;
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
			cout<<"很抱歉,未在手机卡通讯录里找到对应联系人"<<endl;
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

void card_adress::find(string name1)//查询联系人并显示
{
	if(cnt<0)//手机卡通讯录无联系人
	{
		cout<<"手机卡通讯录里无联系人，现无法修改！"<<endl;
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
			cout<<"很抱歉,未在手机卡通讯录里找到对应联系人"<<endl;
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

int card_adress::getnum_phone_card(){//获取手机卡通讯录联系人数量
	return cnt;
}

void card_adress::copy(string name1,string num1)//将联系人姓名、号码放入数组
{
	for(int i=0;i<=cnt;i++)
	{
		if(v[i].get_name()==name1&&v[i].get_telephone()==num1)
		{
			return;
		}
	}
	phone_people x;
	x.set(name1,num1,"QQ","地址");
	v.push_back(x);
	cnt++;
}

string card_adress::get_name(int x){//获取数组中第x个联系人的姓名
	return v[x].get_name();
}

string card_adress::get_telephone(int x){//获取数组中第x个联系人的电话号码
	return v[x].get_telephone();
}

void card_adress::clear(){//清空手机卡通讯录中的联系人信息
	v.clear();
	cnt=-1;
}
