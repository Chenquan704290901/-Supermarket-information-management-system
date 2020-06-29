#include"Commodity类.h"

//声明营收情况的成员函数
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
	cout << "\t\t\t\t\t\t\t  <<<--------营收情况------>>>" << endl;
	cout << "\t\t\t\t\t\t\t  ============================" << endl;
	cout << "\t\t\t\t\t\t\t    预测营业额：" << Money1 << "元" << endl;
	cout << "\t\t\t\t\t\t\t    预测利润：" << Money1 - Money2 << "元" << endl;
	cout << "\t\t\t\t\t\t\t  ============================" << endl;
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
	if (h == 2) exit(1);
}