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
	
	//--------- ��������� ��������� ---------

	bool operator == (const Date& obj)const&;
	bool operator != (const Date& obj)const&;
	bool operator > (const Date& obj)const&;
	bool operator < (const Date& obj)const&;
	bool operator >= (const Date& obj)const&;
	bool operator <= (const Date& obj)const&;

	//--------- ��������� ���������� ---------      

	Date& operator += (int days); //�������� days ���� � ����
	Date& operator -= (int days); //������� days ���� �� ����
	Date& operator += (float months); //�������� months ������� � ����
	Date& operator -= (float months); //������� months ������� �� ����
	Date& operator += (long years); //�������� years ��� � ����
	Date& operator -= (long years); //������� years ��� �� ����

	//--------- �������������� ��������� ---------

	Date operator + (int days)const&;
	Date operator - (int days)const&;
	Date operator + (float months)const&; //�������� months ������� � ����
	Date operator - (float months)const&; //������� months ������� �� ����
	Date operator + (long years)const&; //�������� years ��� � ����
	Date operator - (long years)const&; //������� years ��� �� ����	

	int operator-(const Date& obj)const; //���������� ���� ����� ������
	Date& operator -- (); 
	Date operator -- (int);
	Date& operator ++ ();
	Date operator ++ (int);

	friend Date operator + (int n, const Date& a);
	friend Date operator - (int n, const Date& a);

	friend ostream& operator << (ostream& os, const Date& t);
	friend istream& operator >> (istream& is, Date& t);
};


