#include <iostream>	//C++ 입출력

using namespace std;
//삼항연산자
/*void main()
{
	int a, b;
	cout << "첫번째 숫자를 입력하세요 : ";
	cin >> a;
	cout << "두번째 숫자를 입력하세요 : ";
	cin >> b;
	cout << "a=" << a <<"   "<< "b=" << b << endl;
	cout << "더 큰수 : ";
	a > b ? cout << a << "이(가) 더 크다" << endl : cout << b << "이(가) 더 크다" << endl;
}*/

/*void main()
{
	int a, b, c, max, min;
	cout << "첫번째 숫자를 입력하세요 : ";
	cin >> a;
	cout << "두번째 숫자를 입력하세요 : ";
	cin >> b;
	cout << "세번째 숫자를 입력하세요 : ";
	cin >> c;
	max = ((a > b) && (a > c)) ? a : ((b > a) && (b > c)) ? b : c;
	min = ((a < b) && (a < c)) ? a : ((b < a) && (b < c)) ? b : c;
	//max = (a > b) ? ((a > c) ? a : c) : (b > c ? b : c);
	//min = (a < b) ? ((a < c) ? a : c) : (b < c ? b : c);
	//a > (b > c ? max = b : max = c) ? max = a : max;
	//a < (b < c ? min = b : min = c) ? min = a : min;
	cout << "MAX= " << max << endl;
	cout << "MIN= " << min << endl;	
}*/

/*void main()
{
	int n5, n4, n3, n2, n1, n;
	cout << "다섯자리 수를 입력 하세요. : ";
	cin >> n;
	n5 = n / 10000;
	n4 = n % 10000 / 1000;
	n3 = n % 1000 / 100;
	n2 = n % 100 / 10;
	n1 = n % 10 / 1;
	cout << "\n만의 자리 : " << n5 << endl;
	cout << "천의 자리 : " << n4 << endl;
	cout << "백의 자리 : " << n3 << endl;
	cout << "십의 자리 : " << n2 << endl;
	cout << "일의 자리 : " << n1 << endl;
	cout << "입력하신 수 " << n << " 과 동일 합니다.";
}*/

/*void main()
{
	int n7, n6, n5, n4, n3, n2, n1, n;
	cout << "다섯자리 수를 입력 하세요. : ";
	cin >> n;
	n7 = n / 10000;
	n = n - n7 * 10000;
	n6 = n / 5000;
	n = n % 5000;
	n5 = n / 1000;
	n = n % 1000;
	n4 = n / 500;
	n = n % 500;
	n3 = n / 100;
	n = n % 100;
	n2 = n / 10;
	n = n % 10;
	n1 = n / 1;
	cout << "\n만원짜리 : " << n7 << "개" << endl;
	cout << "오천원짜리 : " << n6 << "개" << endl;
	cout << "천원짜리 : " << n5 << "개" << endl;
	cout << "오백원짜리 : " << n4 << "개" << endl;
	cout << "백원짜리 : " << n3 << "개" << endl;
	cout << "십원짜리 : " << n2 << "개" << endl;
	cout << "일원짜리 : " << n1 << "개" << endl;
}*/
