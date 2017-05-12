#include "stdafx.h"
#include <cstdlib>

int main()
{
	system("Echo I set UTF-8 in your CMD.");
	system("Echo 'chcp 65001'");
	system("chcp 65001");
	system("Echo Test:");
	system("Echo 'chcp'");
	system("chcp");
	system("PAUSE");
}