#include"Commodity��.h"
#include<iomanip>

//����Ԥ������ĳ�Ա���� 
void Commodity_p::forecast_demand()
{
	system("color F4");
	system("cls");
	Commodity* t = first;
	Commodity* p = first;
	while (p->next)
	{
		t = first;
		while (t->next)
		{
			if (t->next->search_volume+ 2*t->next->shopping >
				t->search_volume+t->shopping)
			{
				t->swap();
			}
			t = t->next;
		}
		p = p->next;
	}
	cout << "\n\t\t\t\t\t\t\t  <<<------Ԥ�������------>>>" << endl;
	cout << "\t\t\t\t\t\t\t  ============================" << endl;
	cout << "\t\t\t\t\t\t\t  ���  " << "       ����" << "  Ԥ�������� " << endl;
	cout << "\t\t\t\t\t\t\t  ============================" << endl;
	t = first;
	int i = 1;
	while (t)
	{
		if(int(t->search_volume * 0.3 + t->shopping * 0.6) >0)
		{
			cout << setiosflags(ios::fixed) << resetiosflags(ios::left) << setprecision(1);
			cout <<"\t\t\t\t\t\t\t  " << setw(3) << i << "  " << setw(15) << t->product_name << "      "
				<< int(t->search_volume * 0.3 + t->shopping * 0.6) << endl;
			cout << "\t\t\t\t\t\t\t  ---------------------------" << endl;
		}
		

		if (t->next == NULL)
		{
			int h;
			while (1)
			{
				cout << "\t\t\t\t\t\t\t   ********�����˵�********" << endl;
				cout << "\t\t\t\t\t\t\t   *                      *" << endl;
				cout << "\t\t\t\t\t\t\t   *   1--�������˵�      *" << endl;
				cout << "\t\t\t\t\t\t\t   *   2--�˳�ϵͳ.  ��   *\n";
				cout << "\t\t\t\t\t\t\t   *                      *" << endl;
				cout << "\t\t\t\t\t\t\t   ************************" << endl;
				cout << "\t\t\t\t\t\t\t     "; cin >> h;
				if (h == 1 || h == 2) break;
				else cout << "\t\t\t\t\t\t\t  �����������²���" << endl;
			}
			if (h == 1) break;
			else exit(1);
		}
		t = t->next;
		i++;
	}
}