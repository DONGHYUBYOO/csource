#include "1.h"

int max(int a, int b);	//������Ÿ��
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
}
