#ifndef USERS_H
#define USERS_H

#include "Uimenu.h"
#include "card_adress.h"
#include "phone_adress.h"
#include "address_book.h"
class users{
		Uimenu u;//�˵����� 
		phone_adress pho;//�ֻ�ͨѶ¼ 
		card_adress car;//�ֻ���ͨѶ¼
	public:
		users();//���캯��
		~users();//��������
		void add();//������ϵ��
		void delete1();//ɾ����ϵ��
		void display();//��ʾ��Ӧ��ͨѶ������ϵ����Ϣ
		void modify();//�޸���ϵ��
		void find();//��ѯ��ϵ�˲���ʾ 
		void move_card_to_phone();//���ֻ����еĴ洢����ϵ�˵���Ϣ�ƶ����ֻ���
		void move_phone_to_card();//���ֻ��д洢����ϵ�˵���Ϣ�ƶ����ֻ�����
		void copy_card_to_phone();//���ֻ����еĴ洢����ϵ�˵���Ϣ���Ƶ��ֻ���
		void copy_phone_to_card();//���ֻ��д洢����ϵ�˵���Ϣ���Ƶ��ֻ�����
};

#endif 
