#include"Commodity��.h"
void user_menu()
{
	int i=0;
	Commodity_p p;
	while (1)
	{
		cout << endl << endl;
		cout << "\t\t\t***********************************************" << endl;
		cout << "\t\t\t**                                           **" << endl;
		cout << "\t\t\t**       ��̶������Ʒ����ϵͳ���˵�          **" << endl;
		cout << "\t\t\t**                                           **" << endl;
		cout << "\t\t\t**           1.  �Ƽ�                        **" << endl;
		cout << "\t\t\t**           2.  ����                        **" << endl;
		cout << "\t\t\t**           3.  ���Ѱ�                      **" << endl;
		cout << "\t\t\t**           4.  �˳�                        **" << endl;
		cout << "\t\t\t**                                           **" << endl;
		cout << "\t\t\t***********************************************" << endl;

		if (0 < i && i < 5) break;
		else cout << "�����������²���" << endl;
	}
	switch (i)
	{
	case 1:p.recommend(); break;
	case 2:p.user_search(); break;
	case 3:p.hot_search_list(); break;
	case 4:exit(1); break;
	}
}