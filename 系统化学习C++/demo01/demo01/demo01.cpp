// demo01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//指定缺省的命名空间。
using namespace std;

int main()
{
    //std::cout << "Hello World!\n";
    //std::cout << 100;
    //std::cout << 'x';

    std::cout << "name: ";
    std::cout << "zhou; ";
    std::cout << "age:";
    std::cout << 25;
    std::cout << "\n";

    //or 	<< 操作符可以拼接多个数据项；

    std::cout << "name: " << "zhou; " << "age: " << 25 << "\n";

    //or 	std::endl也可以用于换行；
    std::cout << "name: " << "zhou; " << "age: " << 25 << std::endl;

    //or    指定缺省的命名空间:using namespace std;
    cout << "name: " << "zhou; " << "age: " << 25 << endl;


    //std::cout 向控制台输出内容的指令
    //<< 输出的运算符
    //"" 字符串的内容边界符
    //Hello World!输出字符串的内容
    //\n  输出一个换行
    //; C++ 语句结束的标志
    
}
