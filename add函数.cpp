
#include"Commodity��.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//���������Ʒ��Ϣ�ĳ�Ա����
void Commodity_p::add()
{
	system("cls");
	string type, name;
	int code, number;
	double buy, sell;
	cout << "\n\n\t\t\t\t\t\t\t<<========���========>>\n" << endl;
	int h;
	while (1)
	{
		cout << "\t\t\t\t\t\t\t   ===============" << endl;
		cout << "\t\t\t\t\t\t\t    ��Ʒ�����ͣ�" << endl;
		cout << "\t\t\t\t\t\t\t    1.�ֻ�" << endl;
		cout << "\t\t\t\t\t\t\t    2.��ģ" << endl;
		cout << "\t\t\t\t\t\t\t    3.��ʳ" << endl;
		cout << "\t\t\t\t\t\t\t    4.��ױ" << endl;
		cout << "\t\t\t\t\t\t\t    5.Ůװ" << endl;
		cout << "\t\t\t\t\t\t\t    6.��װ" << endl;
		cout << "\t\t\t\t\t\t\t   ===============" << endl;
		cout << "\t\t\t\t\t\t\t    ��ѡ��"; cin >> h;
		if (0 < h && h < 7) break;
		else cout << "\t\t\t\t\t\t\t  �������" << endl;
	}
	switch (h)
	{
	case 1:type = "�ֻ�"; break;
	case 2:type = "��ģ"; break;
	case 3:type = "��ʳ"; break;
	case 4:type = "��ױ"; break;
	case 5:type = "Ůװ"; break;
	case 6:type = "��װ"; break;
	}

	cout << "\t\t\t\t\t\t\t ��Ʒ���ƣ�"; getchar(); getline(cin, name);

	while (1)
	{
		cout << "\t\t\t\t\t\t\t ��Ʒ��ţ�"; cin >> code;
		if (code > 0)break;
	}
	
	while (1)
	{
		cout << "\t\t\t\t\t\t\t �����ۣ�"; cin >> buy;
		if (buy > 0)break;
		else cout << "\t\t\t\t\t\t\t�������" << endl;
	}
	
	while (1)
	{
		cout << "\t\t\t\t\t\t\t �ۼۣ�"; cin >> sell;
		if (sell > 0)break;
		else cout << "\t\t\t\t\t\t\t �������" << endl;
	}
	while (1)
	{
		cout << "\t\t\t\t\t\t\t ��Ʒ��������"; cin >> number;
		if (sell > 0) break;
		else cout << " \t\t\t\t\t\t\t�������" << endl;
	}
	Commodity* t = new Commodity(type, name, code, buy, sell, number);    //��֪ʶ��9��29��
	Commodity* p = first;

	//�жϸ���Ʒ�Ƿ��Ѿ�����
	while (p)
	{
		if ((p->product_name== t->product_name) && (p->product_code== t->product_code))
		{
			//cout << "ѧ����" << p->ID << "��" << p->name << "ͬѧ����Ϣ��¼�룡" << endl;
			cout <<"\t\t\t\t\t\t\t"<< p->product_name << "����Ϣ��¼��" << endl;
			return;
		}
		p = p->next;
	}

	//����Ʒ��Ϣ�����ļ�
	ofstream outfile("����.dat", ios::app);
	outfile << t->product_type << " " << t->product_name << " " << t->product_code << " "
		<< t->buy_price << " " << t->sell_price << " " << t->product_number << " "
		<< t->comment << " " << t->sales_volume << " " << t->search_volume << " "
		<< t->S_T << " " << t->G_T << " " << t->shopping_car 
		<< " " << t->shopping << " " << t->order_number << " " << t->order_number_1 << endl;
	
	outfile.close();

	//��������
	if (first == NULL)
	{
		first = last = t;
		cout << "\n\t\t\t\t\t\t\t  ��ӳɹ�" << endl;
	}
	else
	{
		last->next = t;
		last = last->next;
		cout << "\n\t\t\t\t\t\t\t  ��ӳɹ�" << endl;
	}

}
