#include "1.h"

/*int max(int a, int b);	//������Ÿ��
//�޼��尡 ���� �Ʒ� ���� �ϱ� ������ �޼��忡 ���� ������ ������Ÿ������ ����

void main() {
	int m, n, res;
	cout << "���� �� ���� �Է��ϼ���. : ";
	cin >> m >> n;
	res = max(m, n);
	cout << "�ִ밪 : " << res << endl;
}

int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}*/

//Call by Value
/*void value(int a, int b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
}

void main() {
	int n1 = 10, n2 = 20;
	value(n1, n2);
	cout << "n1= " << n1 << endl;
	cout << "n2= " << n2 << endl;
}*/

//Call by Reference
/*void value(int *a, int *b) {	// * (������) : & (���۷���) �� ���� ������ �ּҸ� �޾Ƶ��̱� ���� ���
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "*a= " << *a << endl;
	cout << "*b= " << *b << endl;
}

void main() {
	int n1 = 10, n2 = 20;
	cout << "before n1= " << n1 << endl;
	cout << "before n2= " << n2 << endl;
	value(&n1, &n2);	// & : �ο��� ���� �ƴ� �ش� ���� �����ϴ� �ּҸ� ǥ��
	cout << "after n1= " << n1 << endl;
	cout << "after n2= " << n2 << endl;
	cout << "after *n1= " << n1 << endl;
	cout << "after *n2= " << n2 << endl;
}*/

//���μ�, ���μ�, ���� ��� ���� ���
/*char mun;	//���μ�, ���μ��� ������� �������� ���������� ��� - but, �޸��� ���ϸ� �ټ� �ִ�.
void dae() {
	mun = mun - 32;
	cout << mun << endl;
}

void main() {
	cout << "���ĺ��� �Է��ϼ���. : ";
	cin >> mun;
	dae();
}*/

//���μ�, ���μ� �ְ� ���� ���� ���
/*char mun, alp;	//���μ�, ���μ��� ������� �������� ���������� ��� - but, �޸��� ���ϸ� �ټ� �ִ�.
void dae(char alp) {
	alp = alp - 32;
	cout << alp << endl;
}

void main() {
	cout << "���ĺ��� �Է��ϼ���. : ";
	cin >> mun;
	dae(mun);
}*/

//���μ�, ���μ� ���� ���� �ִ� ���
/*char mun, alp;	//���μ�, ���μ��� ������� �������� ���������� ��� - but, �޸��� ���ϸ� �ټ� �ִ�.
char dae() {
	mun = mun - 32;
	return mun;
}

void main() {
	cout << "���ĺ��� �Է��ϼ���. : ";
	cin >> mun;
	alp=dae();
	cout << alp << endl;
}*/

//���μ�, ���μ�, ���� ��� �ִ� ���
/*char mun, alp, res;	//���μ�, ���μ��� ������� �������� ���������� ��� - but, �޸��� ���ϸ� �ټ� �ִ�.
char dae(char alp) {
	alp = alp - 32;
	return alp;
}

void main() {
	cout << "���ĺ��� �Է��ϼ���. : ";
	cin >> mun;
	res=dae(mun);
	cout << res << endl;
}*/


