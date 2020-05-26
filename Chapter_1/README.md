# 第1章 开始

## 练习1.1

查阅你使用的编译器的文档，确定它所使用的文件命名约定。编译并运行第2页的`main`程序。

【答案】[Exercise1_1](https://github.com/x-jeff/CPP_Primer_5E/blob/master/Chapter_1/Exercise1_1.cpp)。

## 练习1.2

改写程序，让它返回-1。返回值-1通常被当作程序错误的标识。重新编译并运行你的程序，观察你的系统如何处理`main`返回的错误标识。

【答案】[Exercise1_2](https://github.com/x-jeff/CPP_Primer_5E/blob/master/Chapter_1/Exercise1_2.cpp)。

## 练习1.3

编写程序，在标准输出上打印`Hello,World`。

【答案】[Exercise1_3](https://github.com/x-jeff/CPP_Primer_5E/blob/master/Chapter_1/Exercise1_3.cpp)。

## 练习1.4

我们的程序使用加法运算符`+`来将两个数相加。编写程序使用乘法运算符`*`，来打印两个数的积。

【答案】[Exercise1_4](https://github.com/x-jeff/CPP_Primer_5E/blob/master/Chapter_1/Exercise1_4.cpp)。

## 练习1.5

我们将所有输出操作放在一条很长的语句中。重写程序，将每个运算对象的打印操作放在一条独立的语句中。

【答案】[Exercise1_5](https://github.com/x-jeff/CPP_Primer_5E/blob/master/Chapter_1/Exercise1_5.cpp)。

## 练习1.6

解释下面程序片段是否合法。

```c++
std::cout<<"The sum of "<<v1;
		<<" and "<<v2;
		<<" is "<<v1+v2<<std::endl;
```

如果程序是合法的，它输出什么？如果程序不合法，原因何在？应该如何修正？

【答案】程序是不合法的。修正见下：

```c++
std::cout<<"The sum of "<<v1
		<<" and "<<v2
		<<" is "<<v1+v2<<std::endl;
```