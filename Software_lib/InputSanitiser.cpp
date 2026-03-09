#include "pch.h"
#include "InputSanitiser.h"

InputSanitiser::InputSanitiser()
{
}

InputSanitiser::~InputSanitiser()
{
}

string InputSanitiser::sanitiseInput(string InputQuery)
{
	if (InputQuery.length() > 50 || InputQuery.length() < 3)
	{
		return "";
	}
	else {
		return InputQuery;
	}
}
