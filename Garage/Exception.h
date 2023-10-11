#pragma once
#include<iostream>
#include<string>

class CompanyNotFoundException {
private:
    std::string message;

public:
    CompanyNotFoundException(const std::string& name) : message("Company '" + name + "' not found.") {}

    const char* what() const {
        return message.c_str();
    }
};
