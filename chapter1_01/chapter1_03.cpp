#include <stdio.h>	//C ǥ�������
#include <iostream>	//C++ ǥ�������
#include <string>	//���ڿ�
#include <sstream>	//Ŭ������ ��ü ����
#include <iomanip>
#include <conio.h>

using namespace std;	//iostream�� ���� �������� std�� ��� ������ �ش�.
/*void main()
{
	//std::cout << "HELLO C++" << std::endl;	//using namespace �̻��
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

	//C ���
	printf("C ���\n");
	printf("  name	     kor eng mat tot avg\n");
	printf("%s   %0.0f %0.0f %0.0f %0.0f %6.1f \n\n", name, kor, eng, mat, tot, avg);
	//C++ ���
	cout << "C++ ���" << endl;
	cout << "    name     kor eng mat tot avg" << endl;
	cout << setw(11) << name << setw(4) << kor << setw(4) <<eng << setw(4) << mat << setw(5) << tot << setw(5) << setprecision(3) << avg << endl;

}*/

/*void main()
{
	int number;
	cout << "���� �Է¹ޱ� : ";
	cin >> number;	//number�� �Է¹��� ���� �ִ´�.
	cout << "��� : " << number << endl;

	char word[15];
	cout << "���� �Է¹ޱ� : ";
	cin >> word;	//char �迭�� �Է¹��� ���� �ִ´�.
	cout << "��� : " << word << endl;
	cout << "���߷��� 0�� ��������.";
	_getch();	//���â�� ǥ������ �ʰ� <conio.h> �ʿ�;
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
	cout << setiosflags(ios::left);	//�������ļ���
	cout << setw(10) << "753-9510" << "|" << endl;
	cout << 3.14 << endl;
	cout << setprecision(6);
	cout << setw(10) << setiosflags(ios::showpoint) << 3.14 << endl;	//showpoint : �Ҽ����� ���ڸ��� 0���� ä���ش�.
	cout << resetiosflags(ios::left);	//������������
	cout << setw(10) << "WORLD" << "|" << endl;
	cout << setiosflags(ios::left) << setw(10) << "WORLD" << "|" << endl;
}*/

/*void main()
{
	char name[15];
	char addr[20];
	cout << "�̸� �Է� : ";
	//cin >> name;	//���� �� ���� ���ڸ� �ν����� ���Ѵ�. (���ۿ��� �����ٰ� �ν�)
	cin.get(name, 15);	
	cin.ignore();	//������ ����� �޸𸮸� ����ش�.
	cout << "�ּ� �Է�: ";
	cin.get(addr, 20);
	cout << "\n �̸� : " << name << endl;
	cout << "�ּ� : " << addr << endl;
}*/

/*void main()
{
	char name[15];
	char addr[20];
	cout << "�̸� �Է� : ";
	cin.getline(name, 15);	//������ �ִ� ���ڿ����� �ν�
	cout << "�ּ� �Է�: ";
	cin.getline(addr, 20);
	cout << "\n�̸� : " << name << endl;
	cout << "�ּ� : " << addr << endl;
}*/

/*
�������� : ++a / --a
�������� : a++ / a--
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
	s = ++h + ++h;	//h�� ���������� 7�̱� ������ 7+7
	printf("h=%d\n", h);
	printf("s=%d\n",s);		//s=14
}*/

//���迬����
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
	printf("�� ���� �Է��ϼ��� : ");	
	scanf_s("%d %d", &a, &b);	
	printf("a=%d, b=%d\n", a, b);
	c = a > b;
	printf("c ��� : %d\n", c);					
	printf("a>b ��� : %d\n", a > b);			
	a++;
	printf("a�� b�� ���� : %d\n", a == b);		
	printf("a�� b�� ���� �ʴ� : %d\n", a != b);	
}*/

/*void main()
{
	int a = 3, b = 2, c;
	c = a == ++b;
	printf("��� : %d\n", (a == b) && (--b == c));		//0=false
	printf("��� : %d\n", (a != b) || (b == c));		//1=true
	printf("��� : %d\n", !((a != b) || (b == c)));		//0=false
}*/
