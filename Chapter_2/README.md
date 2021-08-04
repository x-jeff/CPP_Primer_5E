# 第2章 变量和基本类型

## 练习2.1

类型`int`、`long`、`long long`和`short`的区别是什么？无符号类型和带符号类型的区别是什么？`float`和`double`的区别是什么？

【答案】算术类型分为两类：整型（比如`int`、`long`、`long long`和`short`）和浮点型（比如`float`和`double`）。算术类型的尺寸（也就是该类型数据所占的比特数）在不同机器上有所差别。下表列出了C++标准规定的尺寸的最小值，同时允许编译器赋予这些类型更大的尺寸。某一类型所占的比特数不同，它所能表示的数据范围也不一样。

![](https://github.com/x-jeff/CPP_Primer_5E/raw/master/Chapter_2/c2x1.png)

此外，C++语言规定一个`int`至少和一个`short`一样大，一个`long`至少和一个`int`一样大，一个`long long`至少和一个`long`一样大。其中，数据类型`long long`是在C++11中新定义的。

C++标准指定了一个浮点数有效位数的最小值，然而大多数编译器都实现了更高的精度。通常，`float`以1个字（32比特）来表示，`double`以2个字（64比特）来表示。

除去布尔型和扩展的字符型之外，其他整型可以划分为带符号的（signed）和无符号的（unsigned）两种。带符号类型可以表示正数、负数或0，无符号类型则仅能表示大于等于0的值。

>更详细的解读可戳：[【C++基础】第五课：基本内置类型](http://shichaoxin.com/2019/04/06/C++基础-第五课-基本内置类型/)。

## 练习2.2

计算按揭贷款时，对于利率、本金和付款分别应选择何种数据类型？说明你的理由。

【答案】利率可使用`float`或者`double`类型。本金和付款如果单位是“元”（以人民币为例），则可使用`float`类型，如果单位是“分”（人民币最小单位），则可使用`int`或者`long`，甚至`long long`。

## 练习2.3

读程序写结果。

```c++
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;
```

【答案】

```
32
4294967264
32
-32
0
0
```

## 练习2.4

编写程序检查你的估计是否正确，如果不正确，请仔细研读本节直到弄明白问题所在。

【答案】[Exercise2_4](https://github.com/x-jeff/CPP_Primer_5E/blob/master/Chapter_2/Exercise2_4.cpp)。

## 练习2.5

指出下述字面值的数据类型并说明每一组内几种字面值的区别：

1. 'a'，L'a'，"a"，L"a"
2. 10，10u，10L，10uL，012，0xC
3. 3.14，3.14f，3.14L
4. 10，10u，10.，10e-2

【答案】

1. 'a'，L'a'，"a"，L"a"
	* 'a'：字符'a'
	* L'a'：宽字符'a'
	* "a"：字符串"a"
	* L"a"：宽字符串"a"
2. 10，10u，10L，10uL，012，0xC
	* 10：默认为int型
	* 10u：unsigned int
	* 10L：long（整型）
	* 10uL：unsigned long（整型）
	* 012：八进制数
	* 0xC：十六进制数
3. 3.14，3.14f，3.14L
	* 3.14：默认为double类型
	* 3.14f：float类型
	* 3.14L：long double类型
4. 10，10u，10.，10e-2
	* 10：默认为int型
	* 10u：unsigned int
	* 10.：默认为double类型，等同于10.0
	* 10e-2：科学计数法，即0.01

## 练习2.6

下面两组定义是否有区别，如果有，请叙述之：

```c++
int month=9,day=7;
int month=09,day=07;
```

【答案】有区别。`int month=9,day=7;`为十进制数。`int month=09,day=07;`为八进制数，并且`int month=09`是错误的，其超出了八进制的表示范围，八进制数中不可能出现8和9这两个数字。

## 练习2.7

下述字面值表示何种含义？它们各自的数据类型是什么？

```c++
//(a)
"Who goes with F\145rgus?\012"
//(b)
3.14e1L
//(c)
1024f
//(d)
3.14L
```

【答案】

```c++
//(a)
"Who goes with F\145rgus?\012"
//\145为八进制数，对应的十进制为101，在ASCII码字符集中对应字符'e'
//\012也为八进制数，对应的十进制为10，在ASCII码字符集中对应换行符
//所以上述字符串其实为："Who goes with Fergus?"
//(b)
3.14e1L//科学计数法，相当于3.14*10^1，其中1为长整型（long）。结果等于31.4
//(c)
1024f//float类型
//(d)
3.14L//long double类型
```

## 练习2.8

请利用转义序列编写一段程序，要求先输出2M，然后转到新一行。修改程序使其先输出2，然后输出制表符，再输出M，最后转到新一行。

【答案】[Exercise2_8](https://github.com/x-jeff/CPP_Primer_5E/blob/master/Chapter_2/Exercise2_8.cpp)。