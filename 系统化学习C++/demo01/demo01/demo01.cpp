// demo01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//指定缺省的命名空间。
using namespace std;

//3.0 宏常量
#define MONTHS 12
#define PI 3.14

int main()
{/*
    //1.0
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


    //std::cout 向控制台输出内容的指令  c 代表character
    //<< 输出的运算符
    //"" 字符串的内容边界符
    //Hello World!输出字符串的内容
    //\n  输出一个换行
    //; C++ 语句结束的标志


    // 2.0
    // 使用变量 
    // C++常用的数据类型有五种：整数（int）、浮点数（float和double）、字符（char）、字符串（string）和布尔（bool）。

    // 超女基本信息：姓名、年龄、体重、性别、颜值。
    // 声明变量，存放超女基本信息的数据项。
    string name = "西施";         // 姓名。
    int age = 25;                 // 年龄。
    double weight = 48.6;        // 体重（kg）。
    char sex = 'X';                // 性别：X-女；Y-男。
    bool yz = false;               // 颜值：true-漂亮；false-不漂亮。

    cout << "姓名：" << name << "，年龄：" << age << "，体重：" << weight
        << "，性别：" << sex << "，颜值：" << yz << endl;

    name = "冰冰";           // 字符串有双引号包含。
    age = 23;                // 整数直接书写。
    weight = 50.5;           // 浮点数直接书写。
    sex = 'X';                // 字符用单引号包含。
    yz = true;                // 布尔型取值只能是true和false，或1和0。

    cout << "姓名：" << name << "，年龄：" << age << "，体重：" << weight
        << "，性别：" << sex << "，颜值：" << yz << endl;


    //3.0
    //使用常量
    //3.1 宏常量 # define xxx
    cout << "one year have " << MONTHS << " months" << endl;
    cout << "PI is " << PI << endl;

    //3.2 const修饰的变量
    const int days = 7;
    cout << "one weekend have " << days << endl;

    // 4.0
    // 标识符的命名
    // C++规定给标识符（变量、常量、函数、结构体、类等）命名时，必须遵守以下规则。
    //    	在名称中只能使用字母字符、数字和下划线；
    //    	名称的第一个字符不能是数字；
    //    	名称区分大写字符与小写字符；
    //    	不能将C++关键字用作名称；
    //    	以下划线和大写字母打头的名称被保留给编译器及其使用的资源使用，如果违反了这一规则，会导致行为的不确定性。
    //    	C++对名称的长度没有限制，但有些平台可能有长度限制（64字符）。
    //    C++提倡有一定含义的名称（望名知义）。

 
    // 5.0输入数据
    //5.1 用std::cin输入数据
    string name; //name
    cout << "please input your name: ";
    std::cin >> name;
    cout << "The name of input: " << name << endl;

    int age;
    cout << "please input your age: ";
    std::cin >> age;
    cout << "The age of input: " << age << endl;

    double weight;
    cout << "please input your weight: ";
    std::cin >> weight;
    cout << "The weight of input: " << weight << endl;

    char sex;
    cout << "please input your sex (X-woman, Y-man): ";
    std::cin >> sex;
    cout << "The sex of input: " << sex << endl;

    bool face = true;
    cout << "please input your face (true-1-beautiful, false-0-urgly): ";
    std::cin >> face;
    cout << "The face of input: " << face << endl;

    // a）布尔型变量的值在计算机内部用1（true）和0（false）存储；b）程序中可以书写true和false，也可以书写1和0，其它值将强制转换成1；c）用cin输入时可以填1和0，其它值也强制转换成1；d）用cout输出时只显示1和0，不显示true和false。
    // 如果输入的数据与变量的数据类型不匹配，会导致行为的不确定性。
*/
    int a = 9;
    int b = 3;
    cout << a / b << endl;

    int i = 10;
    //a = i;
    //i = i + 1;
    //a = i++;

    //i = i + 1;
    //a = i
    a = ++i;

    

    cout << "i= " << i<< endl;
    cout << "a= " << a << endl;
   


}
