#include "1.h"

/*int a;
void add(int i) {
	if (i >= 10) {
		return;
	}
	i++;
	a++;
	cout << a << endl;
	add(i);	//���
}

int main() {
	add(0);
	cout << "���� �� : " << a << endl;
}*/

//����Լ� ��� 
/*void countNum(int num) {	
	if (num == 1) {	
		cout << "Num : " << num << endl;
		return;
	}
	else {
		cout << "Num : " << num << endl;
		num--;
		countNum(num);
		//countNum(num-1);
	}
}

int main() {
	countNum(5);
	return 0;
}*/

//for�� ���
/*void countNum(int num) {
	for (; num >= 0; num--) {	
		cout << "Num : " << num << endl;
	}
}

int main() {
	countNum(5);
	return 0;
}*/

//while�� ���
/*void countNum(int num) {
	while (num >= 0) {	
		cout << "Num : " << num << endl;
		num--;
	}
}

int main() {
	countNum(5);
	return 0;
}*/

//do~while�� ���
/*void countNum(int num) {
	do {	
		cout << "Num : " << num << endl;
		--num;
	} while (num >= 0);
}

int main() {
	countNum(5);
	return 0;
}*/

//���丮�� - �Ը���
/*void main() {
	int N = 1;
	long long F = 1;
	long long S = 0;
	while (N < 20) {
		N++;
		F = F * N;
		S = S + F;

		cout << N << "! : " << F << endl;
	}
	cout << "1���� 20������ ���丮�� �� �� : " << S << endl;
}*/

//���丮�� ��� - �Ը���
/*int n, i;
long long res, dap;
int fact(int x) {
	if (x == 1) {
		return(1);
	}
	else {
		dap = x * fact(x - 1);
		return(dap);
	}
}

void main() {
	cout << "���ڸ� �Է��ϼ���. : ";
	cin >> n;
	res = fact(n);
	cout << n << "!=";
	for (i = n; i > 1; i--) {
		cout << i << " * ";
	}
	cout << i << "=" << res << endl;
}*/

//���丮�� ���
/*long long res = 1;
void factorial(int num) {
	if (num >= 1) {
		cout << num << " * ";
		res *= num;
		num--;
		factorial(num);
	}
	else {
		cout << res;
	}
}

int main() {
	factorial(5);
	return 0;	
}*/

//���丮�� for��
/*void main() {
	int num, res=1;
	cout << "���ڸ� �Է����ּ���. : ";
	cin >> num;
	for (int i=1; i <= num; i++) {
		cout << i << " * ";
		res *= i;
	}
	cout << res;		
}*/

