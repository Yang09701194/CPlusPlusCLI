#include "stdafx.h"
#include <vcclr.h>
//#include <string>
#include <msclr\marshal_cppstd.h>

//#include <msclr/marshal.h>
#include "CPPCLIUtil.h"
//
//using namespace CSharpUtil;
//
using namespace System;
//using namespace msclr::interop;

//gcroot<Helper^> helperObject = gcnew Helper();

//  C++/CLI Part 1
//  https://www.youtube.com/watch?v=xTRTY-fOIe8
CPPCLIUTIL_DEC std::wstring UrlEncodeUtil(std::wstring str)
{
	//String^ res =  helperObject->UrlEncodeUtil(gcnew String(str));

	////  __declspec(dllexport) cannot accept return String^
	////  will build error, so need to convert to std::string 
	////return System::Web::HttpUtility::UrlEncode(str);

	//std::string temp = marshal_as<std::string>(res);
	//return temp;

	std::wstring str2 = L"ด๚ธี";
	String^ Str = gcnew String(str2.c_str());
	String^ res  = System::Web::HttpUtility::UrlEncode(Str);

	//https://stackoverflow.com/questions/12835924/export-c-function-from-a-c-cli-dll-that-uses-net-code
	//System::String^ result = "";
	//std::string unmanaged2 = msclr::interop::marshal_as<std::string>(res);
	std::wstring unmanaged2 = msclr::interop::marshal_as<std::wstring>(res);
	return unmanaged2;
	//return &unmanaged2[0];

	//System::Runtime::InteropServices::Marshal::StringToCoTaskMemUni("")

	
	//strcpy(output, temp.c_str());

	//msclr::interop::marshal_context context;
	//char* strValueAsCString = context.marshal_as<char*>("test");
	//// Probably bad
	//char* ansiStr = strdup(strValueAsCString);

	//return "";
	

}

//
//System::String^ ToCliString(const char* s)
//{
//	System::String ^result = marshal_as<System::String^>(s);
//	return result;
//}
//const char* ToCppString(System::String^ s)
//{
//	msclr::interop::marshal_context context;
//	const char* result = context.marshal_as<const char*>(s);
//	return result;
//}
