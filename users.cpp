#include "users.h"
#include "address_book.h"
#include <iostream>
using namespace std;
users::users(){//���캯��
	printf("\n\n");
	printf("\t+--------------------------------------------+\n");
	printf("\t|                                            |\n");
	printf("\t|\t��ӭʹ��ͨѶ¼����ϵͳ               |\n");
	printf("\t|\t�ֻ�ͨѶ¼����ϵ�˵�����Ϊ��%d        |\n",pho.getnum_phone_card()+1);
	printf("\t|\t�ֻ���ͨѶ¼����ϵ�˵�����Ϊ��%d      |\n",car.getnum_phone_card()+1);
	printf("\t|                                            |\n");
	printf("\t+--------------------------------------------+\n");
} 

users::~users(){//��������
	printf("\n\n");
	printf("\t+--------------------------------------------+\n");
	printf("\t|                                            |\n");
	printf("\t|\t\t��ӭʹ��ͨѶ¼����ϵͳ     |\t\n");
	printf("\t|�ֻ�ͨѶ¼����ϵ�˵�����Ϊ��phone_adress.get_phone_card()+1\n");
	printf("\t|�ֻ���ͨѶ¼����ϵ�˵�����Ϊ��card_adress.get_phone_card()+1\n");
	printf("\t|                                            |\n");
	printf("\t+--------------------------------------------+\n");
	system("pause");//��ͣ 
	system("cls");//���� 
	fflush(stdin);//�������
}

void users::add(){//������ϵ��
	int cnt=3;
	while(cnt)
	{
		address_book *tmp;//ͨѶ¼����ָ�� 
		int x;
		u.addmenu();//�½��˵� 
		cin>>x;
		cnt--;
		if(x==1)//���ֻ�ͨѶ¼�½���ϵ�� 
		{
			tmp=&pho;//ָ��ָ���ֻ�ͨѶ������ 
			tmp->add();//�����ֻ�ͨѶ¼���� 
			break;
		}else if(x==2)//���ֻ���ͨѶ¼�½���ϵ��
		{
			tmp=&car;//ָ��ָ���ֻ���ͨѶ������
			tmp->add();//�����ֻ���ͨѶ¼����
			break;
		}else if(x==0)
			return;
		else
		{
			cout<<"����������������룡"<<endl;
			system("pause");//��ͣ 
			system("cls");//���� 
			fflush(stdin);//�������
		}
	}
	if(cnt==0)
		cout<<"���Ѷ��������������޷�����"<<endl;
} 

void users::delete1(){//ɾ����ϵ��
	int cnt=3;
	while(cnt)
	{
		address_book *tmp;//ͨѶ¼����ָ�� 
		int x;
		u.deletemenu();//ɾ���˵� 
		string s;
		cin>>x;
		cnt--;
		if(x==1)//���ֻ�ͨѶ¼ɾ����ϵ��
		{
			cout<<"��������Ҫɾ������ϵ��������"; 
			cin>>s;
			tmp=&pho;//ָ��ָ���ֻ�ͨѶ������ 
			tmp->delete1(s);//�����ֻ�ͨѶ¼���� 
			break;
		}else if(x==2)//���ֻ���ͨѶ¼ɾ����ϵ��
		{
			cout<<"��������Ҫɾ������ϵ��������"; 
			cin>>s;
			tmp=&car;//ָ��ָ���ֻ���ͨѶ������
			tmp->delete1(s);//�����ֻ���ͨѶ¼����
			break;
		}else if(x==3)//������ͨѶ¼ɾ����ϵ��
		{
			cout<<"��������Ҫɾ������ϵ��������"; 
			cin>>s;
			tmp=&pho;//ָ��ָ���ֻ�ͨѶ������ 
			tmp->delete1(s);//�����ֻ�ͨѶ¼����
			tmp=&car;//ָ��ָ���ֻ���ͨѶ������
			tmp->delete1(s);//�����ֻ���ͨѶ¼����
			break;	
		}else if(x==0)
			return;
		else
		{
			cout<<"����������������룡"<<endl;
			system("pause");//��ͣ 
			system("cls");//���� 
			fflush(stdin);//�������
		}
	}
	if(cnt==0)
		cout<<"���Ѷ��������������޷�����"<<endl;
} 

void users::modify(){//�޸���ϵ�� 
	int cnt=3;
	while(cnt)
	{
		address_book *tmp;//ͨѶ¼����ָ��
		int x;
		u.modifymenu();//�޸Ĳ˵� 
		string s;
		cin>>x;
		cnt--;
		if(x==1)//���ֻ�ͨѶ¼�޸���ϵ��
		{
			cout<<"��������Ҫ�޸ĵ���ϵ��������"; 
			cin>>s;
			tmp=&pho;//ָ��ָ���ֻ�ͨѶ������
			tmp->modify(s);//�����ֻ�ͨѶ¼����  
			break;
		}else if(x==2)//���ֻ���ͨѶ¼�޸���ϵ��
		{
			cout<<"��������Ҫ�޸ĵ���ϵ��������"; 
			cin>>s;
			tmp=&car;//ָ��ָ���ֻ���ͨѶ������
			tmp->modify(s);//�����ֻ���ͨѶ¼����
			break;
		}else if(x==3)//������ͨѶ¼�޸���ϵ��
		{
			cout<<"��������Ҫ�޸ĵ���ϵ��������"; 
			cin>>s;
			tmp=&pho;//ָ��ָ���ֻ�ͨѶ������
			tmp->modify(s);//�����ֻ�ͨѶ¼����  
			tmp=&car;//ָ��ָ���ֻ���ͨѶ������
			tmp->modify(s);//�����ֻ���ͨѶ¼����
			break;	
		}else if(x==0)
			return;
		else
		{
			cout<<"����������������룡"<<endl;
			system("pause");//��ͣ 
			system("cls");//���� 
			fflush(stdin);//�������
		}
	}
	if(cnt==0)
		cout<<"���Ѷ��������������޷�����"<<endl;
} 

void users::find(){//������ϵ�� 
	int cnt=3;
	while(cnt)
	{
		address_book *tmp;//ͨѶ¼����ָ��
		int x;
		u.findmenu();//�޸Ĳ˵� 
		string s;
		cin>>x;
		cnt--;
		if(x==1)//���ֻ�ͨѶ¼������ϵ��
		{
			cout<<"��������Ҫ��ѯ����ϵ��������"; 
			cin>>s;
			tmp=&pho;//ָ��ָ���ֻ�ͨѶ������
			tmp->find(s);//�����ֻ�ͨѶ¼���� 
			break;
		}else if(x==2)//���ֻ���ͨѶ¼������ϵ��
		{
			cout<<"��������Ҫ��ѯ����ϵ��������"; 
			cin>>s;
			tmp=&car;//ָ��ָ���ֻ���ͨѶ������
			tmp->find(s);//�����ֻ���ͨѶ¼����
			break;
		}else if(x==3)//������ͨѶ¼������ϵ��
		{
			cout<<"��������Ҫ��ѯ����ϵ��������"; 
			cin>>s;
			tmp=&pho;//ָ��ָ���ֻ�ͨѶ������
			tmp->find(s);//�����ֻ�ͨѶ¼����
			tmp=&car;//ָ��ָ���ֻ���ͨѶ������
			tmp->find(s);//�����ֻ���ͨѶ¼����
			break;	
		}else if(x==0)
			return;
		else
		{
			cout<<"����������������룡"<<endl;
			system("pause");//��ͣ 
			system("cls");//���� 
			fflush(stdin);//�������
		}
	}
	if(cnt==0)
		cout<<"���Ѷ��������������޷�����"<<endl;
} 

void users::display(){//��ʾ��ϵ��
	int cnt=3;
	while(cnt)
	{
		address_book *tmp;//ͨѶ¼����ָ��
		u.displaymenu();//��ʾ�˵� 
		int x;
		cin>>x;
		cnt--;
		if(x==1)//��ʾ�ֻ�ͨѶ¼������ϵ��
		{
			printf("\t|\t\t  �ֻ�ͨѶ¼               |\t\n");
			tmp=&pho;//ָ��ָ���ֻ�ͨѶ������
			tmp->display();//�����ֻ�ͨѶ¼���� 
			break;
		}else if(x==2)//��ʾ�ֻ���ͨѶ¼������ϵ��
		{
			printf("\t|\t\t  �ֻ���ͨѶ¼             |\t\n");
			tmp=&car;//ָ��ָ���ֻ���ͨѶ������
			tmp->display();//�����ֻ���ͨѶ¼����
			break;
		}else if(x==3)//��ʾ����ͨѶ¼������ϵ��
		{
			printf("\t|\t\t  �ֻ�ͨѶ¼               |\t\n");
			tmp=&pho;//ָ��ָ���ֻ�ͨѶ������
			tmp->display();//�����ֻ�ͨѶ¼���� 
			printf("\t|\t\t  �ֻ���ͨѶ¼             |\t\n");
			tmp=&car;//ָ��ָ���ֻ���ͨѶ������
			tmp->display();//�����ֻ���ͨѶ¼����
			break;	
		}else if(x==0)
			return;
		else
		{
			cout<<"����������������룡"<<endl;
			system("pause");//��ͣ 
			system("cls");//���� 
			fflush(stdin);//�������
		}
	}
	if(cnt==0)
		cout<<"���Ѷ��������������޷�����"<<endl;
} 

void users::move_card_to_phone(){//���ֻ����еĴ洢����ϵ�˵���Ϣ�ƶ����ֻ���
	if(car.getnum_phone_card()<0)//�ֻ���ͨѶ¼����ϵ�� 
	{
		cout<<"�ֻ���ͨѶ¼������ϵ��"<<endl; 
		return;
	}
	for(int i=0;i<=car.getnum_phone_card();i++)
	{
		if(pho.getnum_phone_card()>=1000)//�ֻ�ͨѶ¼��ϵ������ 
		{
			cout<<"�ֻ�ͨѶ¼�ڴ�����"<<endl;  
			return;
		}
		pho.copy(car.get_name(i),car.get_telephone(i));//����ϵ�������������������
		car.clear();//����ֻ���ͨѶ¼�е���ϵ����Ϣ
		cout<<"�ƶ��ɹ�"<<endl;
	 } 
}

void users::move_phone_to_card(){//���ֻ��д洢����ϵ�˵���Ϣ�ƶ����ֻ�����
	if(pho.getnum_phone_card()<0)//�ֻ�ͨѶ¼����ϵ��
	{
		cout<<"�ֻ�ͨѶ¼������ϵ��"<<endl; 
		return;
	}
	for(int i=0;i<=pho.getnum_phone_card();i++)
	{
		if(car.getnum_phone_card()>=1000)//�ֻ���ͨѶ¼��ϵ������
		{
			cout<<"�ֻ���ͨѶ¼�ڴ�����"<<endl;  
			return;
		}
		car.copy(pho.get_name(i),pho.get_telephone(i));//����ϵ�������������������
		pho.clear();//����ֻ�ͨѶ¼�е���ϵ����Ϣ
		cout<<"�ƶ��ɹ�"<<endl;
	 } 
}

void users::copy_card_to_phone(){//���ֻ����еĴ洢����ϵ�˵���Ϣ���Ƶ��ֻ���
	if(car.getnum_phone_card()<0)//�ֻ���ͨѶ¼����ϵ��
	{
		cout<<"�ֻ���ͨѶ¼������ϵ��"<<endl; 
		return;
	}
	for(int i=0;i<=car.getnum_phone_card();i++)
	{
		if(pho.getnum_phone_card()>=1000)//�ֻ�ͨѶ¼��ϵ������
		{
			cout<<"�ֻ�ͨѶ¼�ڴ�����"<<endl;  
			return;
		}
		pho.copy(car.get_name(i),car.get_telephone(i));//����ϵ�������������������
		car.clear();//����ֻ���ͨѶ¼�е���ϵ����Ϣ
		cout<<"���Ƴɹ�"<<endl;
	 } 
}

void users::copy_phone_to_card(){//���ֻ��д洢����ϵ�˵���Ϣ���Ƶ��ֻ�����
	if(pho.getnum_phone_card()<0)//�ֻ���ͨѶ¼����ϵ��
	{
		cout<<"�ֻ�ͨѶ¼������ϵ��"<<endl; 
		return;
	}
	for(int i=0;i<=pho.getnum_phone_card();i++)
	{
		if(car.getnum_phone_card()>=1000)//�ֻ���ͨѶ¼��ϵ������
		{
			cout<<"�ֻ���ͨѶ¼�ڴ�����"<<endl;  
			return;
		}
		car.copy(pho.get_name(i),pho.get_telephone(i));//����ϵ�������������������
		pho.clear();//����ֻ���ͨѶ¼�е���ϵ����Ϣ
		cout<<"���Ƴɹ�"<<endl;
	 } 
}
