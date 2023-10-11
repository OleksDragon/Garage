#pragma once
#include<iostream>
#include<ctime>

using namespace std;

class Date
{
	int day;
	int month;
	int year;

	bool isleapyear()const;
	int monthdays()const;

	void nextDate();
	void prevDate();

public:
	Date();
	Date(int day, int month, int year);

	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);

	int getDay()const;
	int getMonth()const;
	int getYear()const;

	bool valid()const;

	void showInfo()const;
	
	//--------- ќѕ≈–ј“ќ–џ —–ј¬Ќ≈Ќ»я ---------

	bool operator == (const Date& obj)const&;
	bool operator != (const Date& obj)const&;
	bool operator > (const Date& obj)const&;
	bool operator < (const Date& obj)const&;
	bool operator >= (const Date& obj)const&;
	bool operator <= (const Date& obj)const&;

	//--------- ќѕ≈–ј“ќ–џ ѕ–»—¬ќ≈Ќ»я ---------      

	Date& operator += (int days); //добавить days дней к дате
	Date& operator -= (int days); //вычесть days дней из даты
	Date& operator += (float months); //добавить months мес€цев к дате
	Date& operator -= (float months); //вычесть months мес€цев из даты
	Date& operator += (long years); //добавить years лет к дате
	Date& operator -= (long years); //вычесть years лет из даты

	//--------- ј–»‘ћ≈“»„≈— »≈ ќѕ≈–ј“ќ–џ ---------

	Date operator + (int days)const&;
	Date operator - (int days)const&;
	Date operator + (float months)const&; //добавить months мес€цев к дате
	Date operator - (float months)const&; //вычесть months мес€цев из даты
	Date operator + (long years)const&; //добавить years лет к дате
	Date operator - (long years)const&; //вычесть years лет из даты	

	int operator-(const Date& obj)const; //количество дней между датами
	Date& operator -- (); 
	Date operator -- (int);
	Date& operator ++ ();
	Date operator ++ (int);

	friend Date operator + (int n, const Date& a);
	friend Date operator - (int n, const Date& a);

	friend ostream& operator << (ostream& os, const Date& t);
	friend istream& operator >> (istream& is, Date& t);
};


