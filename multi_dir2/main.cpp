#include "hello/hello.h"
#include <iostream>

using namespace std;
using namespace cmake;

int main()
{
	Hello *h = new Hello();
	h->sayHello();
	return 0;
}
