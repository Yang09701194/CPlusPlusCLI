//#pragma once

//#include <msclr\marshal_cppstd.h>

//#include <vcclr.h>
//#include <string>

#ifdef CPPCLIUTIL
#define CPPCLIUTIL_DEC __declspec(dllexport)
#else
#define CPPCLIUTIL_DEC __declspec(dllimport)
#endif
//
#ifndef CPPCLIUTIL_H
#define CPPCLIUTIL_H

#ifdef __cplusplus
extern "C"
{
#endif

	//CPPCLIUTIL_DEC typedef struct ExampleStruct
	//{
	//	ExampleStruct() //default initializer
	//		: Number(0), Message("") { }

	//	int Number;
	//	char* Message;
	//} ExampleStruct;

	//Define int returns from C# library here. Allows to easily decode them in
	//Native C/C++	
	CPPCLIUTIL_DEC char* UrlEncodeUtil(char* str); // returns int, defined above
	
#ifdef __cplusplus
}
#endif

#endif


//namespace CPPCLIUtil {
//	public ref class CPPCLIUtilCs
//	{
//		// TODO: Add your methods for this class here.
//		// C++/CLI Part 1
//		//  https://www.youtube.com/watch?v=xTRTY-fOIe8
//		public:
//			String^ UrlEncodeUtil(String^ str)
//			{
//				return System::Web::HttpUtility::UrlEncode(str);
//			}
//	};
//}
