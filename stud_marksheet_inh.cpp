/*Write a C++ Program display Student Mark sheet using Multiple inheritance*/

#include <iostream>
using namespace std;
class student
{
    public:
    string a;
    int roll;
    void get()
    {
        cout<<"Enter the name :"<<endl;
        cin>>a;
        cout<<"Enter the roll.no :"<<endl;
        cin>>roll;
    }
};
class mark
{
    public:
    int mark[4],i;
    void in()
    {
        cout<<"Enter the marks of 4 subjects :"<<endl;
        for(i=0;i<4;i++)
        {
            cin>>mark[i];
        }
    }
};
class marksheet:public student,public mark
{
    public:
    int total;
    float avg;
    void calc()
    {
        total=mark[0]+mark[1]+mark[2]+mark[3];
        avg=total/4;
    }
    void dis()
    {
        cout<<"Name :"<<a<<endl;
        cout<<"Roll.no :"<<roll<<endl;
        cout<<"Marks entered :";
        for(i=0;i<4;i++)
        {
            cout<<mark[i]<<" ";
        }
        cout<<endl;
        cout<<"Total marks :"<<total<<endl;
        cout<<"Average :"<<avg<<endl;
    }
};
main()
{
    
    marksheet m1;
    m1.get();
    m1.in();
    m1.calc();
    m1.dis();
}
