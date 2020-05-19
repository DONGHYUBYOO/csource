#include <iostream>

using namespace std;
/*void main() {
	int kor, eng, total, mok;
	double avg;

	cout << "국어 점수 : ";
	cin >> kor;
	cout << "영어 점수 : ";
	cin >> eng;
	total = kor + eng;
	avg = total / 2.0;
	mok = avg / 10;
	cout << "평균 점순 : " << avg << endl;
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
	cout << "두 수를 입력하세요. : ";
	cin >> a >> b;
	cout << "연산자를 입력하세요 (+, -, *, /, %) : ";
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
		cout << "연산자를 확인해 주세요." << endl;
		break;
	}
}