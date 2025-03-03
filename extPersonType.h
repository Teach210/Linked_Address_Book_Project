#pragma once
#include "personType.h" // Include the base class header
#include "dateType.h"   // Include the header for dateType
#include "addressType.h" // Include the header for addressType

class extPersonType : public personType {
private:
    addressType address;   // Instance of addressType for address
    dateType birthDate;    // Instance of dateType for birth date
    std::string phoneNumber;
    std::string relationship;

public:

    // Default constructor
    extPersonType() : personType("", ""), address(" ", " ", "XX", "10000"), birthDate(), phoneNumber(""), relationship("") {}

    // Constructor
    extPersonType(std::string first, std::string last, int birthMonth, int birthDay, int birthYear,
        std::string addr, std::string city, std::string state, std::string zipcode,
        std::string phone, std::string relationship);

    // Setter and getter for phone number
    void setPhoneNumber(std::string phone);
    std::string getPhoneNumber() const;

    // Setter and getter for relationship
    void setRelationship(std::string relation); // Corrected parameter name here
    std::string getRelationship() const;

    // Getter for birth month
    int getBirthMonth() const;

    int getBirthDay() const;

    int getBirthYear() const;

    std::string getAddy() const;

    std::string getCity() const;

    std::string getState() const;

    std::string getZipCode() const;

    // Setters

    void setBirthDate(int m, int d, int y);

    void setAddy(std::string add);

    void setCity(std::string city);

    void setState(std::string state);

    void setZipCode(std::string zip);


    // Method to print person information
    void print() const;
};

