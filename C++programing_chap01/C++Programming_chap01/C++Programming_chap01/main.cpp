#include<iostream>
using namespace std;
/*
* #include && namespace
* #include<iostream> => <iostream>�� �ִ� �ڵ带 ����ϱ� ���� ���
*						���� class�� ȣ���� ���� #include�� ���
* namespace => ���� �ٸ� class���� ���� �޼��尡 �ִ� ��� �浹�� �߻�
*			   �Լ� �տ� �̸��� �ٿ� ȥ���� ���� ���� ��� namespace{...}�� ����
*			   using namespace�� ���� using name::...���� �� �ᵵ ��� X
* 
* ���� && �޼���
* ���� => ���� �� �ִ� ��, ���� ���� Ÿ���� ����
* �޼��� => �Լ�,.������ ������ ���� ���� ����� ����
* 
* class && struct
* class => ��ü ������ �ٽ�, ĸ��ȭ�� ����� �� �� ������ 
* struct => class�� ����, but ����Ʈ ���� ������ �ٸ�
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
		cout << "���ϴ� class ����(1~3)>>";
		int choice;
		cin >> choice;
		if (choice == 1) {
			hw.show();
		}
		else if (choice == 2) {
			AS.show01();
		}
		else if (choice == 3) {
			cout << " ���α׷��� �����մϴ�." << endl;
		}
		else cout << "�߸��� �Է��Դϴ�." << endl;
	}
}