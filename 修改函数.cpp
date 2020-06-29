#include"Commodity类.h"
#include<fstream>
//using namespace std;

//定义修改商品信息的成员函数
void Commodity_p::revise()
{
    string type;
    int h;
    int d = 0;
    system("cls");
    cout << "\n\n\t\t\t\t\t\t\t<<========修改========>>\n" << endl;
    string str[100];
    while (1)
    {
        cout << "\t\t\t\t\t\t\t   ===============" << endl;
        cout << "\t\t\t\t\t\t\t    商品的类型：" << endl;
        cout << "\t\t\t\t\t\t\t    1.手机" << endl;
        cout << "\t\t\t\t\t\t\t    2.航模" << endl;
        cout << "\t\t\t\t\t\t\t    3.美食" << endl;
        cout << "\t\t\t\t\t\t\t    4.美妆" << endl;
        cout << "\t\t\t\t\t\t\t    5.女装" << endl;
        cout << "\t\t\t\t\t\t\t    6.男装" << endl;
        cout << "\t\t\t\t\t\t\t    7.搜索一下" << endl;
        cout << "\t\t\t\t\t\t\t   ===============" << endl;
        cout << "\t\t\t\t\t\t\t  请选择："; cin >> h;
        if (0 < h && h < 8)  break;
        else cout << "\t\t\t\t\t\t\t  输入错误" << endl;
    }
    Commodity* t = first;
    Commodity* p = NULL;
    if (h == 7)
    {
        while (1)
        {
            cout << "\t\t\t\t\t\t\t  请输入商品名称："; getchar(); getline(cin, str[0]);
            t = first;
            int g = 0;
            while (t)
            {
                if (t->product_name == str[0])
                {
                    g = 1;
                    d = 1;
                    break;
                }
                t = t->next;
            }
            char ch;
            if (g != 1) 
            {
                while (1)
                {
                    cout << "\t\t\t\t\t\t\t  没有此商品,是否还有搜索（y/n）"; ch = getchar();
                    if (ch == 'N' || ch == 'n' || ch == 'y' || ch == 'Y')break;
                    else cout << "\t\t\t\t\t\t\t  操作错误，重新操作！" << endl;
                }
                if (ch == 'N' || ch == 'n') return;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        switch (h)
        {
        case 1:type = "手机"; break;
        case 2:type = "航模"; break;
        case 3:type = "美食"; break;
        case 4:type = "美妆"; break;
        case 5:type = "女装"; break;
        case 6:type = "男装"; break;
        }


        
        cout << "\t\t\t\t\t\t\t  商品的名称：" << endl;

        string str[100];

        while (t)
        {
            if (t->product_type == type)//把该类型的商品打印数量
            {
                cout << "\t\t\t\t\t\t\t   " << d + 1 << "." << t->product_name << endl;
                str[d] = t->product_name;
            }
            t = t->next;
            d++;
        }
        cout << "\t\t\t\t\t\t\t  请选择修改的商品："; cin >> d;
    }
   
    int f;
    while (1)
    {
        cout << "\t\t\t\t\t\t\t  --------------" << endl;
        cout << "\t\t\t\t\t\t\t   1.商品编号" << endl;
        cout << "\t\t\t\t\t\t\t   2.商品进货价" << endl;
        cout << "\t\t\t\t\t\t\t   3.商品售价" << endl;
        cout << "\t\t\t\t\t\t\t   4.商品进货量" << endl;
        cout << "\t\t\t\t\t\t\t  --------------" << endl;
        cout << "\t\t\t\t\t\t\t  请选择需要修改的量："; cin >> f;
        if (0 < f && f < 5) break;
        else
        {
            cout << "\t\t\t\t\t\t\t  输入错误" << endl;
        }
    }
    int code, number;
    double sell, buy;
    switch (f)
    {
    case 1:cout << "\t\t\t\t\t\t\t  商品编号改为："; cin >> code; break;
    case 2:cout << "\t\t\t\t\t\t\t  商品进货价改为："; cin >> buy; break;
    case 3:cout << "\t\t\t\t\t\t\t  商品售价改为："; cin >> sell; break;
    case 4:cout << "\t\t\t\t\t\t\t  商品进货量改为："; cin >> number; break;
    }
    t = first;
    while (t)
    {
        if (t->product_name == str[d - 1])
        {
            switch (f)
            {
            case 1:t->product_code=code; break;
            case 2:t->buy_price = buy; break;
            case 3:t->sell_price = sell; break;
            case 4:t->product_number = number; break;
            }
            break;
        }
        t = t->next;
    }
   
   

  
    cout << "\n\t\t\t\t\t\t\t  修改成功" << endl;

    //将修改后的商品信息读入文件
    ofstream outfile("数据.dat", ios::out);
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
