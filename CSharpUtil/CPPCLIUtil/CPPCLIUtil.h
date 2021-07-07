#pragma once

using namespace System;
using namespace System::Web;

namespace CPPCLIUtil {
	public ref class CPPCLIUtilCs
	{
		// TODO: Add your methods for this class here.
		//  https://www.youtube.com/watch?v=xTRTY-fOIe8
		public:
			String^ UrlEncode2(String^ str)
			{
				return System::Web::HttpUtility::UrlEncode(str);
			}
	};
}
