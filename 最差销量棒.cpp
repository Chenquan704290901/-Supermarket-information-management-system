#include"Commodity��.h"
#include<iomanip>

//��������������ĳ�Ա����
void Commodity_p::worst_sell()
{
	system("cls");
	Commodity* t = first;
	Commodity* p = first;
	
	while (p->next)
	{
		t = first;
		while (t->next)
		{
			double dou1 = t->next->product_number - t->next->sales_volume/
				double(t->next->product_number);
			double dou2 = t->product_number - t->sales_volume/
				double(t->product_number);
			
			if (dou1 < dou2)
			{
				t->swap();
			}
			t = t->next;
		}
		p = p->next;
	}
	cout << "\t\t\t\t\t\t\t  <<<------��������------>>>" << endl;
	cout << "\t\t\t\t\t\t\t  ============================" << endl;
	cout << "\t\t\t\t\t\t\t  ���  " << "       ����" << "  ������ " << endl;
	cout << "\t\t\t\t\t\t\t  ============================" << endl;
	t = first;
	int i = 1;
	while (t)
	{
		
		double gg=t->product_number - t->sales_volume /
			double(t->product_number);
		if (gg<0.6)
		{
			cout << setiosflags(ios::fixed) << resetiosflags(ios::left) << setprecision(1);
			cout << "\t\t\t\t\t\t\t  " << setw(3) << i << "  " << setw(15) << t->product_name << "      "
				<< gg << endl;
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