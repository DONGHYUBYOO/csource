#include "1.h"

/*int max(int a, int b);	//프로토타입
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
/*void value(int *a, int *b) {	// * (포인터) : & (레퍼런스) 를 통해 들어오는 주소를 받아들이기 위해 사용
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
	value(&n1, &n2);	// & : 부여된 값이 아닌 해당 값이 존재하는 주소를 표현
	cout << "after n1= " << n1 << endl;
	cout << "after n2= " << n2 << endl;
	cout << "after *n1= " << n1 << endl;
	cout << "after *n2= " << n2 << endl;
}*/

//실인수, 가인수, 리턴 모두 없는 경우
/*char mun;	//실인수, 가인수를 사용하지 않을때는 전역변수를 사용 - but, 메모리의 부하를 줄수 있다.
void dae() {
	mun = mun - 32;
	cout << mun << endl;
}

void main() {
	cout << "알파벳을 입력하세요. : ";
	cin >> mun;
	dae();
}*/

//실인수, 가인수 있고 리턴 없는 경우
/*char mun, alp;	//실인수, 가인수를 사용하지 않을때는 전역변수를 사용 - but, 메모리의 부하를 줄수 있다.
void dae(char alp) {
	alp = alp - 32;
	cout << alp << endl;
}

void main() {
	cout << "알파벳을 입력하세요. : ";
	cin >> mun;
	dae(mun);
}*/

//실인수, 가인수 없고 리턴 있는 경우
/*char mun, alp;	//실인수, 가인수를 사용하지 않을때는 전역변수를 사용 - but, 메모리의 부하를 줄수 있다.
char dae() {
	mun = mun - 32;
	return mun;
}

void main() {
	cout << "알파벳을 입력하세요. : ";
	cin >> mun;
	alp=dae();
	cout << alp << endl;
}*/

//실인수, 가인수, 리턴 모두 있는 경우
/*char mun, alp, res;	//실인수, 가인수를 사용하지 않을때는 전역변수를 사용 - but, 메모리의 부하를 줄수 있다.
char dae(char alp) {
	alp = alp - 32;
	return alp;
}

void main() {
	cout << "알파벳을 입력하세요. : ";
	cin >> mun;
	res=dae(mun);
	cout << res << endl;
}*/


