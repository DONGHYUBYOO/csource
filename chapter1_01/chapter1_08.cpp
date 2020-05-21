#include "1.h"

/*int a;
void add(int i) {
	if (i >= 10) {
		return;
	}
	i++;
	a++;
	cout << a << endl;
	add(i);	//재귀
}

int main() {
	add(0);
	cout << "최종 값 : " << a << endl;
}*/

//재귀함수 사용 
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

//for문 사용
/*void countNum(int num) {
	for (; num >= 0; num--) {	
		cout << "Num : " << num << endl;
	}
}

int main() {
	countNum(5);
	return 0;
}*/

//while문 사용
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

//do~while문 사용
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

//팩토리얼 - 규리쌤
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
	cout << "1부터 20까지의 팩토리얼 총 합 : " << S << endl;
}*/

//팩토리얼 재귀 - 규리쌤
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
	cout << "숫자를 입력하세요. : ";
	cin >> n;
	res = fact(n);
	cout << n << "!=";
	for (i = n; i > 1; i--) {
		cout << i << " * ";
	}
	cout << i << "=" << res << endl;
}*/

//팩토리얼 재귀
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

//팩토리얼 for문
/*void main() {
	int num, res=1;
	cout << "숫자를 입력해주세요. : ";
	cin >> num;
	for (int i=1; i <= num; i++) {
		cout << i << " * ";
		res *= i;
	}
	cout << res;		
}*/

