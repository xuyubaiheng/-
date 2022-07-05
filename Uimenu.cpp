#include "Uimenu.h"
void Uimenu::mainmenu(){//主菜单
	printf("\n\n");
	printf("\t+---------------------------------------------------------------+\n");
	printf("\t|                                                   \t\t|\n");
	printf("\t|\t\t欢迎使用通讯录管理系统              \t\t|\t\n");
	printf("\t|\t\t请选择您要进行的操作                \t\t|\t\n");
	printf("\t|\t\t1.新建联系人                        \t\t|\t\n");
	printf("\t|\t\t2.删除联系人                        \t\t|\t\n");
	printf("\t|\t\t3.查询联系人                        \t\t|\t\n");
	printf("\t|\t\t4.修改联系人信息                    \t\t|\t\n");
	printf("\t|\t\t5.查看所有联系人信息                \t\t|\t\n");
	printf("\t|\t\t6.将手机上联系人的信息转存到手机卡上\t\t|\t\n");
	printf("\t|\t\t7.将手机卡上联系人的信息转存到手机上\t\t|\t\n");
	printf("\t|\t\t0.退出系统                          \t\t|\t\n");
	printf("\t|                                                   \t\t|\n");
	printf("\t+--------------------------------------------------------------+\n");
	printf("\n\n");
    printf("\t请选择功能选项(输入0-7之间的数字):\n");
}

void Uimenu::addmenu(){//添加联系人菜单
	printf("\n\n");
	printf("\t+---------------------------------------------------+\n");
	printf("\t|                                                   |\n");
	printf("\t|\t\t1.在手机上新建联系人                |\t\n");
	printf("\t|\t\t2.在手机卡上新建联系人              |\t\n");
	printf("\t|\t\t0.退出                              |\t\n");
	printf("\t|                                                   |\n");
	printf("\t+---------------------------------------------------+\n");
	printf("\n\n");
    printf("\t请选择功能选项(输入0-2之间的数字):\n");
} 

void Uimenu::deletemenu(){//删除联系人菜单
	printf("\n\n");
	printf("\t+---------------------------------------------------+\n");
	printf("\t|                                                   |\n");
	printf("\t|\t\t1.在手机上删除联系人                |\t\n");
	printf("\t|\t\t2.在手机卡上删除联系人              |\t\n");
	printf("\t|\t\t3.在两个通讯录删除联系人            |\t\n");
	printf("\t|\t\t0.退出                              |\t\n");
	printf("\t|                                                   |\n");
	printf("\t+---------------------------------------------------+\n");
	printf("\n\n");
    printf("\t请选择功能选项(输入0-2之间的数字):\n");
} 

void Uimenu::modifymenu(){//修改联系人菜单
	printf("\n\n");
	printf("\t+---------------------------------------------------+\n");
	printf("\t|                                                   |\n");
	printf("\t|\t\t1.在手机上修改联系人                |\t\n");
	printf("\t|\t\t2.在手机卡上修改联系人              |\t\n");
	printf("\t|\t\t3.在两个通讯录修改联系人            |\t\n");
	printf("\t|\t\t0.退出                              |\t\n");
	printf("\t|                                                   |\n");
	printf("\t+---------------------------------------------------+\n");
	printf("\n\n");
    printf("\t请选择功能选项(输入0-2之间的数字):\n");
} 

void Uimenu::modify_phone(){//修改手机联系人菜单
	printf("\n\n");
	printf("\t+---------------------------------------------------+\n");
	printf("\t|                                                   |\n");
	printf("\t|\t\t1.修改联系人姓名和号码              |\t\n");
	printf("\t|\t\t2.修改联系人姓名                    |\t\n");
	printf("\t|\t\t3.修改联系人号码                    |\t\n");
	printf("\t|\t\t0.退出                              |\t\n");
	printf("\t|                                                   |\n");
	printf("\t+---------------------------------------------------+\n");
	printf("\n\n");
    printf("\t请选择功能选项(输入0-2之间的数字):\n");
} 

void Uimenu::modify_card(){//修改手机卡联系人菜单
	printf("\n\n");
	printf("\t+---------------------------------------------------+\n");
	printf("\t|                                                   |\n");
	printf("\t|\t\t1.修改联系人全部信息                |\t\n");
	printf("\t|\t\t2.修改联系人姓名                    |\t\n");
	printf("\t|\t\t3.修改联系人号码                    |\t\n");
	printf("\t|\t\t4.修改联系人QQ号                    |\t\n");
	printf("\t|\t\t5.修改联系人籍贯                    |\t\n");
	printf("\t|\t\t0.退出                              |\t\n");
	printf("\t|                                                   |\n");
	printf("\t+---------------------------------------------------+\n");
	printf("\n\n");
    printf("\t请选择功能选项(输入0-5之间的数字):\n");
} 

void Uimenu::findmenu(){//查找联系人菜单
	printf("\n\n");
	printf("\t+---------------------------------------------------+\n");
	printf("\t|                                                   |\n");
	printf("\t|\t\t1.在手机上查找联系人                |\t\n");
	printf("\t|\t\t2.在手机卡上查找联系人              |\t\n");
	printf("\t|\t\t3.在两个通讯录查找联系人            |\t\n");
	printf("\t|\t\t0.退出                              |\t\n");
	printf("\t|                                                   |\n");
	printf("\t+---------------------------------------------------+\n");
	printf("\n\n");
    printf("\t请选择功能选项(输入0-2之间的数字):\n");
} 

void Uimenu::displaymenu(){//显示联系人菜单
	printf("\n\n");
	printf("\t+---------------------------------------------------+\n");
	printf("\t|                                                   |\n");
	printf("\t|\t\t1.显示手机通讯录所有联系人          |\t\n");
	printf("\t|\t\t2.显示手机卡通讯录所有联系人        |\t\n");
	printf("\t|\t\t3.显示两个通讯录所有联系人          |\t\n");
	printf("\t|\t\t0.退出                              |\t\n");
	printf("\t|                                                   |\n");
	printf("\t+---------------------------------------------------+\n");
	printf("\n\n");
    printf("\t请选择功能选项(输入0-2之间的数字):\n");
} 

void Uimenu::copymovemenu(){//复制移动联系人菜单
	printf("\n\n");
	printf("\t+---------------------------------------------------+\n");
	printf("\t|                                                   |\n");
	printf("\t|\t\t               1.复制               |\t\n");
	printf("\t|\t\t               2.移动               |\t\n");
	printf("\t|\t\t               0.退出               |\t\n");
	printf("\t|                                                   |\n");
	printf("\t+---------------------------------------------------+\n");
	printf("\n\n");
    printf("\t请选择功能选项(输入0-2之间的数字):\n");
} 
