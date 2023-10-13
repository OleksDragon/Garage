#include <iostream>
#include<Windows.h>
#include "Garage.h"
#include "Date.h"
#include "Company.h"
#include "Employee.h"
#include"Vehicle.h"

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Garage garage;
    Employees employee;
    Companies company;

    employee.add_employee(new Employee("��������", "��������", "��������", 25000));
    employee.add_employee(new Employee("������", "���������", "��������", 20000));
    employee.add_employee(new Employee("����������", "��������", "��������", 20000));
    employee.add_employee(new Employee("�������", "����������", "��������", 20000));
    employee.add_employee(new Employee("�������", "��������", "��������", 15000));

    company.add_company(new Company("������", "�����������", "050123456", "��. ���������� ���� 137"));
    company.add_company(new Company("PZU", "�����������", "067235641", "��. ������� 17"));
    company.add_company(new Company("�������", "���.������", "093423615", "��. ��������� 1�"));
    company.add_company(new Company("�������", "���.������", "095523614", "��. ������ �������� 234")); 
    
    garage.add_car(Car(Vehicle("��1357��", "Mersedes"), employee.search_employee("��������"), Inspection("QW12345", company.search_company("�������"), Date(21, 10, 2022),Date(21, 10, 2023)), Insurance("QW12345", Date(1,1,2023), Date(1,1,2024), company.search_company("PZU"))));
    garage.add_car(Car(Vehicle("��5713��", "Volkswagen"), employee.search_employee("���������"), Inspection("QW12345", company.search_company("�������"), Date(21, 02, 2023),Date(21, 02, 2024)), Insurance("QW12345", Date(1,2,2023), Date(1,2,2024), company.search_company("������"))));
    garage.add_car(Car(Vehicle("��3517��", "Mersedes"), employee.search_employee("��������"), Inspection("QW12345", company.search_company("�������"), Date(21, 10, 2022),Date(21, 10, 2023)), Insurance("QW12345", Date(1,3,2023), Date(1,3,2024), company.search_company("PZU"))));
    garage.add_car(Car(Vehicle("��4523��", "Volkswagen"), employee.search_employee("����������"), Inspection("QW12345", company.search_company("�������"), Date(21, 10, 2022),Date(21, 10, 2023)), Insurance("QW12345", Date(1,1,2023), Date(1,1,2024), company.search_company("������"))));
    garage.add_car(Car(Vehicle("��7845��", "Mersedes"), employee.search_employee("��������"), Inspection("QW12345", company.search_company("�������"), Date(21, 10, 2022),Date(21, 10, 2023)), Insurance("QW12345", Date(21,10,2022), Date(21,10,2023), company.search_company("������"))));


    while (true)
    {
        int choice;
        cout << "\n\t����:\n";
        cout << "1. �������� ����������\n";
        cout << "2. ������� ����������\n";
        cout << "3. ����� ���������� �� �������\n";
        cout << "4. ����� ���� �����������\n";
        cout << "5. �������� ��������\n";
        cout << "6. ������� ��������\n";
        cout << "7. ����� �������� �� ������\n";
        cout << "8. ����� ���� ��������\n";
        cout << "9. �������� ����������\n";
        cout << "10. ������� ����������\n";
        cout << "11. ���������� � ���������� ����������\n";
        cout << "12. ���������� � ���������� �����������\n";
        cout << "13. ����� ���������� �� ��������� �����\n";
        cout << "14. ����� ���� �����������\n\n";
        cout << "0. ����� �� ���������\n";
        cout << "\n������� ���� �����: ";
        cin >> choice;
        cin.ignore();
        system("cls");

        switch (choice)
        {
        case 1: //�������� ����������
        {
            string name, last_name, speciality;
            float salary;
            cout << "������� ���: ";
            getline(cin, name);
            cout << "������� �������: ";
            getline(cin, last_name);
            cout << "������� �������������: ";
            getline(cin, speciality);
            cout << "������� ��������: ";
            cin >> salary;
            cin.ignore();

            employee.add_employee(new Employee(name, last_name, speciality, salary));
            cout << "\n��������� ��������!\n\n";
            system("pause");
            system("cls");
            break;
        }
        case 2: // ������� ����������
        {
            string name, last_name;
            cout << "������� ���: ";
            getline(cin, name);
            cout << "������� �������: ";
            getline(cin, last_name);
            employee.del_employee(name, last_name);
            cout << "\n��������� ������!\n\n";
            system("pause");
            system("cls");
            break;
        }
        case 3: //����� ���������� �� �������
        {
            string last_name;
            cout << "������� �������: ";
            getline(cin, last_name);

            Employee* found_employee = employee.search_employee(last_name);

            if (found_employee != nullptr)
            {
                found_employee->show();
            }
            else
            {
                cout << "��������� �� ������.\n";
            }

            system("pause");
            system("cls");
            break;
        }
        case 4: //����� ���� �����������
        {
            employee.show_info();
            system("pause");
            system("cls");
            break;
        }
        case 5: // �������� ��������
        {
            string name, service, telephone, address;
            cout << "������� ��������: ";
            getline(cin, name);
            cout << "��� ������: ";
            getline(cin, service);
            cout << "������� �������: ";
            getline(cin, telephone);
            cout << "������� �����: ";
            getline(cin, address);

            company.add_company(new Company(name, service, telephone, address));
            cout << "\n�������� ���������!\n\n";
            system("pause");
            system("cls");
            break;
        }
        case 6: // ������� ��������
        {
            string name;
            cout << "Enter name: ";
            getline(cin, name);
            company.del_company(name);
            cout << "\n�������� �������!\n\n";
            system("pause");
            system("cls");
            break;
        }
        case 7: // ����� �������� �� ������
        {
            string name;
            cout << "������� �������� ��������: ";
            getline(cin, name);
            
            Company* found_company = company.search_company(name);

            if (found_company != nullptr) 
            {
                found_company->show(); // ����������� ���������� � ��������� ��������
            }
            else 
            {
                cout << "�������� � �������� '" << name << "' �� ������a." << endl;
            }
            system("pause");
            system("cls");
            break;
        }
        case 8: //����� ��� ��������
        {
            company.show_info();
            system("pause");
            system("cls");
            break;
        }
        case 9: //�������� ����������
        {
            string license_plate, name, last_name, inspection_number, insurance_number, name_company, name_insurance_company;
            int d1, d2, m1, m2, y1, y2;

            // �������� ������ �� ���������� �� ������������
            cout << "������� �������� ����: ";
            getline(cin, license_plate);
            cout << "������� �����: ";
            getline(cin, name);
            cout << "������� ������� ��������: ";
            getline(cin, last_name);
            cout << "������� ����� ������ ���.�������: ";
            getline(cin, inspection_number);
            cout << "������� �������� ��������: ";
            getline(cin, name_company);
            cout << "������� ���� ����������� ���.�������: \n";
            cout << "������� ����: ";
            cin >> d1;
            cout << "������� �����: ";
            cin >> m1;
            cout << "������� ���: ";
            cin >> y1;
            cin.ignore();
            cout << "������� ����� ���������: ";
            getline(cin, insurance_number);
            cout << "������� �������� ��������: ";
            getline(cin, name_insurance_company);
            cout << "������� ���� ������ ������: \n";
            cout << "������� ����: ";
            cin >> d2;
            cout << "������� �����: ";
            cin >> m2;
            cout << "������� ���: ";
            cin >> y2;
            cin.ignore();

            Date date_inspection(d1, m1, y1);
            Date next_inspection(d1, m1, y1 + 1);

            Company* found_company_inspection = company.search_company(name_company); // ����� ��������
            Inspection inspection;
            if (found_company_inspection != nullptr)
            {
                inspection = Inspection(inspection_number, found_company_inspection, date_inspection, next_inspection);
            }
            else
            {
                cout << "�������� '" << name_company << "' �� ������a." << endl;
            }

            Date start_policy_date(d1, m1, y1);
            Date end_policy_date(d1, m1, y1 + 1);

            Company* found_company_insurance = company.search_company(name_insurance_company); // ����� ��������
            Insurance insurance;
            if (found_company_insurance != nullptr)
            {
                insurance =  Insurance(insurance_number, start_policy_date, end_policy_date, found_company_insurance);
            }
            else
            {
                cout << "�������� '" << name_insurance_company << "' �� ������a." << endl;
            }

            // ������� ������ Vehicle
            Vehicle vehicle(license_plate, name);

            // ������� ������ Car � ��������� ��� � �����
            Employee* found_employee = employee.search_employee(last_name);
            
            if (found_employee != nullptr)
            {
                Car car(vehicle, found_employee, inspection, insurance);
                garage.add_car(car);
            }
            else
            {
                cout << "��������� � �������� " << last_name << " �� ������." << endl;
            }
            break;
        }
        case 10: //������� ����������
        {
            string license_plate;
            cout << "Enter license plate of the car to remove: ";
            getline(cin, license_plate);
            garage.remove_car(license_plate);
            cout << "\n���������� ������!\n\n";
            system("pause");
            system("cls");
            break;
        }
        case 11: // ���������� � ���������� ����������
        {
            vector<Car> expiring_insurance_cars = garage.find_cars_with_expiring_insurance();
            if (expiring_insurance_cars.empty()) 
            {
                cout << "������ � ���������� ���������� �� �������.\n";
            }
            else 
            {
                cout << "���������� � ���������� ����������:\n";
                for (const auto& car : expiring_insurance_cars) 
                {
                    car.show_car_info();
                }
            }
            system("pause");
            system("cls");            
            break;
        }
        case 12: // ���������� � ���������� �����������
        {            
            vector<Car> expiring_inspection_cars = garage.find_cars_with_expiring_tech_inspection();
            if (expiring_inspection_cars.empty()) 
            {
                cout << "����� � ���������� ����������� �� ����������.\n";
            }
            else 
            {
                cout << "���������� � ���������� �����������:\n";
                for (const auto& car : expiring_inspection_cars) 
                {
                    car.show_car_info();
                }
            }
            system("pause");
            system("cls");
            break;
        }
        case 13: // ����� ������ �� ��������� �����
        {            
            string license_plate;
            cout << "������� ����� ����������: ";
            getline(cin, license_plate);
            Car* foundCar = garage.find_car_by_license_plate(license_plate);
            if (foundCar != nullptr) 
            {
                foundCar->show_car_info();
            }
            else 
            {
                std::cout << "\n���������� �� ������!\n";
            }
            system("pause");
            system("cls");
            break;
        }
        case 14: //����� ���� �����������
        {
            garage.show_all_cars();
            system("pause");
            system("cls");
            break;
        }        
        case 0: 
        {
            return 0;
        }
        default: {
            cout << "\n�������� �����. ����������, ���������� ��� ���.\n";
            break;
        }
        }
    }
    return 0;
}