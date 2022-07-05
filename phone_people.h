#ifndef PHONE_PEOPLE_H
#define PHONE_PEOPLE_H
#include "phone_card.h"
#include <iostream>
#include <fstream> 
using namespace std;
class phone_people:public phone_card{//�̳��ࣺ�ֻ���ϵ���� 
	private:
		string qq;//QQ�� 
		string native_place;//���� 
	public:
		phone_people(string name1="����ϵ��",string phone="�º���",string qq1="qq��",string place="��ַ");// 
		void set(string name1,string phone,string qq1,string place);//��ֵ���� 
		void modify();//�޸ĺ��� 
		string get_qq();//��ȡQQ�� 
		string get_native_place();//��ȡ���� 
		friend ostream& operator<<(ostream& os, const phone_people &p);//����<<����� 
		friend istream& operator>>(istream& is, phone_people &p);//����>>����� 
};

#endif
