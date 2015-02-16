#include "hello/hello.h"
#include <iostream>
#include "conf/MainConfig.h"

using namespace std;
using namespace cmake;

int main()
{
	Hello *h = new Hello();
	h->sayHello();
	
	cout << "The version of main is: " << "\n\tMain_VERSION_MINOR:" << Main_VERSION_MINOR << "\n\tMain_VERSION_MAJOR:" << Main_VERSION_MAJOR << endl; 
	return 0;
}
