#include <iostream>

int main()
{
    //语法错误syntax error
    std::cout<<"Read each file."<<std::endl://错误：endl后使用了冒号而非分号
    std::cout<<Update master.<<std::endl;//错误：字符串字面常量的两侧漏掉了引号
    std::cout<<"Write new master." std::endl;//错误：漏掉了第二个输出运算符

    //type error
    int i = "hello";

    //declaration error
    int v1=0,v2=0;
    std::cin>>v>>v2;//错误：使用了"v"而非"v1"
    cout<<v1+v2<<std::endl;//错误：cout未定义；应该是std::cout

    return 0;
}