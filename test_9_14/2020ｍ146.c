#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	float c;
	printf("############################\n1.りんご　    2.みかん\n3.ラズベリ�`　4.パイナップル\n############################\n挫きな惚麗を�x�kして、桑催を秘薦して和さい。\n");
	while (1)
	{
		scanf("%d", &a);
		if (a > 0 && a < 5)
		{
			switch (a)
			{
			case 1:
				printf("りんごを�x�kしました。\nその楚を秘薦して和さい。\n");
				while (1)
				{
					scanf("%d", &b);
					if (b > 0)
					{
						printf("方楚��%d\n", b);
						c = (float)b * 140.5;
						printf("りんご%d��蛍の��函カロリ�`は%f(Kcal)です。\n", b, c);
						break;
					}
					else
					{
						printf("方楚��%d\n方楚が�g�`っています。\nもう匯指秘薦して和さい。\n\n---------------------\n", b);
					}
				}
				break;
			case 2:
				printf("みかんを�x�kしました。\nその楚を秘薦して和さい。\n");
				while (1)
				{
					scanf("%d", &b);
					if (b > 0)
					{
						printf("方楚��%d\n", b);
						c = (float)b * 45.25;
						printf("みかん%d��蛍の��函カロリ�`は%f(Kcal)です。\n", b, c);
						break;
					}
					else
					{
						printf("方楚��%d\n方楚が�g�`っています。\nもう匯指秘薦して和さい。\n\n---------------------\n", b);
					}
				}
				break;
			case 3:
				printf("ラズベリ�`を�x�kしました。\nその楚を秘薦して和さい。\n");
				while (1)
				{
					scanf("%d", &b);
					if (b > 0)
					{
						printf("方楚��%d\n", b);
						c = (float)b * 2.41;
						printf("ラズベリ�`%d��蛍の��函カロリ�`は%f(Kcal)です。\n", b, c);
						break;
					}
					else
					{
						printf("方楚��%d\n方楚が�g�`っています。\nもう匯指秘薦して和さい。\n\n---------------------\n", b);
					}
				}
				break;
			case 4:
				printf("パイナップルを�x�kしました。\nその楚を秘薦して和さい。\n");
				while (1)
				{
					scanf("%d", &b);
					if (b > 0)
					{
						printf("方楚��%d\n", b);
						c = (float)b * 700.6;
						printf("パイナップル%d��蛍の��函カロリ�`は%f(Kcal)です。\n", b, c);
						break;
					}
					else
					{
						printf("方楚��%d\n方楚が�g�`っています。\nもう匯指秘薦して和さい。\n\n---------------------\n", b);
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
			printf("斌瞳桑催��%d\n斌瞳桑催が�g�`っています。\nもう匯指秘薦して和さい。\n\n---------------------\n", a);
		}
	}
	return 0;
}
