#include<iostream>
using namespace std;
/*
* #include && namespace
* #include<iostream> => <iostream>에 있는 코드를 사용하기 위해 사용
*						이후 class를 호출할 때도 #include를 사용
* namespace => 서로 다른 class에서 같은 메서드가 있는 경우 충돌이 발생
*			   함수 앞에 이름을 붙여 혼동을 막기 위해 사용 namespace{...}로 선언
*			   using namespace를 사용시 using name::...으로 안 써도 상관 X
* 
* 변수 && 메서드
* 변수 => 변할 수 있는 값, 여러 가지 타입이 존재
* 메서드 => 함수,.변수를 가지고 여러 가지 기능을 수행
* 
* class && struct
* class => 객체 지향의 핵심, 캡슐화와 상속을 할 수 있으며 
* struct => class와 동일, but 디폴트 접근 지정이 다름
*/

#include "ArraySort.h"
class HellowWorld {
	string first = "Hellow,World!!";
public:
	void show() {
		cout << first << endl;
	}
};

int main() {
	while (true) {
		HellowWorld hw;
		ArraySort AS(10);
		cout << "원하는 class 선택(1~3)>>";
		int choice;
		cin >> choice;
		if (choice == 1) {
			hw.show();
		}
		else if (choice == 2) {
			AS.show01();
		}
		else if (choice == 3) {
			cout << " 프로그램을 종료합니다." << endl;
		}
		else cout << "잘못된 입력입니다." << endl;
	}
}