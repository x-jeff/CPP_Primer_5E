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

## 练习1.7

编译一个包含不正确的嵌套注释的程序，观察编译器返回的错误信息。

【答案】[Exercise1_7](https://github.com/x-jeff/CPP_Primer_5E/blob/master/Chapter_1/Exercise1_7.cpp)。

## 练习1.8

指出下列哪些输出语句是合法的（如何有的话）：

```c++
std::cout<<"/*";
std::cout<<"*/";
std::cout<</*"*/"*/;
std::cout<</*"*/"/*"/*"*/;
```

预测编译这些语句会产生什么样的结果，实际编译这些语句来验证你的答案（编写一个小程序，每次将上述一条语句作为其主体），改正每个编译错误。

【答案】[Exercise1_8](https://github.com/x-jeff/CPP_Primer_5E/blob/master/Chapter_1/Exercise1_8.cpp)。

1. 正确，输出为：`/*`。
2. 正确，输出为：`*/`。
3. 不正确，可以修改为：`std::cout<</*"*/"*/";`。
4. 正确，输出为：`/*`。

## 练习1.9

编写程序，使用`while`循环将50到100的整数相加。

【答案】[Exercise1_9](https://github.com/x-jeff/CPP_Primer_5E/blob/master/Chapter_1/Exercise1_9.cpp)。

## 练习1.10

除了`++`运算符将运算对象的值增加1之外，还有一个递减运算符（`--`）实现将值减少1。编写程序，使用递减运算符在循环中按递减顺序打印出10到0之间的整数。

【答案】[Exercise1_10](https://github.com/x-jeff/CPP_Primer_5E/blob/master/Chapter_1/Exercise1_10.cpp)。

## 练习1.11

编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。

【答案】[Exercise1_11](https://github.com/x-jeff/CPP_Primer_5E/blob/master/Chapter_1/Exercise1_11.cpp)。

## 练习1.12

下面的for循环完成了什么功能？sum的终值是多少？

```c++
int sum = 0;
for (int i = -100; i <= 100; ++i)
	sum += i;
```

【答案】该for循环实现了从-100到+100之间所有整数的求和。sum的终值为0。代码见[Exercise1_12](https://github.com/x-jeff/CPP_Primer_5E/blob/master/Chapter_1/Exercise1_12.cpp)。

## 练习1.13

使用for循环重做1.4.1节中的所有练习（第11页）。

【答案】[Exercise1_13](https://github.com/x-jeff/CPP_Primer_5E/blob/master/Chapter_1/Exercise1_13.cpp)。

## 练习1.14

对比for循环和while循环，两种形式的优缺点各是什么？

【答案】

for循环分为循环头和循环体两部分，形式更为简洁，比较适用于循环次数已知的情况，其循环控制变量放在循环头内。

while循环更适用于循环次数不易确定的情况，其循环控制变量通常放在循环体内。

for循环和while循环在功能上是等价的，可以相互转换。

## 练习1.15

编写程序，包含第14页“再探编译”中讨论的常见错误。熟悉编译器生成的错误信息。

【答案】[Exercise1_15](https://github.com/x-jeff/CPP_Primer_5E/blob/master/Chapter_1/Exercise1_15.cpp)。