﻿#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//#include<stdio.h>
//void print(int n)      //以输入:123 为例：
//{
//	if (n > 9)         //第一次123>9进去,123/10=12,第二次12>9再进去,12/10=1,第三次进去1!>9,跳出递归
//	{
//		print(n / 10); //第三次时n=1跳出,1%10=1,打印1,返回上一层12%10=2,打印2,再返回上一层123%10=3,打印3
//	}
//	printf("%d ", n % 10);//所以得出的结果为1 2 3
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//递归
//	print(num);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
////int my_strlen(char* str)   //这个自定义函数可以实现求字符串长度,但创建了临时变量,而且不是递归
////{
////	int count = 0;
////	while (*str != '\0') //因为从首元素开始,b不是\0,就记录一次,bit共3次,count从0加到了3,再返回count的值
////	{
////		count++;
////		str++;     //str++每+一次,往后走一个单位 b -> i -> t -> \0
////	}
////	return count;
////}
//int my_strlen(char* str)  //递归的方法
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////把大事化小
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);  //求字符串长度的 库函数
//	//printf("%d\n", len);
//	//模拟实现一个求字符串长度的 自定义函数
//	int len = my_strlen(arr); //arr是数组,数组传参,传过去的不是整个数组,而是第一个元素的地址
//	printf("len=%d\n", len);  
//	return 0;
//}
//
//#include<stdio.h>
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;        //例如5，5>1,进去5*Fac2,进去5-1=4，4>1,再进去4*Fac2，如此类推5-4-3-2-1，
//	else
//		return n * Fac2(n - 1);  //当1=1返回1，跳出递归，不断返回值,使1*2*3*4*5，最好返回计算结果
//}
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret1 = 0;
//	int ret2 = 0;
//	scanf("%d", &n);
//
//	ret1 = Fac1(n);//循环的方式
//	printf("%d\n", ret1);
//
//	ret2 = Fac2(n);//递归的方式
//	printf("%d\n", ret2);
//	return 0;
//}



////斐波那契数列：1 1 2 3 5 8 13 21 34 55... 前面两个数之和等于第三个数。
////int count = 0;
////int Fid(int n)
////{
////	if (n == 3)//测试第三个斐波那契数的计算次数
////	{
////		count++;
////	}
////	if (n <= 2)
////		return 1;
////	else
////		return Fid(n - 1) + Fid(n - 2);//这时用递归就不是便利的方法了
////		
////}
//int Fid(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//
//	//TDD--测试驱动开发
//	ret = Fid(n);
//	printf("ret = %d\n", ret);
//	//printf("count=%d\n", count);
//	return 0;
//}
//
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//int Fan()
//{
//	printf("############こ###########\n");
//	printf("############ん###########\n");
//	printf("############ち###########\n");
//	printf("############は###########\n");
//	printf("####1.開始　　2.終わり###\n\n");
//	printf("番号1と2を選んでください\n");
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int a1 = 0;
//	Fan();
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("ゲーム開始\n\n好きな性別を選んでください:\n##1.男　　2.女##\n");
//		while (a ==1 )
//		{
//			if (a1 == 1)
//			{
//				printf("#111111111\n");
//				break;
//			}
//			else if (a1 == 2)
//			{
//				printf("##122222\n");
//				break;
//			}
//			else
//			{
//				printf("性別もう一回入力してください。\n##1.男　　2.女##\n");
//				goto again;
//
//			}
//
//		}
//
//		break;
//	case 2:
//		printf("終わり");
//		break;
//	default:
//		printf("誤りが発生した、もう一回入力してください。");
//		break;
//
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 100;
//	int b = 30;
//	int c = a - b;
//	int d = a % b;
//	printf("aの値は%dです。\nbの値は%dです。\ncの値は%dです。\ndの値は%dです。\n", a, b, c, d);
//	return 0;
//}


////汉诺塔问题
//#include<stdio.h>
//void move(int n, char x, char y, char z)
//{
//	if (n == 1)
//	{
//		printf("圆盘编号%d：从%c移动到%c。\n", n, x, z);
//	}
//	else
//	{
//		move(n - 1, x, z, y);
//		printf("圆盘编号%d：从%c移动到%c。\n", n, x, z);
//		move(n - 1, y, x, z);
//	}
//}
//
//int main()
//{
//	char ch1 = 'a';//abc三个柱子
//	char ch2 = 'b';
//	char ch3 = 'c';
//	int n = 0;    //n是盘子数
//	printf("请输入盘子个数:\n");
//	scanf("%d", &n);
//	move(n, ch1, ch2, ch3);
//
//	return 0;
//}

////青蛙跳台阶问题
//#include<stdio.h>
//int frog(int n)
//{
//    if (n == 1)
//    {
//        return 1;
//    }
//    if (n == 2)
//    {
//        return 2;
//    }
//    return frog(n - 1) + frog(n - 2);
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int ways = frog(n);
//    printf("%d\n", ways);
//    return 0;
//}
//
////数组
//#include<stdio.h>
//int main()
//{
//	int a = 25;
//	int b = 3;
//	float c;
//	//printf("一つ目の数字を入力して下さい\n");
//	//scanf("%d", &a);
//
//	//printf("二つ目の数字を入力して下さい\n");
//	//scanf("%d", &b);
//
//	c = (float)a / b;//这种形式不省略，显示小数点后面的数
//	printf("%d/%d=%.3f\n", a, b, c);
//
//	return 0;
//}

//#include<stdio.h>
//main()
//{
//	//创建一个数组-存放整型-10个;   []里面的数量必须是常数，不能是变数
//	int arr[10] = { 1,2,3 };  //不完全初始化,剩下的元素默认初始化为0
//	char arr2[5] = { 'a',98,'c'};  //98这里是b，因为b的ASCII值为98；
//	char arr3[5] = "abc";  //ok，"abc\000"
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//计算 arr4所占空间的大小-->包括\0共7个元素,char 7*1=结果为 7
//
//	printf("%d\n", strlen(arr4));//strlen 求字符串的长度;[a b c d e f \0];只计算\0之前的字符个数,结果为 6
//
//	//1. strlen 和 sizeof没有什么关联
//	//2. strlen 是求字符串长度的-只能针对字符串求长度 - 库函数 - 使用需要引用头文件
//	//3. sizeof 计算变量、数组、类型的大小-单位是字节 - 操作符
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";           //a b c \0
//	char arr2[] = { 'a','b','c' }; //a b c 
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//arr2后面没有\0，所以结果是随机值
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";//[a][b][c][d][e][f][\0] ,下标从0开始
//	//printf("%c\n", arr[3]);//打印单个字符d，[]里面填要打印的字符下标,d的下标为3
//	//如果打印整个字符串,建议使用循环函数
//	int i = 0;
//	//for (i = 0; i < (int)strlen(arr); i++)  //这里把strlen函数嵌入for函数中,求出arr[]的长度后带入公式
//	//{                                 //strlen的默认返回值是一个无符号整型值,前面(int)强制类型转换,使它变成有符号整型值
//	//	printf("%c ", arr[i]);
//	//}
//	int len = strlen(arr);  //建议用这种写法,不把strlen放入for
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr2) / sizeof(arr2[0]);//总大小 - 除于 - 一个元素的大小 - 等于 - 元素个数
//	int a = 0;
//	for (a = 0; a < sz; a++)
//	{
//		printf("%d ", arr2[a]);//数组用下标来打印,下标从0开始,建议用循环函数来打印
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//二维数组的'行'可以被忽略，但'列'不能被忽略
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} }; //这里是:三行四列 的数组:第一个数表示横向的行数,第二个数表示竖向的列数.
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; //本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址 &arr[0]
//	bubble_sort(arr, sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h> 
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d\n", arr[i]);//当i等于10的时候，越界访问了     
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);//1
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//1.sizeof(数组名) --> 这时,数组名表示整个数组,sizeof(数组名)计算的是整个数组的大小,单位是字节
//	//2. &数组名,这时数组名代表整个数组,&数组名,取出的是整个数组的地址
//
//	printf("%p\n", arr); //数组首元素地址
//	printf("%p\n", arr+1);//+4个字节,数组第二个地址
//
//	printf("%p\n", &arr[0]);//数组首元素地址 (同上)
//	printf("%p\n", &arr[0]+1);//+4个字节,数组第二个地址 (同上)
//
//	printf("%p\n", &arr);//虽然看起来跟前面一样,但是这个是:整个数组的地址
//	printf("%p\n", &arr+1);//+28个字节,因为数组有7个数4*7=28,所以+1跳到整个数组后面的地址
//	return 0;
//}

//void toulandeyitian(int a)
//{
//
//}
//int main()
//{
//	int a;
//	toulandeyitian(a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 5 / 2;//商2余1   5%2 得1   
//	double b = 5.0 / 2;
//	printf("a=%d\n", a);//得2
//	printf("b=%lf\n", b);//得2.500000默认6位
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 16;
//	// >> 右移操作符:
//	// 移动操作符有两种移动的方法:
//	// 1.算术右移(右边丢弃,左边补原符号位(正补0,负补1))  
//	// 2.逻辑右移(右边丢弃,左边补0)
//	//移动的是二进制位
//	// 00000000000000000000000000010000  (1*2的4次方--16)(正数的原码,反码,补码都一样)
//	int b = a >> 1;
//	printf("%d\n", b);//得8,1*2^3
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = -1;
//	//整数的二进制表示有:原码,反码,补码;
//	//储存到内存中的是补码
//	//(最左位,0为正,1为负) 100000000000000000000001 - 原码 (后面的1是数字1)
//	//                    111111111111111111111110 - 反码
//	//                    111111111111111111111111 - 补码(反码加1 等于补码)
//	int b = a >> 1;  
//	printf("%d\n", b);//得-1  右边丢掉1,左边补原符号位1,所以还是32个1,为补码,结果为-1
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	//左移操作符（左边丢弃，右边补0）
//	//移动前    000000000000000000000101   1*2^2+1*2^0 = 4+1 = 5
//	//移完之后  000000000000000000001010   1*2^3+1*2^1 = 8+2 = 10
//	printf("%d\n", b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	// & - 按2进制位与    (必须用补码,所以如果是负数则换算成它的补码,再计算)
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	//a=3 => 00000000000000000000000000000011
//	//b=5 => 00000000000000000000000000000101
//	//按位与：只要有一个0，则为0；两个1，才为1.(同为真才为真)
//	//a&b => 00000000000000000000000000000001  => 1
//	printf("%d\n", c);//结果为1
//
//	// | - 按2进制位或
//	int d = a | b;
//	//按位或：只要有一个1，则为1；两个0，才为0.(同为假才为假)
//	//a|b => 00000000000000000000000000000111  => 7
//	printf("%d\n", d);
//
//	// ^ - 按2进制位异或
//	int e = a ^ b;
//	//按位异或：相同为0；相异为1。(同假异真)
//	//a^b => 00000000000000000000000000000110 => 6
//	printf("%d\n", e);
//	return 0;
//}

//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//实用型:
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	//加减法 (缺陷:如果ab的值很大,它们相加,可能会超出整型的值,导致数据丢失)=>(可能会溢出)
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	//异或的方法 (不会溢出)
//	//a 011
//	//b 101
//	a = a ^ b; //110=> a=> 6
//	b = a ^ b; //011=> b=> 3
//	a = a ^ b; //101=> a=> 5
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", num);
//	//统计num的补码中有几个1 (内存中储存的都是补码)
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))  //(&1同为1则为1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = a + 2;a += 2;//复合赋值符
//
//	a = a >> 1;a >>= 1;
//
//	a = a & 1;a &= 1;
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%d\n", !a);//10为真,!a为假,结果为0;
//	int b = 0;
//	printf("%d\n", !b);//0为假,!b为真,结果默认为1;
//	if (!a)//一般用法:测试a是否为假
//	{
//		printf("呵呵\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;//取地址操作符   p为指针变量  int*是p的类型
//	*p = 20;//解引用操作符    把p的地址改为20,则a改为了20
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	int* p = &c;
//	int arr[10] = { 0 };
//	//sizeof 计算的变量所占内存空间的大小,单位是字节
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(p));//32位平台,所以是4
//	printf("%d\n", sizeof(char*));
//
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int [10]));//数组去掉数组名,就是它的类型
//
//	//sizeof后面接类型的时候,不能去掉括号
//	int b = 10;
//	short s = 0;//短整型2个字节
//	printf("%d\n", sizeof(s = a + 5));//结果为2，虽然把整型int放入短整型中，但是sizeof只看容器s，所有为2
//	printf("%d\n", s);//结果为0，因为在sizeof中的计算式不会被保存下来，也不会赋值，所以不影响原来s的值。
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	// ~ 按（二进制）位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111  - 补码
//	//11111111111111111111111111111110  - 反码  (补码-1)
//	//10000000000000000000000000000001  - 原码
//	// 结果为 -1
//	printf("%d\n", ~a);
//
//	int b = 11;
//	//00000000000000000000000000001011 第三位变1的方法
//	//00000000000000000000000000000100 （1<<2）
//	//00000000000000000000000000001111   按位或 |
//	b = b | (1 << 2);		
//	printf("%d\n", b);//结果为15
//	
//	//返回到原来的1011
//	//00000000000000000000000000001111 第三位变回0
//	//00000000000000000000000000000100 (1<<2)
//	//11111111111111111111111111111011 按位取反 ~
//	//00000000000000000000000000001011 按位与 &
//	b = b & (~(1 << 2));
//	printf("%d\n", b);//结果回到了11
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);//前置++    先++,后使用
//	printf("%d\n", a++);//后置++    先使用,再++
//	// -- 的用法跟 ++ 一样
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//int a= int (3.14)这种是错误写法
//	return 0;
//}
//#include <stdio.h> 
//void test1(int arr[]) //因为数组传过来的是首元素的地址,传送地址相当于是指针,所以指针的大小是:32位平台为4,64位平台为8
//{
//	printf("%d\n", sizeof(arr));//(2) 结果为4
//}
//void test2(char ch[]) 
//{
//	printf("%d\n", sizeof(ch));//(4) 结果为4
//}
//int main() 
//{
//	int arr[10] = { 0 }; 
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1) 结果为40
//	printf("%d\n", sizeof(ch));//(3) 结果为10
//	test1(arr);
//	test2(ch); 
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a && b;//逻辑与 (真真为真,其他都是假)
//	int d = a || b;//逻辑或 (假假为假,其他都为真)
//	printf("%d %d\n", c, d);
//	//c结果为0 ,d结果为1
//
//	return 0;
//}


//int main()
//{
//	int a = 2;
//	int b = 3;
//	int max = 0;
//
//	if (a < 5)
//		b = 3;
//	else
//		b = -3;
//	b = (a < 5 ? 3 : -3);
//
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	max = (a > b ? a : b);
//	return 0;
//}
//
//#include<stdio.h>
//int get_max(int x, int y)  //这里的()是定义函数的语法规则,不是函数调用操作符
//{
//	return x > y ? x : y;
//}
//int main() //函数调用操作符的操作数是:函数名, 传送的数据
//{
//	int a = 10;
//	int b = 20;
//	//调用函数的时候的()就是函数调用操作符
//	int max = get_max(a, b);  //这里的操作数是:函数名get_max,传送的数据a和b
//	printf("max = %d\n", max);
//	return 0;
//}

////以学生为例
////创建一个结构体类型-struct Stu
//#include<stdio.h>
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//使用struct Stu这个类型创建一个学生对象s1，并初始化
//	struct Stu s1 = { "张三",18,"2020M146" };
//	printf("%s\n", s1.name);//这里的 . 操作符用来访问结构体成员
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	//结构体变量.成员名
//	
//	//下面利用指针和"->"进行打印
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//结构体指针->成员名
//	
//	/*printf("%s\n", (*ps).name);//跟上面的指针效果一样
//	printf("%d\n", (*ps).age);*/
//	return 0;
//}

//#include<stdio.h>//整型提升就是在我们计算的过程中,当操作数达不到一个整型大小的时候,就会发生整型提升,变成一个整型再运算.
//int main()       //有符号数看最左边是1还是0,无符号数直接补0.
//{
//	char a = 3;
//	//00000000000000000000000000000011  数字3的2进制位（整型int）
//	//00000011   char a  从4个字节中截出来的一个字节
//	//
//	char b = 127;
//	//00000000000000000000000001111111    127
//	//01111111    b
//	//
//	//a和b如何相加
//	//00000000000000000000000000000011   按最左边视为符号位,进行转换,最左为0,所以全部加0
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010   a+b
//	//放入char c 要截断
//	char c = a + b;
//	//10000010   c
//	//11111111111111111111111110000010    补码   (%d是整型打印,所以又把截断的进行恢复;最左边为1,全部加1)(整型提升)
//	//11111111111111111111111110000001    反码
//	//10000000000000000000000001111110    原码
//	//-126
//	printf("%d\n", c);//结果为-126
//	return 0;
//}



#include<stdio.h>
 int main()
{
	
		char c = 1;
	
		printf("%u\n", sizeof(c));//1
	
		printf("%u\n", sizeof(+c));//4
	
		printf("%u\n", sizeof(!c));//1
	
	return 0;
	
}

