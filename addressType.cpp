#include "addressType.h"
#include <iostream>

using namespace std;

void addressType::print()
{
	cout << address << endl;
	cout << city << ", " << state << " " << zipcode << endl;
}

//addressType::addressType() : address(""), city(""), state("XX"), zipcode(10000) {}

//         !!CONSTRUCTOR!!         //
addressType::addressType(string add, string cit, string st, string zip)
{
	address = add;
	city = cit;
	setState(st);
	setZipcode(zip);
}

void addressType::setState(string st)
{
	if (st.length() > 2)
	{
		state = "XX";
		cout << "State is invalid" << endl;
	}
	else
		state = st;
}

void addressType::setZipcode(std::string zip)
{
	if (zip.length() != 5 )
	{
		zipcode = "10000";
		cout << "Zipcode is invalid" << endl;
	}
	else
		zipcode = zip;
}