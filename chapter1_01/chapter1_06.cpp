#include <iostream>
#include <iomanip>	//C++ ��������
#include "1.h"	//����ڰ� ������ ������� ����

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

/*void main() {
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
}*/

/*void main() {
	int year;
	cout << "�⵵�� �Է��ϼ���. : ";
	cin >> year;
	
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
		cout << "����";
	}
	else {
		cout << "���";
	}
}*/

/*void main() {
	int han;
	han = 1;
	while (han < 5) {
		cout << "Good" << endl;
		han++;
	}

	int i = 0, sum = 0;
	while (i < 100) {	//99��° �̹� i++�� ����Ǿ� 100�� ���� �ȴ�.
		i++;
		sum = sum + i;
	}
	cout << "while �հ� : " << sum << endl;

	i = 1;
	sum = 0;
	do {	//������ �ϰ� �ݺ����� ������ �� ���
		sum += i;
		i++;
	} while (i < 101);
	cout << "do while �հ� : " << sum << endl;

	i = 1;
	sum = 0;
	for (i = 1; i < 101; i++) {
		sum += i;
	}
	cout << "for �հ� : " << sum << endl;
}*/

/*void main() {
	int i, j;
	cout << "���� for��" << endl;
	for (i = 1; i <= 2; i++) {
		for (j = 1; j <= 3; j++) {
			cout << "i= " << i << setw(5) << "j= " << j << endl;
		}
	}
	cout << "��" << endl << endl;

	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
	cout << endl;

	int num;
	cout << "���ϴ� ���� �Է��ϼ���. : ";
	cin >> num;

	for (i = 1; i < 10; i++) {
		cout << num << " * " << i << " = " << num * i << endl;
	}
}*/

/*void main() {
	char mun;
	while (1) {
		cout << "���ڸ� �Է��ϼ���. : ";
		cin >> mun;
		if (mun >= 'A' && mun <= 'Z') {	//64~94 ������ �� ��
			cout << "�����Է� �Դϴ�." << endl;
			break;
		}
		else {
			cout << "�߸� �Է��ϼ̽��ϴ�. �빮�ڸ� �Է��ϼ���." << endl << endl;
		}
	}

	int a;
	while (1) {
		cout << "���ڸ� �Է��ϼ���. : ";
		cin >> a;
		
		if (a == EOF) {	//-1
			cout << "����˴ϴ�." << endl << endl;
			break;
		}
		else {
			continue;
		}
	}

	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			cout << setw(6) << j << " * " << i << " = " << setw(2) << i * j;
		}
		cout << endl;
	}
	cout << endl;
}*/

/*void main() {
	int sw = 0, sum = 0, asum = 0, bsum = 0, n = 0;
	for (n = 0; n < 101; n++) {
		if (sw == 0) {
			asum += n;
			sw = 1;
		}
		else {
			bsum += n;
			sw = 0;
		}
	}
	cout << "for Ȧ�� �հ� : " << bsum << "  ����� �� �ٸ���?" << endl;
	cout << "for ¦�� �հ� : " << asum << "  ����� �� �ٸ���?" << endl << endl;

	sw = 0, asum = 0, bsum = 0, n = 0;
	do {
		n++;
		if (sw == 0) {
			asum += n;
			sw = 1;
		}
		else {
			bsum += n;
			sw = 0;
		}
	} while (n < 100);
	cout << "do while Ȧ�� �հ� : " << bsum << endl;
	cout << "do while ¦�� �հ� : " << asum << endl << endl;

	sw = 0, asum = 0, bsum = 0, n = 0;
	while (n < 100) {
		n++;
		if (sw == 0) {
			asum += n;
			sw = 1;
		}
		else {
			bsum += n;
			sw = 0;
		}
	}
	cout << "while Ȧ�� �հ� : " << bsum << endl;
	cout << "while ¦�� �հ� : " << asum << endl << endl;

	sw = 0, sum = 0, asum = 0, bsum = 0, n = 0;
	for (n = 0; n < 101; n++) {
		if (sw == 0) {
			asum += n;
			sw = 1;
		}
		else {
			bsum -= n;
			sw = 0;
		}
	}
	cout << "for  �հ� : " << sum << "  ����� �� �ٸ���?"<< endl << endl;

	sw = 0, sum = 0, asum = 0, bsum = 0, n = 0;
	do {
		n++;
		if (sw == 0) {
			asum += n;
			sw = 1;
		}
		else {
			bsum -= n;
			sw = 0;
		}
	} while (n < 100);
	cout << "do while  �հ� : " << sum << "  ����� �� �ٸ���?" << endl << endl;

	sw = 0, sum = 0, asum = 0, bsum = 0, n = 0;
	while (n < 100) {
		n++;
		if (sw == 0) {
			sum += n;
			sw = 1;
		}
		else {
			sum -= n;
			sw = 0;
		}
	}
	cout << "while  �հ� : " << sum << endl << endl;
}*/

//�ִ�����, �����
/*void main()
{
	int u,v,m,n,GCD,LCM;
	cout << "�� ���ڸ� �Է��ϼ���";
	cin >> m >> n;
	m = u;
	n = v;

	while (m != n)
	{
		if (m > n) //ū �� ã��
			m = m - n;
		else
			n = n - m;
	}
	GCM = m; //�ִ�����
	LCM = (u*v) / GCM; //�ִ�����
	cout << "GCD" << setw(5) << GCD << endl;
	cout << "LCM" << setw(5) << LCM << endl;
}*/

//�ִ�����, �����
/*void main() {
	int u, v, GCD, LCM, s, l, na;
	cout << "�� ���� �Է��ϼ���. : ";
	cin >> u >> v;
	if (u > v) {
		s = v;
		l = u;
	}
	else {
		s = u;
		l = v;
	}
	while (s != 0) {
		na = l % s;
		l = s;
		s = na;

		GCD = l;
		LCM = (u*v) / GCD;
		cout << "�ִ� ����� : " << setw(5) << GCD << endl;
		cout << "�ִ� ����� : " << setw(5) << LCM << endl << endl;
	}
}*/

//���ĺ� ���
/*void main() {
	char mun, alp;
	int i;
	cout << "���ڸ� �Է��ϼ���. : ";
	while (1) {
		cin >> mun;
		if (mun >= 'A' && mun <= 'Z') {
			for (i = 1; i <= 26; i++) {
				alp = mun++;
				cout << setw(2) << alp;
				if (mun > 'Z') {
					mun = mun - 26;
				}
			}
			cout << endl;
			break;
		}
		else {
			cout << "�빮�ڸ� �Է��ϼ���. : ";
			continue;
		}
	}
}*/