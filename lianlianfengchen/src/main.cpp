// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     cout << "Hello Vscode" << endl;
//     return 0;
// }
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
//string 输入输出
void cin_func(){
    string input;
    cout <<"input your key words "<<endl;
    cin >> input;
    cout << "your key words show :"<<endl;
    cout << input <<endl;
}

void var_func()
{
    //整形，4字节
    int a = 100;
    //ll整形, 8字节
    long long lla = 1000000000000000000;
    //长整型， 4 字节
    long la = 1024;
    //短整型,2 字节
    short sa = 200;
    //带符号字符型,
    //字符型使用时最好指示带符号还是不带符号
    //因为在不同的机器上不指明char符号可能会有问题
    signed char sc = 'a';
    //无符号字符型
    unsigned char uc = 'm';
    //bool类型
    bool bt = true;
}

void piont_func()
{
int errNumb = 0;
// curErr将一直指向errNumb
int *const curErr = &errNumb;

cout << curErr<<endl;
cout << &curErr<<endl;
//不允许修改curErr的指向
int rightNumb = 1;
//编译报错，提示=左侧必须为可修改的左值
// curErr = &rightNumb;
const double pi = 3.14159;
// pip是一个指向常量对象的常量指针
const double *const pip = &pi;



}
void piont_func_test()
{
    int i = 42;
    // p是一个指针
    int j = 44;
    int *p ;
    cout<<"p"<<p<<endl;
    cout<<"&i"<<&i<<endl;
    cout<<"&j"<<&j<<endl;




}


int main()
{
   //cin_func();
   piont_func();
   


   system("pause");
   return (0);
}
