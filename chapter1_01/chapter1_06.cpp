#include <iostream>

using namespace std;
/*void main() {
	int kor, eng, total, mok;
	double avg;

	cout << "���� ���� : ";
	cin >> kor;
	cout << "���� ���� : ";
	cin >> eng;
	total = kor + eng;
	avg = total / 2.0;
	mok = avg / 10;
	cout << "��� ���� : " << avg << endl;
	cout << "mok : " << mok << endl << endl;

	switch (mok)
	{
	case 9:
		cout << "A";
		break;
	case 8:
		cout << "B";
		break;
	case 7:
		cout << "C";
		break;
	case 6:
		cout << "D";
		break;
	case 5:
		cout << "F";
		break;
	default:
		break;
	}
}*/

void main() {
	int a, b;
	char op;
	cout << "�� ���� �Է��ϼ���. : ";
	cin >> a >> b;
	cout << "�����ڸ� �Է��ϼ��� (+, -, *, /, %) : ";
	cin >> op;

	switch (op) {
	case '+':
		cout << a << " " << op << " " << b << " = " << a + b;
		break;
	case '-':
		cout << a << " " << op << " " << b << " = " << a - b;
		break;
	case '*':
		cout << a << " " << op << " " << b << " = " << a * b;
		break;
	case '/':
		cout << a << " " << op << " " << b << " = " << a / b;
		break;
	case '%':
		cout << a << " " << op << " " << b << " = " << a % b;
		break;
	default:
		cout << "�����ڸ� Ȯ���� �ּ���." << endl;
		break;
	}
}