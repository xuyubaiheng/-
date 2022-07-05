#include "card_adress.h"
#include <fstream>
#include "phone_people.h"
card_adress::card_adress(){//���캯��,��ȡ�ı��ļ��е�����,�������ļ����ݴ�����ϵ�˶�������
	ifstream file("�ֻ���.txt",ios::out|ios::app);//���ļ� 
	cnt=-1;
	string name1,num1,qq1,place1;
	while(file>>name1>>num1>>qq1>>place1)//��ȡ�ļ�����ϵ�˵����������롢QQ�š����� 
	{
		phone_people x;//������ʱ�ֻ�����ϵ�˶���
		x.set(name1,num1,qq1,place1);//�洢��ϵ�������͵绰 
		v.push_back(x);//����������
		cnt++;//��ϵ������+1 
	}
	file.close();//�ر��ļ� 
}

card_adress::~card_adress()//��������,�����������е�����д�뵽�ı��ļ���
{
	ofstream file("�ֻ���.txt");//���ļ�
	printf("\n\n");
	printf("\t+--------------------------------------------+\n");
	printf("\t|                                            |\n");
	file<<"\t|"<<"��ϵ������"<<"\t\t"<<"��ϵ�˺���"<<"\t\t"<<"��ϵ��QQ��"<<"\t\t"<<"��ϵ�˼���"<<"\n";
	for(int i=cnt;i>=0;i--)
	{
		file.setf(ios::left);//���������
		file<<"\t|"<<v[i].get_name()<<"\t\t"<<v[i].get_name()<<"\t\t"<<v[i].get_qq()<<"\t\t"<<v[i].get_native_place()<<endl;//д�������͵绰
	}
	cnt=-1;//��ϵ������-1 
	v.clear();//���vector
	file.close();//�ر��ļ�
}

void card_adress::add(){//������ϵ��
	if(cnt>1000)//�ֻ���ͨѶ¼��������
	{
		cout<<"�ֻ���ͨѶ¼�����������޷��½���ϵ��"<<endl;
		cout<<"��ɾ���ֻ���ͨѶ¼������ϵ�˻����ֻ�ͨѶ¼�½���ϵ��"<<endl; 
		return;
	}
	phone_people x;//������ʱ�ֻ�����ϵ�˶���
	cin>>x;
	v.push_back(x);//����������
	cnt++;//��ϵ������+1 
	cout<<"��ϲ�㣡�½���ϵ�˳ɹ�"<<endl; 
}

void card_adress::delete1(string name1)//ɾ����ϵ��
{
	if(cnt<0)//�ֻ���ͨѶ¼����ϵ�� 
	{
		cout<<"�ֻ���ͨѶ¼��������ϵ�ˣ����޷�ɾ����"<<endl;
		return; 
	}
	while(1)
	{
		bool flag=false;
		for(int i=0;i<=cnt;i++)
		{
			if(v[i].get_name()==name1)//Ѱ��������ͬ����ϵ�� 
			{
				flag=true;
				cout<<"����ϵ����ϢΪ��"<<endl;
				cout<<v[i];
				cout<<"�Ƿ�ѡ��ɾ������ϵ�ˣ� ��y/n)"<<endl;
				char c;
				cin>>c;
				if(c=='y')
				{
					v.erase(v.begin()+i);
					cnt--;
					cout<<"��ϲ�㣡ɾ���ɹ�"<<endl; 
				 }else
				 	continue; 
				cout<<"\n�Ƿ�ѡ��Ѱ����ͬ������ϵ�ˣ� ��y/n)"<<endl;
				cin>>c;
				if(c=='y')
					continue;
				else
					break;
			}
		}
		if(!flag)//û�и���ϵ�� 
		{
			cout<<"�ܱ�Ǹ,δ���ֻ���ͨѶ¼���ҵ���Ӧ��ϵ��"<<endl;
			cout<<"�Ƿ�ѡ������������ɾ����ϵ�˵������� ��y/n)"<<endl;
			char c;
			cin>>c;
			if(c=='y')
			{
				cout<<"����������������"<<endl;
				cin>>name1;
				continue; 
			}else
			{
				cout<<"ȡ������"<<endl;
				break;
			}
		}else
			break;
	}
	return;
}

void card_adress::display()//��ʾ������ϵ����Ϣ
{
	if(cnt<0)//�ֻ���ͨѶ¼����ϵ��
	{
		cout<<"�ֻ���ͨѶ¼��������ϵ�ˣ����޷�ɾ����"<<endl;
		return; 
	}
	cout<<"�ֻ���ͨѶ¼��ϵ������Ϊ��"<<cnt+1<<endl;
	printf("\n\n");
	printf("\t+--------------------------------------------+\n");
	printf("\t|                                            |\n");
	cout<<"\t|"<<"��ϵ������"<<"\t\t"<<"��ϵ�˺���"<<"\n";
	vector<phone_people>::iterator x;
	for(x=v.begin();x!=v.end();x++)//��ʾvector�����ڵ�������ϵ����Ϣ 
		cout<<(*x);
}

void card_adress::modify(string name1)//�޸���ϵ��
{
	if(cnt<0)//�ֻ���ͨѶ¼����ϵ��
	{
		cout<<"�ֻ���ͨѶ¼������ϵ�ˣ����޷��޸ģ�"<<endl;
		return; 
	}
	while(1)
	{
		int flag=false;
		for(int i=0;i<=cnt;i++)
		{
			if(v[i].get_name()==name1)//Ѱ��������ͬ����ϵ��
			{
				flag=true;
				cout<<"����ϵ����ϢΪ��"<<endl;
				cout<<v[i];
				cout<<"�Ƿ�ѡ���޸ĸ���ϵ�ˣ� ��y/n)"<<endl;
				char c;
				cin>>c;
				if(c=='y')
				{
					v.erase(v.begin()+i);
					cnt--;
					cout<<"��ϲ�㣡�޸ĳɹ�"<<endl; 
				 }else
				 	continue; 
				cout<<"\n�Ƿ�ѡ��Ѱ����ͬ������ϵ�ˣ� ��y/n)"<<endl;
				cin>>c;
				if(c=='y')
					continue;
				else
					break;
			}
		}
		if(!flag)//û�и���ϵ��
		{
			cout<<"�ܱ�Ǹ,δ���ֻ���ͨѶ¼���ҵ���Ӧ��ϵ��"<<endl;
			cout<<"�Ƿ�ѡ�������������޸���ϵ�˵������� ��y/n)"<<endl;
			char c;
			cin>>c;
			if(c=='y')
			{
				cout<<"����������������"<<endl;
				cin>>name1;
				continue; 
			}else
			{
				cout<<"ȡ������"<<endl;
				break;
			}
		}else
			break;
	}
	return;
}

void card_adress::find(string name1)//��ѯ��ϵ�˲���ʾ
{
	if(cnt<0)//�ֻ���ͨѶ¼����ϵ��
	{
		cout<<"�ֻ���ͨѶ¼������ϵ�ˣ����޷��޸ģ�"<<endl;
		return; 
	}
	while(1)
	{
		int flag=false;
		for(int i=0;i<=cnt;i++)
		{
			if(v[i].get_name()==name1)//Ѱ��������ͬ����ϵ��
			{
				flag=true;
				cout<<"����ϵ����ϢΪ��"<<endl;
				cout<<v[i];
				cout<<"�Ƿ�ѡ���ѯ����ϵ�ˣ� ��y/n)"<<endl;
				char c;
				cin>>c;
				if(c=='y')
				{
					v.erase(v.begin()+i);
					cnt--;
					cout<<"��ϲ�㣡��ѯ�ɹ�"<<endl; 
				 }else
				 	continue; 
				cout<<"\n�Ƿ�ѡ��Ѱ����ͬ������ϵ�ˣ� ��y/n)"<<endl;
				cin>>c;
				if(c=='y')
					continue;
				else
					break;
			}
		}
		if(!flag)//û�и���ϵ�� 
		{
			cout<<"�ܱ�Ǹ,δ���ֻ���ͨѶ¼���ҵ���Ӧ��ϵ��"<<endl;
			cout<<"�Ƿ�ѡ��������������ѯ��ϵ�˵������� ��y/n)"<<endl;
			char c;
			cin>>c;
			if(c=='y')
			{
				cout<<"����������������"<<endl;
				cin>>name1;
				continue; 
			}else
			{
				cout<<"ȡ������"<<endl;
				break;
			}
		}else
			break;
	}
	return;
}

int card_adress::getnum_phone_card(){//��ȡ�ֻ���ͨѶ¼��ϵ������
	return cnt;
}

void card_adress::copy(string name1,string num1)//����ϵ�������������������
{
	for(int i=0;i<=cnt;i++)
	{
		if(v[i].get_name()==name1&&v[i].get_telephone()==num1)
		{
			return;
		}
	}
	phone_people x;
	x.set(name1,num1,"QQ","��ַ");
	v.push_back(x);
	cnt++;
}

string card_adress::get_name(int x){//��ȡ�����е�x����ϵ�˵�����
	return v[x].get_name();
}

string card_adress::get_telephone(int x){//��ȡ�����е�x����ϵ�˵ĵ绰����
	return v[x].get_telephone();
}

void card_adress::clear(){//����ֻ���ͨѶ¼�е���ϵ����Ϣ
	v.clear();
	cnt=-1;
}
