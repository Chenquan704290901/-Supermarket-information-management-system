#include"Commodity��.h"

//����Ӫ������ĳ�Ա����
void Commodity_p::money()
{
	Commodity* t = first;
	double Money1 = 0, Money2 = 0;
	while (t)
	{
		Money1 = Money1 + t->sell_price;
		Money2 += t->buy_price;
		t = t->next;
	}
	cout << "\t\t\t\t\t\t\t  <<<--------Ӫ�����------>>>" << endl;
	cout << "\t\t\t\t\t\t\t  ============================" << endl;
	cout << "\t\t\t\t\t\t\t    Ԥ��Ӫҵ�" << Money1 << "Ԫ" << endl;
	cout << "\t\t\t\t\t\t\t    Ԥ������" << Money1 - Money2 << "Ԫ" << endl;
	cout << "\t\t\t\t\t\t\t  ============================" << endl;
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
	if (h == 2) exit(1);
}