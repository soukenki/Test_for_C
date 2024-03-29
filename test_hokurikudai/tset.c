﻿//　ｃプログラミング授業に練習したソースコードである

//第一回課題 標準出力（ソースコード）
/*
以下の出力となるようにプログラムを作成し，ソースコードを貼り付けよ
int 型変数 a に対して， 100 を代入
int 型変数 b に対して， 30 を代入
int 型変数 c に対して，変数 a から b を引いて代入
int 型変数 d に対して，変数 a を b で割った余りを代入

引き算には「-」を，割った余りには「%」を使う*/
//
// 横线以下是练习代码
//-----------------------------------------------

#include<stdio.h>
int main()
{
	int a = 100;
	int b = 30;
	int c = a - b;
	int d = a % b;
	printf("aの値は%dです。\nbの値は%dです。\ncの値は%dです。\ndの値は%dです。\n", a, b, c, d);
	return 0;
}


//第二回課題 switch文（ソースコード）
// 
/*	
以下の出力となるようにプログラムを作成せよ
switch文を用いて，キーボードから商品番号と数量を整数で
入力すると摂取カロリーを表示するプログラムを作成せよ．
ただし，無効な数字や文字が入力された場合は，エラーを表示すること.*/
//
// 横线以下是练习代码
//-----------------------------------------------
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	float c;
	printf("############################\n1.りんご　    2.みかん\n3.ラズベリー　4.パイナップル\n############################\n好きな果物を選択して、番号を入力して下さい。\n");
	while (1)
	{
		scanf("%d", &a);
		if (a > 0 && a < 5)
		{
			switch (a)
			{
			case 1:
				printf("りんごを選択しました。\nその量を入力して下さい。\n");
				while (1)
				{
					scanf("%d", &b);
					if (b > 0)
					{
						printf("数量：%d\n", b);
						c = (float)b * 140.5;
						printf("りんご%d個分の摂取カロリーは%f(Kcal)です。\n", b, c);
						break;
					}
					else
					{
						printf("数量：%d\n数量が間違っています。\nもう一回入力して下さい。\n\n---------------------\n", b);
					}
				}
				break;
			case 2:
				printf("みかんを選択しました。\nその量を入力して下さい。\n");
				while (1)
				{
					scanf("%d", &b);
					if (b > 0)
					{
						printf("数量：%d\n", b);
						c = (float)b * 45.25;
						printf("みかん%d個分の摂取カロリーは%f(Kcal)です。\n", b, c);
						break;
					}
					else
					{
						printf("数量：%d\n数量が間違っています。\nもう一回入力して下さい。\n\n---------------------\n", b);
					}
				}
				break;
			case 3:
				printf("ラズベリーを選択しました。\nその量を入力して下さい。\n");
				while (1)
				{
					scanf("%d", &b);
					if (b > 0)
					{
						printf("数量：%d\n", b);
						c = (float)b * 2.41;
						printf("ラズベリー%d個分の摂取カロリーは%f(Kcal)です。\n", b, c);
						break;
					}
					else
					{
						printf("数量：%d\n数量が間違っています。\nもう一回入力して下さい。\n\n---------------------\n", b);
					}
				}
				break;
			case 4:
				printf("パイナップルを選択しました。\nその量を入力して下さい。\n");
				while (1)
				{
					scanf("%d", &b);
					if (b > 0)
					{
						printf("数量：%d\n", b);
						c = (float)b * 700.6;
						printf("パイナップル%d個分の摂取カロリーは%f(Kcal)です。\n", b, c);
						break;
					}
					else
					{
						printf("数量：%d\n数量が間違っています。\nもう一回入力して下さい。\n\n---------------------\n", b);
					}
				}
				break;
			default:
				break;
			}
			if (b > 0)
			{
				break;
			}
		}
		else
		{
			printf("商品番号：%d\n商品番号が間違っています。\nもう一回入力して下さい。\n\n---------------------\n", a);
		}
	}
	return 0;
}




//第三回課題 分岐処理（ソースコード）
// 
/*
while文を利用して、入力した2つの数値をもとに、その間に含まれる数値群を全て出力するプログラムを作成せよ。
なお、出力は、大きい数値から順に出力すること。また、入力する数値の大小の順番は、規則としないこと
（1つ目には、必ず小さい数値を入力する、等を制約としない）。

for文を利用して、入力した2つの数値をもとに、その間に含まれる数値群の合計値を算出するプログラムを作成せよ。
なお、本プログラムの結果として、計算式（X1＋X2＋・・・Xn＝Y）も出力することとし、計算式の数値は、小さい数値から順に出力すること。
また、入力する数値の順番は、規則としないこと（1つ目には、必ず小さい数値を入力する、等を制約としない）。

これらの結果（前が大きい場合，前が小さい場合）＊２のソースコードを提出せよ．
*/

// 横线以下是练习代码
//-----------------------------------------------
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 1;
	int d = 0;
	int j = 0;
	int i = 0;
	while (c == 1)
	{
		printf("プログラム1：\n2つの数値を1つずつ入力してください。(2つの数値の大きさが違いように)\n");
		scanf("%d%d", &a, &b);
		if (a < b)
		{
			printf("1つ目の数値：%d\n2つ目の数値：%d\n\n大きい数値から順番は:", a, b);
			while (a - 1 < b)
			{
				printf("%d,", b);
				b--;
			}
			printf("\n\nもう一回入力しませんか。\n１.もう一回　　　　2.プログラム2へ　　 （1または2入力してください。）\n");
			scanf("%d", &c);
		}
		else if (b < a)
		{
			printf("1つ目の数値：%d\n2つ目の数値：%d\n\n大きい数値から順番は:", a, b);
			while (b - 1 < a)
			{
				printf("%d,", a);
				a--;
			}
			printf("\n\nもう一回入力しませんか。\n１.もう一回　　　　2.プログラム2へ　　 （1または2入力してください。）\n");
			scanf("%d", &c);
		}
		else
		{
			printf("入力した数値が間違っています。もう一回入力してください。\n");
		}
	}
	while (1)
	{
		printf("プログラム2：\n2つの数値を1つずつ入力してください。(2つの数値の大きさが違いように)\n");
		scanf("%d%d", &a, &b);
		if (a < b)
		{
			j = 0;
			printf("1つ目の数値：%d\n2つ目の数値：%d\n\n小さい数値から順番にプラスすると、\n%d", a, b, a);
			for (i = 1; i <= (b - a); i++)
			{
				d = a + i;
				j = j + d;
				printf("+%d", d);
			}
			printf(" = %d\n", a + j);
			printf("\n\nもう一回入力しませんか。\n１.もう一回　　　　2.終わり　　 （1または2入力してください。）\n");
			scanf("%d", &c);
			if (c == 2)
			{
				break;
			}
		}
		else if (b < a)
		{
			j = 0;
			printf("1つ目の数値：%d\n2つ目の数値：%d\n\n小さい数値から順番にプラスすると、\n%d", a, b, b);
			for (i = 1; i <= (a - b); i++)
			{
				d = b + i;
				j = j + d;
				printf("+%d", d);
			}
			printf(" = %d\n", b + j);
			printf("\n\nもう一回入力しませんか。\n１.もう一回　　　　2.終わり　　 （1または2入力してください。）\n");
			scanf("%d", &c);
			if (c == 2)
			{
				break;
			}
		}
		else
		{
			printf("入力した数値が間違っています。もう一回入力してください。\n");
		}
	}
	return 0;
}



//第四回課題 入れ子処理（ソースコード）
/*
入力した数値の約数を大きい数から順に出力するプログラムを作成せよ．
なお，0以下の値が入力されるまで，何度も約数を求めるように作成すること．
*/
// 横线以下是练习代码
//-----------------------------------------------

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (1)
	{
		printf("数値を入力してください。\n");
		scanf("%d", &a);
		if (a >= 0)
		{
			printf("入力値（%d）の約数は、以下の通りです。\n", a);
			for (b = 0; b <= a; b++)
			{
				for (c = 0; c <= a; c++)
				{
					if (b * c == a)
					{
						printf("%d\n", c);
					}
				}
			}
		}
		else
		{
			break;
		}
	}
	return 0;
}




//第五回課題 配列（ソースコード）
/*
課題のソースコードを提出せよ
*/
// 横线以下是练习代码
//-----------------------------------------------

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[100] = { 0 };
	int i = 0; 
  int j = 0;
	int k = 1;
	float h = 0;
	for (i = 0; i < 100; i++)
	{

		printf("数値を入力:> ");
		scanf(" %d", &a[i]);
		k = a[i];
		if (k == 0)
		{
			break;
		}
		else if (k < 0)
		{
			printf("間違えました。（数値＜0不可）もう一回入力してください。\n");
			i--;
		}
	}
	printf("数値一覧: ");
	for (j = i-1; j >= 0; j--)
	{
		
		printf("%d ",a[j]);
		k = a[j] + k;
	}
	h = (float)k / i;
	printf("\n合計: %d\n平均: %.2f", k,h);
	return 0;
}




//Hokuriku University

//第6回課題 文字列の扱い（ソースコード）
/*
課題のソースコードを提出せよ
*/
// 横线以下是练习代码
//-----------------------------------------------

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char cs[20] = {'H','o','k','u','r','i','k','u',' ','U','n','i','v','e','r','s','i','t','y'};
	char ch[20] = { 0 };
	int i, j, v;
	char c, d;
	int b = 1;
	int a = 0;
	int len = strlen(cs);  //lenはchの長さ
	while (b)
	{
		for (v = 0; v < len; v++)
		{
			ch[v] = cs[v];
			if (v == 20)
			{
				ch[v] = '\0';
			}
		}
		printf("挿入前の文字列：");
		puts(cs);
		printf("どの位置の文字の前に挿入しますか？");
		scanf("%d", &a);
		if (a < 0 || a > len)
		{
			printf("位置指定が正しくありません\n---------------------------\n");
		}
		else if (a >= 0 && a <= len)
		{
			printf("挿入後の文字列：");
			for (i = 0; i < len; i++)
			{
				if (i == a)
				{
					c = ch[i];
					ch[i] = '*';
					printf("%c", ch[i]);
					for (j = i+1; j < len + 1 ; j++)
					{
						d = ch[j];
						ch[j] = c;
						c = d;
						printf("%c", ch[j]);
					}
					printf("\n\n---------------------------\n");
					break;
				}
				printf("%c", ch[i]);
			}
			printf("もう一回やりませんか（1.もう一回　0.終わり）：");
			scanf("%d", &b);
			printf("\n---------------------------\n");
		}
	}
	return 0;
}



//第7回課題 関数（ソースコード）
/*
課題のソースコードを提出せよ
*/
// 横线以下是练习代码
//-----------------------------------------------

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
float My_Flmax(float* arr,int num)
{
	int x = 0;
	float max = arr[0];
	for (x = 1; x < num; x++)
	{
		if (max < arr[x])
		{
			max = arr[x];
		}
	}
	return max;
}
int main()
{
	int Num = 0;
	int i = 0;
	int a = 1;
	float Arr[50] = { 0 };
	while (a)
	{
		printf("入力する数値の数:");
		scanf("%d", &Num);
		for (i = 0; i < Num; i++)
		{
			printf("%d つ目の数値を入力:", i + 1);
			scanf("%f", &Arr[i]);
		}
		printf("最大の入力値は、%.2fです。\n------------\nもう一回？(1\\0)", My_Flmax(Arr, Num));
		scanf("%d", &a);
		printf("\n\n");
	}
	return 0;
}




//第八回課題 ポインタ（ソースコード）
/*
	課題のソースコードを提出せよ
*/
// 横线以下是练习代码
//-----------------------------------------------

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 12;
	int* p_a = &a;
	float b = 3.45;
	float* p_b = &b;
	printf("aのアドレスは、%p\naの値は、%d\n", &a, a);

	printf("p_aのアドレスは、%p\np_aの値は、%p\n",&p_a, p_a);

	printf("bのアドレスは、%p\nbの値は、%.2f\n", &b, b);

	printf("p_bのアドレスは、%p\np_bの値は、%p\n",&p_b,p_b);
	return 0;
}




//第九回　オプション課題 文字反転（ソースコード）
/*
添付の資料の指示に従い，プログラムを完成させてソースコードを提出せよ
なお，オプション課題であるため，提出しなくても減点にはなりません．
*/
// 横线以下是练习代码
//-----------------------------------------------

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define NUM 100
void reverse(char* pt);

int main()
{
	char ch[NUM] = { 0 };
	printf("文字列を入力して下さい：");
	gets(ch);                           //入力
	reverse(ch);
	printf("\n反転結果:");
	puts(ch);                          //出力
	return 0;
}

void reverse(char* pt)
{
	int len = strlen(pt);     //文字列の長さ（最終目のために）
	char* pa = pt + len - 1;
	while (pt < pa)           //文字列の一番目の領域 < 最終目領域
	{
		char tmp = *pa;
		*pa = *pt;
		*pt = tmp;       //交換
		pt++;           //次へ
		pa--;
	}
}

//第十回　課題  参照渡し（ソースコード）
/*
 	課題のソースコードを提出せよ
*/
// 横线以下是练习代码
//-----------------------------------------------

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void addValue(int* num1, int* num2, int* result);
int main()
{
	//変数の宣言
	int num1 = 10;
	int num2 = 15;
	int result = 0;
	//足し算プログラムの呼び出し
	addValue(&num1, &num2, &result);
	printf("result = %d\n", result);

	return 0;
}
void addValue(int* num1, int* num2, int* result)
{
	*result = *num1 + *num2;
}



//第十一回課題 構造体（ソースコード）
/*
課題のソースコードを提出せよ
*/
// 横线以下是练习代码
//-----------------------------------------------
 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Student
{
	char Name[60];
	char Gender[10];
	int age;
}Stu[3] = { { "Yamada_Tarou","Male",16 } ,
	        { "Suzuki_Itirou","Male",17 } ,
	        { "Takahasi_Youko","Female",15 } 
		   };
void print(struct Student* P)
{
	printf("Name=%s\nGender=%s\nAge=%d\n\n", P->Name, P->Gender, P->age);
	printf("Name=%s\nGender=%s\nAge=%d\n\n", (P + 1)->Name, (P + 1)->Gender, (P + 1)->age);
	printf("Name=%s\nGender=%s\nAge=%d\n\n", (P + 2)->Name, (P + 2)->Gender, (P + 2)->age);
}
int main()
{
	print(Stu);
	return 0;
}





//第十二回課題 ファイル入出力（ソースコード）
/*
課題のソースコードを提出せよ
*/
// 横线以下是练习代码
//-----------------------------------------------

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 1;
	FILE* file;
	if (NULL == (file = fopen("12-1.txt", "w")))
	{
		printf("12-1.txt cannot open.\n");
		exit(1);
	}
	file = fopen("12-1.txt", "w");
	for (i = 1; i < 1000; i++)
	{

		fprintf(file, "%d", i);
		if (i % 5 == 0)
		{
			fprintf(file, "\n");
		}
		else
		{
			fprintf(file, ",");
		}
	}
	fclose(file);
	return 0;
}



//第十三回課題 メモリの動的割り当て（ソースコード）
/*
課題のソースコードを提出せよ
*/
// 横线以下是练习代码
//-----------------------------------------------
 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
struct Student
{
	int id;
	int score;
};
int main()
{
	struct Student S;
	int i = 0;
	int n = 0;
	int num = 0;
	int* array;
	printf("学生の人数は？");
	scanf("%d", &n);
	if ((array = (int*)malloc(n * sizeof(int))) == NULL)
	{
		printf("malloc failed.\n");
		exit(1);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			num = rand();
			S.id = i;
			S.score = num;
			printf("student #%d:%d\n", S.id, S.score);
		}
	}
	free(array);
	return 0;
}


//第十四回課題　最終課題（ソースコード）
/*
最終課題のソースコードを提出せよ．
*/
// 横线以下是练习代码
//-----------------------------------------------

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define SIZE  50

int main()
{
	FILE* fp;
	int data[6][SIZE];
	int no = 0;
	int sum = 0;
	float avg = 0;
	char hyoka = 0;
	int i = 0;
	int j = 0;

	if (NULL == (fp = fopen("14_point.txt", "r")))
	{
		printf("14_point.txt is cannot open.\n");
		exit(1);
	}
	while (fscanf(fp, "%d,%d,%d,%d,%d,%d",
		&data[0][i], &data[1][i], &data[2][i],
		&data[3][i], &data[4][i], &data[5][i]
	       ) != EOF)
	{
		i++;
	}

	fclose(fp);

	while (1)
	{
		printf("生徒番号を入力してください。\n");
		scanf("%d", &no);
		if (no < 0)
			break;
		if (no == 0)
		{
			printf("生徒番号\t国語\t数学\t社会\t理科\t英語\t合計\t平均\t評価\n");
			for (i = 0; i < SIZE; i++)
			{
				sum = 0;
				for (j = 1; j < 6; j++)
				{
					sum = sum + data[j][i];
				}
				avg = (float)sum / 5;

				if (avg >= 80)
					hyoka = 'A';
				else if (avg >= 70)
					hyoka = 'B';
				else if (avg >= 60)
					hyoka = 'C';
				else
					hyoka = 'D';

				printf("%d\t\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\t%c\n\n",
						data[0][i], data[1][i], data[2][i],
						data[3][i], data[4][i], data[5][i],
						sum, avg, hyoka);
			}
		}
		else 
		{
			for (i = 0; i < SIZE; i++)
			{
				if (data[0][i] == no)
				{
					printf("生徒番号\t国語\t数学\t社会\t理科\t英語\t合計\t平均\t評価\n");
					sum = 0;
					for (j = 1; j < 6; j++)
					{
						sum = sum + data[j][i];
					}
					avg = (float)sum / 5;
					if (avg >= 80)
						hyoka = 'A';
					else if (avg >= 70)
						hyoka = 'B';
					else if (avg >= 60)
						hyoka = 'C';
					else
						hyoka = 'D';

					printf("%d\t\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\t%c\n\n",
						data[0][i], data[1][i], data[2][i],
						data[3][i], data[4][i], data[5][i],
						sum, avg, hyoka);
					break;
				}
				
			}
			if (i == SIZE && sum == 0)
				printf("生徒番号(%d)は存在しません.\n\n", no);
		}
	}
	return 0;
}




///////////////////////////////期末試験/////////////////////////////
// 横线以下是练习代码
//-----------------------------------------------

/*
標準入出力
int age;
printf("あなたの年齢は？");
scanf("%d", &age);
printf("生まれてから今まで、およそ %d日です", age * 365);

分岐処理
int score1;
int score2;
scanf("%d", &score1);
scanf("%d", &score2);
if (score1 >= 60 && score2 >= 60)
printf("合格");
else if ((score1 + score2) >= 130)
printf("合格");
else if ((score1 + score2) >= 100 && (score1 >= 90 || score2 >= 90))
printf("合格");
else
printf("不合格");

繰り返し処理
九九表（1～9）を表示するプログラムがある．
int main()
{
	int p, q;
	for (p = 1; p <= 9; p++)
	{
		for (q = 1; q <= 9; q++)
			printf(" %2d", p * q);
		printf("\n");

	}
	return 0;
}

構造体
#include<stdio.h>
struct seiseki 
{
	int jap, eng, math;//50 100 60
};

int sum(struct seiseki  x) 
{
	return (x.jap + x.eng + x.math);
}

float avg(struct seiseki  y)
{
	return (sum(y) / (float)3);
}

int main() 
{
	struct seiseki data;
	data.jap = 50;
	data.eng = 100;
	data.math = 60;
	printf("合計: %d\n", sum(data));  // 210
	printf("平均: %.1f\n", avg(data));// 70
	return 0;

}

ポインタ
#include<stdio.h>
int main() 
{
	int a[3]; //11 22 33
	int* x, *y, *z;
	int i;
	for (i = 0; i < 3; i++) 
	{
		a[i] = (i + 1) * 10 + (i + 1);
	}
	x = &a[1];  y = &a[2];  z = &a[0];
	printf(" %d, %d, %d\n",(*z)*(*z),(*z)*(*x) ,(*z)*(*y) ); //121，242，363
	return 0;

}
*/