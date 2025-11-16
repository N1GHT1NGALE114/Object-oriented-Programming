#include <iostream>
#inclde <cstring>
using namespace std;

class publication
{
protected:
    string title;
    float price;
public:
    void getdata()
    {
        cout<<"Enter the title and price of your book"<<endl;
        cin>>title;
        cin.ignore();
        cin>>price;
    }
    void putdata()
    {
        cout<<"The title of your book is"<<title<<"and the price of your book is"<<price;
    }
};
class sales
{
protected:
    float sale[3];
public:
    void getdata()
    {
        cout<<"Enter the sale for the last last 3 months"<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<"Month:"<<i+1<<":";
            cin>>sale[i];
            cin.ignore();
        }
    }
    void putdata()
    {
        cout<<"The sales for the last 3 months is:"<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<"Month:"<<i+1<<":"<<sale[i]<<endl;
        }
    }
};
class book:public publication,public sales
{
private:
    int page;
public:
    void getdata()
    {
        publication::getdata();
        cout<<"Enter the pages of your book:"<<endl;
        cin>>page;
        sales::getdata();
    }
    void putdata()
    {
        publication::putdata();
        cout<<"Your total pages are:"<<page<<endl;
        sales::putdata();
    }
};
class tape::public publication,public sales
{
private:
    float playingtime;
public:
    void getdata()
    {
        publication::getdata();
        cout<<"What is the total playing time of your tape:"<<endl'
        cin>>playingtime;
        sales::getdata();
    }
    void putdata()
    {
        publication::putdata();
        cout<<"The total playing time of your tape is:"<<playingtime<<endl;
        sales::putdata();
    }
};
int main()
{
    book b;
    tape t;
    b.getdata();
    t.getdata();
    b.putdata();
    t.putdata();
    return 0;
}
