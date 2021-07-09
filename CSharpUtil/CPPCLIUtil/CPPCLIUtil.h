
#pragma once
//
//using namespace System;
//using namespace System::Web;

// ExampleObject.h

#ifdef CPPCLIUTIL
#define CPPCLIUTIL_DEC __declspec(dllexport)
#else
#define CPPCLIUTIL_DEC __declspec(dllimport)
#endif

#ifndef CPPCLIUTIL_H
#define CPPCLIUTIL_H

#ifdef __cplusplus
extern "C"
{
#endif

	CPPCLIUTIL_DEC typedef struct ExampleStruct
	{
		ExampleStruct() //default initializer
			: Number(0), Message("") { }

		int Number;
		char* Message;
	} ExampleStruct;

	//Define int returns from C# library here. Allows to easily decode them in
	//Native C/C++
	const int EXAMPLE_PRINT_SUCCESS = 0;
	const int EXAMPLE_PRINT_ERROR_NULLOREMPTY = 1;

	CPPCLIUTIL_DEC void example_print(char* message); // returns int, defined above
	CPPCLIUTIL_DEC void example_add(int num);
	CPPCLIUTIL_DEC void example_subtract(int num);

	//Define functions that allow us to subscribe to C# events using callbacks
	CPPCLIUTIL_DEC void example_subscribe_even(void(*funcPtr)(ExampleStruct));
	CPPCLIUTIL_DEC void example_subscribe_odd(void(*funcPtr)(ExampleStruct));

#ifdef __cplusplus
}
#endif

#endif

//
//
//namespace CPPCLIUtil {
//	public ref class CPPCLIUtilCs
//	{
//		// TODO: Add your methods for this class here.
//		//  https://www.youtube.com/watch?v=xTRTY-fOIe8
//		public:
//			String^ UrlEncode2(String^ str)
//			{
//				return System::Web::HttpUtility::UrlEncode(str);
//			}
//	};
//}
