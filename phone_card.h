#ifndef PHONE_CARD_H
#define PHONE_CARD_H

#include <iostream>
#include <fstream> 
using namespace std;
class phone_card{//�ֻ�����ϵ���� 
	protected:
		string name;//���� 
		string telephone;//�ֻ��绰 
	public:
		phone_card(string a="����ϵ��",string b="�޺���");//Ĭ���вι��캯�� 
		void set(string a,string x);//��ֵ����
		void modify();//�޸����ݳ�Ա��ֵ
		string get_name();//��ȡ���� 
		string get_telephone();//��ȡ�绰���� 
		friend ostream& operator<<(ostream& os, const phone_card &p);//����<<�����
		friend istream& operator>>(istream& is, phone_card &p);//����>>�����
};

#endif 
 
