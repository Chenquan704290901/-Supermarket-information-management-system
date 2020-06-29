#include"Commodity类.h"
void user_menu()
{
	int i=0;
	Commodity_p p;
	while (1)
	{
		cout << endl << endl;
		cout << "\t\t\t***********************************************" << endl;
		cout << "\t\t\t**                                           **" << endl;
		cout << "\t\t\t**       王潭超市商品管理系统主菜单          **" << endl;
		cout << "\t\t\t**                                           **" << endl;
		cout << "\t\t\t**           1.  推荐                        **" << endl;
		cout << "\t\t\t**           2.  搜索                        **" << endl;
		cout << "\t\t\t**           3.  热搜棒                      **" << endl;
		cout << "\t\t\t**           4.  退出                        **" << endl;
		cout << "\t\t\t**                                           **" << endl;
		cout << "\t\t\t***********************************************" << endl;

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