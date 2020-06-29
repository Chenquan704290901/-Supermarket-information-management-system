#pragma once
#include<iostream>
#include<string>
using namespace std;
 
//声明一个商品类
class Commodity
{
	friend class Commoduty_p;                       //声明一个友元类
public:
	Commodity() {}
	Commodity(string, string, int, double, double,int, double = 0, 
		int = 0, int = 0,double =0,double =0,string ="0",int =0, int =0,string="0");  //声明一个构造函数
	void swap();//声明排序时用的交换函数(写在构造函数.cpp内)
	 

//protected:
	string product_type;   //商品类型
	string product_name;   //商品名称
	int product_code;      //商品编号
	double buy_price;      //进货价
	double sell_price;     //售价
	int product_number;  //进货数量
	double comment;       //好评量
	int sales_volume;     //销售量
	int search_volume;    //搜索量
	double S_T;          //搜索推荐指数
	double G_T;          //个性推荐指数
	string shopping_car;  //购物车
	int shopping;         //购物车某件商品数量
	int order_number;     //排序
	string order_number_1; //选择商品
	Commodity* next;
	
	
};

//声明友元类
class Commodity_p
{
public:
	Commodity_p();
	void add();                //声明添加商品信息的成员函数
	void del();                //声明删除商品信息的成员函数
	void revise();             //声明修改商品信息的成员函数
	void input_list();         //声明从文件到到链表的成员函数
	void user_search();        //声明用户搜索商品信息的成员函数
	void recommend();          //声明个性推荐商品的成员函数
	void inventory();          //声明库存情况的成员函数
	void hot_search_list();     //声明热搜棒成员函数
	void best_selling_list();     //声明畅销榜的成员函数
	void forecast_demand();     //声明预测需求的成员函数  
	void worst_sell();         //声明最差销量棒的成员函数
	void money();              //声明营收情况的成员函数
protected:
	Commodity* first;          //定义一个指向对象的指针
	Commodity* last;          //定义一个指向对象的指针

};


