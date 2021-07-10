// Cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include "CPPCLIUtil.h"
#include <string>

//#include <msclr\marshal_cppstd.h>
#include <iostream>

int main()
{
	//const char* str = "test";
	//char *cstr = new char[5];
	//strcpy_s(cstr, 5, str);

	/*std::string str = "test";
	char *cstr = &str[0];
	std::string res = UrlEncodeUtil(cstr);*/
	//char* res = UrlEncodeUtil(cstr);
	system("chcp 65001");
	//std::cout << s;

	std::wstring str = L"ด๚ธี";
	std::wstring res = UrlEncodeUtil(str);

    std::wcout << res; 


}
