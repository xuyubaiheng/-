#include "phone_card.h"
#include "phone_people.h"
#include "Uimenu.h"
#include "phone_adress.h"
#include "address_book.h"
#include "card_adress.h"
#include "users.h"
#include "Uimenu.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	users user;//�����û�����
	Uimenu uimenu;//�����˵�����
	int m=1;
	while(m)
	{
		system("pause");//��ͣ 
		system("cls");//���� 
		fflush(stdin);//�������
		uimenu.mainmenu();//��ʾ���˵�
		cin>>m;
		system("pause");//��ͣ 
		system("cls");//���� 
		fflush(stdin);//�������
		if(m==1)
		{
			user.add();
		}else if(m==2)
		{
			user.delete1();
		}else if(m==3)
		{
			user.find();
		}else if(m==4)
		{
			user.modify();
		}else if(m==5)
		{
			user.display();
		}else if(m==6)
		{
			int cnt=3;
			while(cnt)
			{
				cnt--;
				uimenu.copymovemenu();
				int n;
				cin>>n;
				if(n==1)
				{
					user.copy_phone_to_card();
					break;
				}else if(n==2)
				{
					user.move_phone_to_card();
					break;
				}else if(n==0)
					break;
				else
				{
					cout<<"�����������������.\n";
					system("pause");//��ͣ 
					system("cls");//���� 
					fflush(stdin);//�������
					continue; 
				 } 
			}
			if(cnt==0)
			{
				cout<<"������������Σ��޷��ٴ�����"<<endl; 
			}
		}else if(m==7)
		{
			int cnt=3;
			while(cnt)
			{
				cnt--;
				uimenu.copymovemenu();
				int n;
				cin>>n;
				if(n==1)
				{
					user.copy_card_to_phone();
					break;
				}else if(n==2)
				{
					user.move_card_to_phone();
					break;
				}else if(n==0)
					break;
				else
				{
					cout<<"�����������������.\n";
					system("pause");//��ͣ 
					system("cls");//���� 
					fflush(stdin);//�������
					continue; 
				 } 
			}
			if(cnt==0)
			{
				cout<<"������������Σ��޷��ٴ�����"<<endl; 
			}
		}else
		{
			exit(0);
		}
	} 
	return 0;
}
