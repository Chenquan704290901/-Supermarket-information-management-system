#include"Commodity��.h"
#include<iomanip>
#include<cstdio>
#include<fstream>
//�������Ѱ���Ա����
void Commodity_p::hot_search_list()
{
	system("color F4");
	Commodity* t = first;
	Commodity* p = first;
	system("cls");

	while (p->next)
	{
		t = first;
		while (t->next)
		{
			

			if (t->next->search_volume>t->search_volume)
			{
				t->swap();
			}
			t = t->next;
		}
		p = p->next;
	}

	t = first;
	int o = 0;
	while (t)
	{
		t->order_number_1 = to_string(o + 1);
		t = t->next;
		o++;
	}
	
	int e = 0;
	t = first;
	int i = 1;
	int y = 0;
	while (t)
	{
		if (t == first)
		{
			cout << "\t\t\t\t\t\t\t <<<--------���Ѱ�-------->>>\n" << endl;
			cout << "\t\t\t\t\t\t\t ============================" << endl;
			cout << "\t\t\t\t\t\t\t    �ȶ�  " << "       ����" << endl;
			cout << "\t\t\t\t\t\t\t ============================" << endl;
		}
		
		if (t->search_volume>0&&i<=10)
		{
			cout << setiosflags(ios::fixed) << resetiosflags(ios::left) << setprecision(1);
			cout << "\t\t\t\t\t\t\t  " << setw(3) << i << "  " << setw(15) << t->product_name << "      "
				 << endl;
			cout << "\t\t\t\t\t\t\t ----------------------------" << endl;
		}
		string h = "0";
		if (t->next == NULL)
		{
			
			int r = 0;
			while (1)
			{
				cout << "\t\t\t\t\t\t\t    *******�����˵�********" << endl;
				cout << "\t\t\t\t\t\t\t    *                     *" << endl;
				cout << "\t\t\t\t\t\t\t    *    t--�������˵�    *" << endl;
				cout << "\t\t\t\t\t\t\t    *      ����Ź���     *\n";
				cout << "\t\t\t\t\t\t\t    *                     *" << endl;
				cout << "\t\t\t\t\t\t\t    ***********************" << endl;
				cout << " \t\t\t\t\t\t\t          ";
				if (e == 9)
				{
					getchar();
					getline(cin, h);
				}
				else { getchar(); getline(cin, h); }
				if (h == "t" || 0 < atoi(h.c_str()) && atoi(h.c_str()) <= 10)
				{
					if (0 < atoi(h.c_str()) && atoi(h.c_str()) <= 10)
					{
						r = 5;
					}
					break;
				}
				else cout << "\t\t\t\t\t\t\t   �����������²���" << endl;
			}
			if (h == "t") break;
			switch (r)
			{
			case 5: 
			{
				Commodity *u = first;
				while (u)
				{
					if (u->order_number_1 == h)
					{

						while (1)
						{
							cout << "\t\t\t\t\t\t\t    ---------------" << endl;
							cout << "\t\t\t\t\t\t\t      1.����" << endl;
							cout << "\t\t\t\t\t\t\t      2.���빺�ﳵ" << endl;
							cout << "\t\t\t\t\t\t\t    ---------------" << endl;
							cout << " \t\t\t\t\t\t\t     ";
							cin >> y;
							if (y == 1 || y == 2)break;
							else cout << "\n\t\t\t\t\t\t\t   �����������²���" << endl;
						}
						switch (y)
						{
						case 1:u->sales_volume = u->sales_volume + 1; e = 9; cout << "\n\t\t\t\t\t\t\t   �µ��ɹ���" << endl; break;
						case 2:u->shopping = u->shopping + 1; u->shopping_car = u->product_name; e = 9; cout << "\n\t\t\t\t\t\t\t   �ɹ����빺�ﳵ" << endl; break;
						}

					}
					u = u->next;
				}
				break;
			}
		  }
		}
	
		char hh = '0';
	if (y == 1 || y == 2)
	{
		
		while (1)
		{
			cout << "\n\t\t\t\t\t\t\t   �Ƿ񷵻ز˵���y/n��";
			cout << " \t\t\t\t\t\t\t     ";
			getchar(); hh = getchar();
			if (hh == 'y' || hh == 'n') break;
			else cout << "\n\t\t\t\t\t\t\t   �����������²�����" << endl;
		}
		
			
		y = 0;
	}
	if (hh == 'y') break;
	else if(hh=='n')
	{
		system("cls");
		t = first;
		i = 1;
		continue;
	}
	
		t = t->next;
		i++;
	}

	//���޸ĺ����Ʒ��Ϣ�����ļ�
	ofstream outfile("����.dat", ios::out);
	t = first;
	while (t)
	{
		outfile << t->product_type << " " << t->product_name << " " << t->product_code << " "
			<< t->buy_price << " " << t->sell_price << " " << t->product_number << " "
			<< t->comment << " " << t->sales_volume << " " << t->search_volume << " "
			<< t->S_T << " " << t->G_T << " " << t->shopping_car
			<< " " << t->shopping << " " << t->order_number << " " << t->order_number_1 << endl;
		t = t->next;
	}
	outfile.close();
}