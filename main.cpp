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
	users user;//创建用户对象
	Uimenu uimenu;//创建菜单对象
	int m=1;
	while(m)
	{
		system("pause");//暂停 
		system("cls");//清屏 
		fflush(stdin);//清除缓冲
		uimenu.mainmenu();//显示主菜单
		cin>>m;
		system("pause");//暂停 
		system("cls");//清屏 
		fflush(stdin);//清除缓冲
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
					cout<<"输入错误请重新输入.\n";
					system("pause");//暂停 
					system("cls");//清屏 
					fflush(stdin);//清除缓冲
					continue; 
				 } 
			}
			if(cnt==0)
			{
				cout<<"现已输入错误多次，无法再次输入"<<endl; 
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
					cout<<"输入错误请重新输入.\n";
					system("pause");//暂停 
					system("cls");//清屏 
					fflush(stdin);//清除缓冲
					continue; 
				 } 
			}
			if(cnt==0)
			{
				cout<<"现已输入错误多次，无法再次输入"<<endl; 
			}
		}else
		{
			exit(0);
		}
	} 
	return 0;
}
