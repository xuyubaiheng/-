#ifndef CARD_ADRESS_H
#define CARD_ADRESS_H
 
#include <vector>
#include "phone_people.h"
#include "address_book.h"
class card_adress:public address_book{
	protected:
		int cnt;//�ֻ���ϵ�˵�����
		vector<phone_people> v;//�ֻ���ϵ�˶�������
	public:
		card_adress();//���캯��,��ȡ�ı��ļ��е�����,�������ļ����ݴ�����ϵ�˶�������
		~card_adress();//��������,�����������е�����д�뵽�ı��ļ���
		void add();//������ϵ��
		void delete1(string name1);//ɾ����ϵ��
		void display();//��ʾ������ϵ����Ϣ
		void modify(string name1);//�޸���ϵ��
		void find(string name1);//��ѯ��ϵ�˲���ʾ 
		int getnum_phone_card();//��ȡ�ֻ���ͨѶ¼��ϵ������ 
		void copy(string name1,string num1);//����ϵ�������������������
		string get_name(int x);//��ȡ�����е�x����ϵ�˵�����
		string get_telephone(int x);//��ȡ�����е�x����ϵ�˵ĵ绰����
		void clear();//����ֻ���ͨѶ¼�е���ϵ����Ϣ 
};

#endif
