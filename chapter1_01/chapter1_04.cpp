#include <iostream>	//C++ �����

using namespace std;
//���׿�����
/*void main()
{
	int a, b;
	cout << "ù��° ���ڸ� �Է��ϼ��� : ";
	cin >> a;
	cout << "�ι�° ���ڸ� �Է��ϼ��� : ";
	cin >> b;
	cout << "a=" << a <<"   "<< "b=" << b << endl;
	cout << "�� ū�� : ";
	a > b ? cout << a << "��(��) �� ũ��" << endl : cout << b << "��(��) �� ũ��" << endl;
}*/

/*void main()
{
	int a, b, c, max, min;
	cout << "ù��° ���ڸ� �Է��ϼ��� : ";
	cin >> a;
	cout << "�ι�° ���ڸ� �Է��ϼ��� : ";
	cin >> b;
	cout << "����° ���ڸ� �Է��ϼ��� : ";
	cin >> c;
	max = ((a > b) && (a > c)) ? a : ((b > a) && (b > c)) ? b : c;
	min = ((a < b) && (a < c)) ? a : ((b < a) && (b < c)) ? b : c;
	//max = (a > b) ? ((a > c) ? a : c) : (b > c ? b : c);
	//min = (a < b) ? ((a < c) ? a : c) : (b < c ? b : c);
	//a > (b > c ? max = b : max = c) ? max = a : max;
	//a < (b < c ? min = b : min = c) ? min = a : min;
	cout << "MAX= " << max << endl;
	cout << "MIN= " << min << endl;	
}*/

/*void main()
{
	int n5, n4, n3, n2, n1, n;
	cout << "�ټ��ڸ� ���� �Է� �ϼ���. : ";
	cin >> n;
	n5 = n / 10000;
	n4 = n % 10000 / 1000;
	n3 = n % 1000 / 100;
	n2 = n % 100 / 10;
	n1 = n % 10 / 1;
	cout << "\n���� �ڸ� : " << n5 << endl;
	cout << "õ�� �ڸ� : " << n4 << endl;
	cout << "���� �ڸ� : " << n3 << endl;
	cout << "���� �ڸ� : " << n2 << endl;
	cout << "���� �ڸ� : " << n1 << endl;
	cout << "�Է��Ͻ� �� " << n << " �� ���� �մϴ�.";
}*/

/*void main()
{
	int n7, n6, n5, n4, n3, n2, n1, n;
	cout << "�ټ��ڸ� ���� �Է� �ϼ���. : ";
	cin >> n;
	n7 = n / 10000;
	n = n - n7 * 10000;
	n6 = n / 5000;
	n = n % 5000;
	n5 = n / 1000;
	n = n % 1000;
	n4 = n / 500;
	n = n % 500;
	n3 = n / 100;
	n = n % 100;
	n2 = n / 10;
	n = n % 10;
	n1 = n / 1;
	cout << "\n����¥�� : " << n7 << "��" << endl;
	cout << "��õ��¥�� : " << n6 << "��" << endl;
	cout << "õ��¥�� : " << n5 << "��" << endl;
	cout << "�����¥�� : " << n4 << "��" << endl;
	cout << "���¥�� : " << n3 << "��" << endl;
	cout << "�ʿ�¥�� : " << n2 << "��" << endl;
	cout << "�Ͽ�¥�� : " << n1 << "��" << endl;
}*/
