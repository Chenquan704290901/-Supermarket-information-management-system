#include"Commodity类.h"
#include<iomanip>

//声明最差销量棒的成员函数
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
	cout << "\t\t\t\t\t\t\t  <<<------销量最差棒------>>>" << endl;
	cout << "\t\t\t\t\t\t\t  ============================" << endl;
	cout << "\t\t\t\t\t\t\t  序号  " << "       名称" << "  销售率 " << endl;
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
				cout << "\t\t\t\t\t\t\t   ********操作菜单********" << endl;
				cout << "\t\t\t\t\t\t\t   *                      *" << endl;
				cout << "\t\t\t\t\t\t\t   *   1--返回主菜单      *" << endl;
				cout << "\t\t\t\t\t\t\t   *   2--退出系统.  按   *\n";
				cout << "\t\t\t\t\t\t\t   *                      *" << endl;
				cout << "\t\t\t\t\t\t\t   ************************" << endl;
				cout << "\t\t\t\t\t\t\t     "; cin >> h;
				if (h == 1 || h == 2) break;
				else cout << "\t\t\t\t\t\t\t  操作错误！重新操作" << endl;
			}
			if (h == 1) break;
			else exit(1);
		}
		t = t->next;
		i++;
	}
}