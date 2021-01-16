#include <iostream>
#include <cstdio>
#include "Date.h"

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
    try {
        this->validate(day,month,year);
    } catch ( InvalidDate e ) {
        std::cout << e.text << std::endl;
    }
}

Date::~Date() {
	std::cout << "Date destructed" << std::endl;
}

bool isLeap(int year) {
	bool isLeap = false;

	if ( year % 4 == 0 ) {
		isLeap = true;
	}
	if ( year % 100 == 0 ) {
		isLeap = false;
	}
	if ( year % 400 == 0 ) {
		isLeap = true;
	}
	return isLeap;
}

void Date::validate(int day, int month, int year) {
	if ( day < 1 || day > 31 ) {
		throw InvalidDate("Invalid day!");
	}
	if  ( month < 1 || month > 12 ) {
		throw InvalidDate("Invalid month!");
	}
	if ( year < 1582 || year > 9999 ) {
		throw InvalidDate("Invalid year!");
	}
	if ( month == 2 ) {
		if ( isLeap(year) && day > 29 ) {
			throw InvalidDate("No more than 29 days in a leap month!");
		} else if ( !isLeap(year) && day > 28 ) {
			throw InvalidDate("No more than 28 days in this month!");
		}
	} 
	if ( month == 4 || month == 6 || month == 9 || month == 11 ) {
		if ( day > 30)
			throw InvalidDate("No more than 30 days in this month!");
	}
}

int Date::getDay() const {
	return this->day;
}

int Date::getMonth() const {
	return this->month;
}

int Date::getYear() const {
	return this->year;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
	out << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << std::endl;
	return out;
}

// Написать класс для обработки дат. Дата принимает 3 параметра: день, месяц и год.
// При этом входящие параметры необходимо проверить на соответствие требованиям григорианского календаря. 
// То есть, необходимо учесть, что каждый месяц состоит из определенного количества дней, в году определенное количество месяцев, а сами годы бывают високосными.




