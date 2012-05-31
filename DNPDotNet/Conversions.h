#ifndef __CONVERSIONS_H_
#define __CONVERSIONS_H_

#include <string>

#include "CommandTypes.h"
#include <APL/CommandTypes.h>

#include "LogTypesDN.h"
#include <APL/LogTypes.h>

namespace DNPDotNet {

	class Conversions
	{
		public:
		
		// Convert a .NET string to a C++ string
		static std::string convertString(System::String^ s);

		// Convert the log filter enumeration
		static apl::FilterLevel convertFilterLevel(FilterLevelDN level);

		//functions for converting binary outputs

		static ControlCodeDN convertControlCode(apl::ControlCode code);
		static apl::ControlCode Conversions::convertControlCode(ControlCodeDN code);
		static BinaryOutputDN^ convertBO(const apl::BinaryOutput& bo);
		static apl::BinaryOutput convertBO(BinaryOutputDN^ bo);

		//functions for converting setpoints

		static SetpointEncodingTypeDN convertSetpointEncoding(apl::SetpointEncodingType encoding);
		static apl::SetpointEncodingType convertSetpointEncoding(SetpointEncodingTypeDN encoding);
	};

}

#endif
