#include <iostream>
using namespace std;


class Obj {
	public:
		void ObjAdd(int num);
		void ObjDel(int num);
		int m_obj = 0;
};
void Obj::ObjAdd(int num) {
	cout << "Objects added in number " << num << endl;
	m_obj += num;
}
void Obj::ObjDel(int num) {
	cout << "Objects deleted in number " << num << endl;
	m_obj -= num;
}


int main() {
	Obj obj1;

	cout << "Now objects is " << obj1.m_obj << endl;
	obj1.ObjAdd(10);
	cout << "Now objects is " << obj1.m_obj << endl;
	obj1.ObjDel(6);
	cout << "Now objects is " << obj1.m_obj << endl;

	return 0;
}