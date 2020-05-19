#include <iostream>

using namespace std;
/*void main()
{
	//짝수
	int a;
	cout << "숫자를 입력하세요. : ";
	cin >> a;
	if (a % 2 == 0)
		cout << a << " 는(은) 짝수 입니다." << endl;
	else
		cout << a << "는(은) 홀수 입니다." << endl;
	
	//10의 배수
	int b;
	cout << "\n숫자를 입력하세요. : ";
	cin >> b;
	if (b % 10 == 0)
		cout << b << " 는(은) 10의 배수 입니다." << endl;
	else
		cout << b << "는(은) 10의 배수가 아닙니다." << endl;

	//숫자 10과 비교
	int c;
	cout << "\n숫자를 입력하세요. : ";
	cin >> c;
	if (c > 10)
		cout << c << " 는(은) 10보다 큰 수 입니다." << endl;
	else
		cout << c << "는(은) 10보다 작은 수 입니다." << endl;
}*/

/*void main() {
	int num1, num2;
	cout << "첫번째 수를 입력하세요. : ";
	cin >> num1;
	cout << "두번째 수를 입력하세요. : ";
	cin >> num2;
	cout << "두 수의 비교 분석 결과는 -> ";
	
	if (num1 >= num2) {	
		if (num1 == num2)
			cout << num1 << " 과 " << num2 << " 는(은) 같은 수 입니다." << endl;
		else
			cout << num1 << " 은 " << num2 << " 보다 큰 수 입니다." << endl;
	}else
		cout << num1 << " 은 " << num2 << " 보다 작은 수 입니다." << endl;	
}*/
	
/*void main() {
	int a, b, c, d;
	cout << "숫자를 입력하세요. : ";
	cin >> a;
	cout << "배수를 입력하세요. : ";
	cin >> c;
	b = c - a % c;
	d = a % c;
	if (a % c == 0)
		cout << a << " 는(은) " << c << "의 배수 입니다." << endl;
	else 
		cout << a << "는(은) " << c << "의 배수가 되려면 " << b << "만큼 더 필요합니다." << endl;
		cout << a << "는(은) " << c << "의 배수가 되려면 " << d << "만큼 덜 필요합니다." << endl;	
}*/

/*void main() {
	int num, num2, num3;
	cout << "숫자를 입력하세요. : ";
	cin >> num;
	num2 = 5 - (num % 5);
	num3 = num % 5;
	if (num % 5 == 0) {
		cout << "5의 배수 입니다.";
	}
	else {
		cout << num << "는(이) 5의 배수가 되려면 " << num2 << "만큼 필요합니다." << endl;
		cout << " 또는 " << num3 << "만큼 버려야 합니다." << endl;
	}
}*/

/*void main() {
	char ch;
	cout << "문자를 입력하세요. : ";
	cin >> ch;
	if (ch >= 'A' && ch <= 'Z') {	//64~94 사이의 값 비교
		cout << "대문자 입니다." << endl;
	}
	else if (ch >= 'a' && ch <= 'z') {
	cout << "소문자 입니다." << endl;
	}
	else {
	cout << "알파벳을 입력해주세요." << endl;
	}
}*/

/*void main() {
	int kor, eng, total;
	double avg;
	cout << "국어 점수 : ";
	cin >> kor;
	cout << "영어 점수 : ";
	cin >> eng;
	total = kor + eng;
	avg = total / 2.0;
	cout << "평균 점순 : " << avg << endl;

	if (avg <= 100 && avg > 95) {
		cout << "A+" << endl;
	}
	else if (avg > 90) {
		cout << "A" << endl;
	}
	else if (avg > 85) {
		cout << "B+" << endl;
	}
	else if (avg > 80) {
		cout << "B" << endl;
	}
	else if (avg > 75) {
		cout << "C+" << endl;
	}
	else if (avg > 70) {
		cout << "C" << endl;
	}
	else if (avg > 65) {
		cout << "D+" << endl;
	}
	else if (avg > 60) {
		cout << "D" << endl;
	}
	else if (avg <= 60) {
		cout << "F" << endl;
	}
}*/
