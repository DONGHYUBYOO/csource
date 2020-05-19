#include <stdio.h>	//C 표준입출력
#include <iostream>	//C++ 표준입출력
#include <string>	//문자열
#include <sstream>	//클래스형 객체 생성
#include <iomanip>
#include <conio.h>

using namespace std;	//iostream에 관한 문법에서 std를 모두 설정해 준다.
/*void main()
{
	//std::cout << "HELLO C++" << std::endl;	//using namespace 미사용
	cout << "HELLO C++" << endl;	
}*/

/*void main()
{
	char name[] = "YOODONGHYUB";
	float kor, eng, mat, tot;
	double avg;
	kor = 90;
	eng = 85;
	mat = 70;
	tot = kor + eng + mat;
	avg = tot / 3.0;

	//C 출력
	printf("C 출력\n");
	printf("  name	     kor eng mat tot avg\n");
	printf("%s   %0.0f %0.0f %0.0f %0.0f %6.1f \n\n", name, kor, eng, mat, tot, avg);
	//C++ 출력
	cout << "C++ 출력" << endl;
	cout << "    name     kor eng mat tot avg" << endl;
	cout << setw(11) << name << setw(4) << kor << setw(4) <<eng << setw(4) << mat << setw(5) << tot << setw(5) << setprecision(3) << avg << endl;

}*/

/*void main()
{
	int number;
	cout << "숫자 입력받기 : ";
	cin >> number;	//number에 입력받은 값을 넣는다.
	cout << "출력 : " << number << endl;

	char word[15];
	cout << "문자 입력받기 : ";
	cin >> word;	//char 배열에 입력받은 값을 넣는다.
	cout << "출력 : " << word << endl;
	cout << "멈추려면 0을 누르세요.";
	_getch();	//출력창에 표시하지 않게 <conio.h> 필요;
	cout << endl;
}*/

/*int main()
{
	int n;
	stringstream ss;
	ss.str("12 345 6789 0 -12");
	for ( int i = 0; i < 5; i++)
	{
		ss >> n;
		cout << n << endl;
	}
	return 0;
}*/

/*void main()
{
	cout << setw(10) << "753-9510" << "|" << endl;
	cout << setiosflags(ios::left);	//왼쪽정렬설정
	cout << setw(10) << "753-9510" << "|" << endl;
	cout << 3.14 << endl;
	cout << setprecision(6);
	cout << setw(10) << setiosflags(ios::showpoint) << 3.14 << endl;	//showpoint : 소수점의 빈자리를 0으로 채워준다.
	cout << resetiosflags(ios::left);	//왼쪽정렬해제
	cout << setw(10) << "WORLD" << "|" << endl;
	cout << setiosflags(ios::left) << setw(10) << "WORLD" << "|" << endl;
}*/

/*void main()
{
	char name[15];
	char addr[20];
	cout << "이름 입력 : ";
	//cin >> name;	//띄어쓰기 시 뒤의 문자를 인식하지 못한다. (버퍼에서 끝났다고 인식)
	cin.get(name, 15);	
	cin.ignore();	//위에서 사용한 메모리를 비워준다.
	cout << "주소 입력: ";
	cin.get(addr, 20);
	cout << "\n 이름 : " << name << endl;
	cout << "주소 : " << addr << endl;
}*/

/*void main()
{
	char name[15];
	char addr[20];
	cout << "이름 입력 : ";
	cin.getline(name, 15);	//공백이 있는 문자열까지 인식
	cout << "주소 입력: ";
	cin.getline(addr, 20);
	cout << "\n이름 : " << name << endl;
	cout << "주소 : " << addr << endl;
}*/

/*
전위연산 : ++a / --a
후위연산 : a++ / a--
*/

/*void main()
{
	int a = 10, b = 5, c, d, e;
	printf("a=%d, b=%d\n", a++, b);		//a=10, b=5
	printf("a=%d, b=%d\n", a++, --b);	//a=11, b=4
	printf("a=%d, b=%d\n", ++a, b);	//a=13, b=4
	c = a;
	printf("c=%d\n", c);	//c=13
	d = c % b;
	printf("d=%d\n", d);	//d=1
}*/

/*void main()
{
	int a, b, c, h, s;
	a = b = h = 5;
	c = ++a + b--;
	printf("a=%d\n", a);	//a=6
	printf("b=%d\n", b);	//b=4
	printf("c=%d\n", c);	//c=11
	s = ++h + ++h;	//h는 최종적으로 7이기 때문에 7+7
	printf("h=%d\n", h);
	printf("s=%d\n",s);		//s=14
}*/

//관계연산자
/*void main()
{
	int h, s;
	h = 3;
	s = h > 2;
	cout << s << endl;	//1=true
	s = h < 2;
	cout << s << endl;	//0=false
	s = 2 == 3;
	cout << s << endl;	//0=false
}*/

/*void main()
{
	int h, s;
	h = 2 != 4 && 5 > 3;
	s = !1 || !0;
	cout << h << endl;	//1=true
	cout << s << endl;	//1=true
}*/

/*void main()
{
	int a, b, c;
	printf("두 값을 입력하세요 : ");	
	scanf_s("%d %d", &a, &b);	
	printf("a=%d, b=%d\n", a, b);
	c = a > b;
	printf("c 결과 : %d\n", c);					
	printf("a>b 결과 : %d\n", a > b);			
	a++;
	printf("a와 b가 같다 : %d\n", a == b);		
	printf("a와 b가 같지 않다 : %d\n", a != b);	
}*/

/*void main()
{
	int a = 3, b = 2, c;
	c = a == ++b;
	printf("결과 : %d\n", (a == b) && (--b == c));		//0=false
	printf("결과 : %d\n", (a != b) || (b == c));		//1=true
	printf("결과 : %d\n", !((a != b) || (b == c)));		//0=false
}*/
