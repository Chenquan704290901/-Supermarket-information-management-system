#include"Commodity类.h"
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

//定义Commodity类的构造函数
Commodity::Commodity(string type, string name, int code, 
	double buy, double sell, int num,double co,int sa,
	int se,double S,double G,string sh,int shop, int od,string ord)
{
	product_type = type;
	product_name = name;
	product_code = code;
	buy_price = buy;
	sell_price = sell;
	product_number = num;
	comment = co;
	sales_volume = sa;
	search_volume = se;
	G_T = G;
	S_T = S;
	shopping_car = sh;
	shopping = shop;
	order_number = od ;
	order_number_1 = ord;
}

//定义Commodity_p类的构造函数
Commodity_p::Commodity_p()
{
	first = NULL;
	last = NULL;
}

//定义排序时用的交换函数
void Commodity::swap()
{
	string type, name,shop,ord;
	int code, number, sale, search, shopp, order;
	double buy, sell, comme, S, G;

	//数据交换
	type = product_type; product_type = next->product_type; next->product_type = type;
	name = product_name; product_name = next->product_name; next->product_name = name;
	code = product_code; product_code = next->product_code; next->product_code = code;
	number = product_number; product_number = next->product_number; next->product_number = number;
	sale = sales_volume; sales_volume = next->sales_volume; next->sales_volume = sale;
	search = search_volume; search_volume = next->search_volume; next->search_volume = search;
	buy = buy_price; buy_price = next->buy_price; next->buy_price = buy;
	sell = sell_price; sell_price = next->sell_price; next->sell_price = sell;
	comme = comment; comment = next->comment; next->comment = comme;
	S = S_T; S_T = next->S_T; next->S_T = S;
	G = G_T; G_T = next->G_T; next->G_T = G;
	shop = shopping_car; shopping_car = next->shopping_car; next->shopping_car = shop;
	shopp = shopping; shopping = next->shopping; next->shopping = shopp;
	order = order_number; order_number = next->order_number; next->order_number = order;
	ord = order_number_1; order_number_1 = next->order_number_1; next->order_number_1 = ord;
}
