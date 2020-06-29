#pragma once
#include<iostream>
#include<string>
using namespace std;
 
//����һ����Ʒ��
class Commodity
{
	friend class Commoduty_p;                       //����һ����Ԫ��
public:
	Commodity() {}
	Commodity(string, string, int, double, double,int, double = 0, 
		int = 0, int = 0,double =0,double =0,string ="0",int =0, int =0,string="0");  //����һ�����캯��
	void swap();//��������ʱ�õĽ�������(д�ڹ��캯��.cpp��)
	 

//protected:
	string product_type;   //��Ʒ����
	string product_name;   //��Ʒ����
	int product_code;      //��Ʒ���
	double buy_price;      //������
	double sell_price;     //�ۼ�
	int product_number;  //��������
	double comment;       //������
	int sales_volume;     //������
	int search_volume;    //������
	double S_T;          //�����Ƽ�ָ��
	double G_T;          //�����Ƽ�ָ��
	string shopping_car;  //���ﳵ
	int shopping;         //���ﳵĳ����Ʒ����
	int order_number;     //����
	string order_number_1; //ѡ����Ʒ
	Commodity* next;
	
	
};

//������Ԫ��
class Commodity_p
{
public:
	Commodity_p();
	void add();                //���������Ʒ��Ϣ�ĳ�Ա����
	void del();                //����ɾ����Ʒ��Ϣ�ĳ�Ա����
	void revise();             //�����޸���Ʒ��Ϣ�ĳ�Ա����
	void input_list();         //�������ļ���������ĳ�Ա����
	void user_search();        //�����û�������Ʒ��Ϣ�ĳ�Ա����
	void recommend();          //���������Ƽ���Ʒ�ĳ�Ա����
	void inventory();          //�����������ĳ�Ա����
	void hot_search_list();     //�������Ѱ���Ա����
	void best_selling_list();     //����������ĳ�Ա����
	void forecast_demand();     //����Ԥ������ĳ�Ա����  
	void worst_sell();         //��������������ĳ�Ա����
	void money();              //����Ӫ������ĳ�Ա����
protected:
	Commodity* first;          //����һ��ָ������ָ��
	Commodity* last;          //����һ��ָ������ָ��

};


