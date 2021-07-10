// Cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include "CPPCLIUtil.h"

//#include <msclr\marshal_cppstd.h>
#include <iostream>

int main()
{
	const char* str = "test";
	char *cstr = new char[5];
	strcpy_s(cstr, 5, str);
	std::string res = UrlEncodeUtil(cstr);
    //std::cout << "Hello World!\n"; 


}
