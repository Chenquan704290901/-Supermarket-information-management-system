#include"Commodity类.h"
#include<iostream>

using namespace std;
int main()
{
	const int pass = 123456;
	void menu();
	void user_menu_u();
	int z = 0;
	while (1)
	{
		system("color F0");
		cout << endl << endl << endl << endl;
		cout << "\t\t\t\t\t\t\t  ***********************************************" << endl;
		cout << "\t\t\t\t\t\t\t  **                                           **" << endl;
		cout << "\t\t\t\t\t\t\t  **        王谭超市商品管理智能系统           **" << endl;
		cout << "\t\t\t\t\t\t\t  **                                           **" << endl;
		cout << "\t\t\t\t\t\t\t  **            1.  管理员                     **" << endl;
		cout << "\t\t\t\t\t\t\t  **            2.  用户                       **" << endl;
		cout << "\t\t\t\t\t\t\t  **            3.  退出                       **" << endl;
		cout << "\t\t\t\t\t\t\t  **                                           **" << endl;
		cout << "\t\t\t\t\t\t\t  ***********************************************" << endl;
		cout << "\t\t\t\t\t\t\t  请输入操作的序号：";  cin >> z;
		if (z == 1 || z == 2) break;
		else if (z == 3) exit(1);
		else   cout << "\t\t\t\t\t\t\t  操作错误，重新操作" << endl;
	}
	switch (z)
	{
	case 1:
	{
		int d = 0;
		while (1)
		{
			cout << endl;
			cout << "\t\t\t\t\t\t\t  请输出管理员密码："; cin >> d;
			if (d == pass)
			{
				system("cls");
				menu();
				break;
			}
			else cout << "\t\t\t\t\t\t\t  密码错误，请重新输入！" << endl;
		}
		
		break;
	}
	case 2: system("cls"); user_menu_u(); break;
	}
}

void user_menu_u()
{
	Commodity_p p;

	p.input_list();
	while (1)
	{
		int i = 0;
		while (1)
		{
			system("cls");
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t  ***********************************************" << endl;
			cout << "\t\t\t\t\t\t\t  **                                           **" << endl;
			cout << "\t\t\t\t\t\t\t  **       王谭超市商品管理系统主菜单          **" << endl;
			cout << "\t\t\t\t\t\t\t  **                                           **" << endl;
			cout << "\t\t\t\t\t\t\t  **           1.  推荐                        **" << endl;
			cout << "\t\t\t\t\t\t\t  **           2.  搜索                        **" << endl;
			cout << "\t\t\t\t\t\t\t  **           3.  热搜                        **" << endl;
			cout << "\t\t\t\t\t\t\t  **           4.  退出                        **" << endl;
			cout << "\t\t\t\t\t\t\t  **                                           **" << endl;
			cout << "\t\t\t\t\t\t\t  ***********************************************" << endl;
			cout << "                                                                      "; cin >> i;
			
			if (0 < i && i < 5) break;
			else cout << "操作错误，重新操作" << endl;
		}
		switch (i)
		{
		case 1:p.recommend(); break;
		case 2:p.user_search(); break;
		case 3:p.hot_search_list(); break;
		case 4:exit(1); break;
		}
	}
	
}
void menu()
{
	Commodity_p p;
	p.input_list();
	while (1)
	{
		int k = 0;
		while(1){
			
			system("cls");
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t  ***********************************************" << endl;
			cout << "\t\t\t\t\t\t\t  **                                           **" << endl;
			cout << "\t\t\t\t\t\t\t  **       王谭超市商品管理系统主菜单          **" << endl;
			cout << "\t\t\t\t\t\t\t  **                                           **" << endl;
			cout << "\t\t\t\t\t\t\t  **           1.  添加                        **" << endl;
			cout << "\t\t\t\t\t\t\t  **           2.  删除                        **" << endl;
			cout << "\t\t\t\t\t\t\t  **           3.  修改                        **" << endl;
			cout << "\t\t\t\t\t\t\t  **           4.  库存情况                    **" << endl;
			cout << "\t\t\t\t\t\t\t  **           5.  预测需求                    **" << endl;
			cout << "\t\t\t\t\t\t\t  **           6.  畅销榜                      **" << endl;
			cout << "\t\t\t\t\t\t\t  **           7.  最差销量棒                  **" << endl;
			cout << "\t\t\t\t\t\t\t  **           8.  营收情况                    **" << endl;
			cout << "\t\t\t\t\t\t\t  **           9.  退出                        **" << endl;
			cout << "\t\t\t\t\t\t\t  **                                           **" << endl;
			cout << "\t\t\t\t\t\t\t  ***********************************************" << endl;
			cout << "\t\t\t\t\t                                  ";cin >> k;
			if (0 < k && k < 10) break;
			else cout << "操作错误，重新操作" << endl;
		}
		switch (k)
		{
		case 1:
		{
			char q = '0';
			while (1)
		    {
			  p.add();
			  while (1)
			  {
				  cout << "\t\t\t\t\t\t\t是否继续添加（y/n）"; getchar(); q = getchar();
				  if (q == 'y' || q == 'n')break;
				  else cout << "\t\t\t\t\t\t\t操作错误，重新操作！" << endl;
			  }
			  if (q == 'n') break;
		    }
			
			break;
		}
		case 2:
		{
			char q = '0';
			while (1)
			{
				p.del();
				while (1)
				{
					cout << "\t\t\t\t\t\t\t是否继续删除（y/n）"; getchar(); q = getchar();
					if (q == 'y' || q == 'n')break;
					else cout << "\t\t\t\t\t\t\t操作错误，重新操作！" << endl;
				}
				if (q == 'n') break;
			}

			break; 
		}
			 
		case 3:
		{
			char q = '0';
		while (1)
		{
			p.revise();
			while (1)
			{
				cout << "\t\t\t\t\t\t\t是否继续修改（y/n）"; getchar(); q = getchar();
				if (q == 'y' || q == 'n')break;
				else cout << "\t\t\t\t\t\t\t操作错误，重新操作！" << endl;
			}
			if (q == 'n') break;
		}

		break; }
			 break;
		case 4:p.inventory(); break;
		case 5:p.forecast_demand(); break;
		case 6:p.best_selling_list(); break;
		case 7:p.worst_sell(); break;
		case 8:system("cls"); p.money(); break;
		case 9:exit(1); break;
		}
		
	}
}