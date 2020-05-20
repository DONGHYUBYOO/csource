#include "1.h"

int max(int a, int b);	//프로토타입
//메서드가 메인 아래 존재 하기 때문에 메서드에 대한 선언을 프로토타입으로 정의

void main() {
	int m, n, res;
	cout << "비교할 두 수를 입력하세요. : ";
	cin >> m >> n;
	res = max(m, n);
	cout << "최대값 : " << res << endl;
}

int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
