//include JAVA의 import와 같은 기능
#include <iostream>	//C++ 기본 입출력
#include <stdio.h>	//C 기본 입출력


/*void main()	
{
	char M, N;
	M = 'B';
	N = 'e';
	printf("%c\n",M);	//출력시 타입을 입력해야 출력 가능 %c
	printf("%c", N);
}*/

/*void main()
{
	char H, S;
	
	H = 65;
	S = 97;
	printf("%c\n", H);
	printf("%c\n", S);

	H = 'z';
	S = 'Z';
	printf("\n%c\n", H);
	printf("%c\n", S);

	float Q, W;
	Q = 32.4;
	W = 213748565.5;
	printf("\n%f\n%f\n", Q, W);
}*/

/*void main()
{
	float circum, area;
	const float PI = 3.141592;	//const : 상수
	float radius = 25;
	area = PI * radius*radius;
	circum = 2 * PI*radius;
	printf("Area of circle is %f\n", area);
	printf("Circum of circle is %f\n", circum);
}*/

/*void main()
{
	int i, j;
	float k;
	char ch;
	i = 100;
	j = 200;
	k = 12.345;
	ch = 'A';
	printf("%d %d\n", i + j);
	printf("%f\n",k);
	printf(("%c %d"),ch, ch);
}*/

/*void main()
{
	char k, b, s;
	k = 'k';
	b = 66;
	s = 's';
	printf("%c, %c, %c\n", k, b, s);
	printf("%d, %d, %d\n", k, b, s);
}*/

/*void main()
{
	printf("%15f\n",3.141592);
	printf("%-15.3f\n",3.141592);
	printf("%15.3f\n",3.141592);

	char ch = 'A';
	printf("character = %c, ASCII = %d", ch, ch);
	printf("%12d\n",123456789);
	printf("%-3d%-3d%-3d\n",12,34,56);
	printf("%3d%3d\n",12,34);
	printf("%03d%3d\n",3,160);
	printf("the end");
}*/

/*void main()
{
	int java, c, tot;
	printf("JAVA : ");
	scanf_s("%d", &java);	//표준 입력 &:메모리에 접근
	printf("C : ");
	scanf_s("%d", &c);
	tot = java + c;
	printf("총점은 %d 입니다.\n", tot);
}*/

/*void main()
{
	int width, height, s;
	printf("사각형의 가로, 세로 길이를 입력하세요. : ");
	scanf_s("%d %d", &width, &height);
	s = width * height;
	printf("사각형 넓이 : %d\n", s);
	printf("============================================\n");
	printf("이름을 입력하세요. : ");
	char name[20];
	scanf_s("%s", name, sizeof(name));
	printf("이름 : %s\n", name);
}*/

/*void main()
{
	//scanf_s : double(%lf), float(%f), int(%d), 문자열(%s)
	float a, b, c, s;
	//double a, b, c, s;	//double로 인자를 받을때는 %lf로 받아야 메모리에 문제가 없다.
	//int a, b, c;
	//double s;
	printf("밑변을 입력 하세요. : ");
	scanf_s("%f", &a);
	printf("높이를 입력 하세요. : ");
	scanf_s("%f", &b);
	s = a * b/2;
	c = a + b;
	printf("삼각형의 넓이는 %0.2f 입니다.\n", s);
	printf("삼각형의 둘레는 %0.0f 입니다.", c);
}*/
