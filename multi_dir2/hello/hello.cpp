#include <iostream>
#include "hello.h"
#include "macro.h"

using namespace std;
using namespace cmake;

void Hello::sayHello() const {
	cout << "Hello!\n" << endl;
}
