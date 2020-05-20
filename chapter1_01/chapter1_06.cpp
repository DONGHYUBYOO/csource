#include <iostream>
#include <iomanip>	//C++ 조정문자
#include "1.h"	//사용자가 생성한 헤더파일 적용

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

/*void main() {
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
}*/

/*void main() {
	int year;
	cout << "년도를 입력하세요. : ";
	cin >> year;
	
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
		cout << "윤년";
	}
	else {
		cout << "평년";
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
	while (i < 100) {	//99번째 이미 i++가 적용되어 100이 대입 된다.
		i++;
		sum = sum + i;
	}
	cout << "while 합계 : " << sum << endl;

	i = 1;
	sum = 0;
	do {	//실행을 하고 반복문을 돌려야 할 경우
		sum += i;
		i++;
	} while (i < 101);
	cout << "do while 합계 : " << sum << endl;

	i = 1;
	sum = 0;
	for (i = 1; i < 101; i++) {
		sum += i;
	}
	cout << "for 합계 : " << sum << endl;
}*/

/*void main() {
	int i, j;
	cout << "다중 for문" << endl;
	for (i = 1; i <= 2; i++) {
		for (j = 1; j <= 3; j++) {
			cout << "i= " << i << setw(5) << "j= " << j << endl;
		}
	}
	cout << "끝" << endl << endl;

	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
	cout << endl;

	int num;
	cout << "원하는 단을 입력하세요. : ";
	cin >> num;

	for (i = 1; i < 10; i++) {
		cout << num << " * " << i << " = " << num * i << endl;
	}
}*/

/*void main() {
	char mun;
	while (1) {
		cout << "문자를 입력하세요. : ";
		cin >> mun;
		if (mun >= 'A' && mun <= 'Z') {	//64~94 사이의 값 비교
			cout << "정상입력 입니다." << endl;
			break;
		}
		else {
			cout << "잘못 입력하셨습니다. 대문자를 입력하세요." << endl << endl;
		}
	}

	int a;
	while (1) {
		cout << "숫자를 입력하세요. : ";
		cin >> a;
		
		if (a == EOF) {	//-1
			cout << "종료됩니다." << endl << endl;
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
	cout << "for 홀수 합계 : " << bsum << "  결과가 왜 다르지?" << endl;
	cout << "for 짝수 합계 : " << asum << "  결과가 왜 다르지?" << endl << endl;

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
	cout << "do while 홀수 합계 : " << bsum << endl;
	cout << "do while 짝수 합계 : " << asum << endl << endl;

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
	cout << "while 홀수 합계 : " << bsum << endl;
	cout << "while 짝수 합계 : " << asum << endl << endl;

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
	cout << "for  합계 : " << sum << "  결과가 왜 다르지?"<< endl << endl;

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
	cout << "do while  합계 : " << sum << "  결과가 왜 다르지?" << endl << endl;

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
	cout << "while  합계 : " << sum << endl << endl;
}*/

//최대공배수, 공약수
/*void main()
{
	int u,v,m,n,GCD,LCM;
	cout << "두 숫자를 입력하세여";
	cin >> m >> n;
	m = u;
	n = v;

	while (m != n)
	{
		if (m > n) //큰 수 찾기
			m = m - n;
		else
			n = n - m;
	}
	GCM = m; //최대공약수
	LCM = (u*v) / GCM; //최대공배수
	cout << "GCD" << setw(5) << GCD << endl;
	cout << "LCM" << setw(5) << LCM << endl;
}*/

//최대공배수, 공약수
/*void main() {
	int u, v, GCD, LCM, s, l, na;
	cout << "두 수를 입력하세요. : ";
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
		cout << "최대 공약수 : " << setw(5) << GCD << endl;
		cout << "최대 공배수 : " << setw(5) << LCM << endl << endl;
	}
}*/

//알파벳 출력
/*void main() {
	char mun, alp;
	int i;
	cout << "문자를 입력하세요. : ";
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
			cout << "대문자를 입력하세요. : ";
			continue;
		}
	}
}*/