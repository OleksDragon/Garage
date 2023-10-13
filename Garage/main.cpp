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

    employee.add_employee(new Employee("Владимир", "Удоденко", "водитель", 25000));
    employee.add_employee(new Employee("Сергей", "Пивоваров", "водитель", 20000));
    employee.add_employee(new Employee("Константин", "Петренко", "водитель", 20000));
    employee.add_employee(new Employee("Алексей", "Дербенский", "водитель", 20000));
    employee.add_employee(new Employee("Николай", "Власенко", "водитель", 15000));

    company.add_company(new Company("Оранта", "страхование", "050123456", "ул. Полтавский шлях 137"));
    company.add_company(new Company("PZU", "страхование", "067235641", "ул. Сумская 17"));
    company.add_company(new Company("ТехЛоск", "тех.осмотр", "093423615", "пл. Кононенко 1а"));
    company.add_company(new Company("ТехЗона", "тех.осмотр", "095523614", "ул. Героев Харькова 234")); 
    
    garage.add_car(Car(Vehicle("АХ1357АХ", "Mersedes"), employee.search_employee("Удоденко"), Inspection("QW12345", company.search_company("ТехЗона"), Date(21, 10, 2022),Date(21, 10, 2023)), Insurance("QW12345", Date(1,1,2023), Date(1,1,2024), company.search_company("PZU"))));
    garage.add_car(Car(Vehicle("АХ5713ЕХ", "Volkswagen"), employee.search_employee("Пивоваров"), Inspection("QW12345", company.search_company("ТехЛоск"), Date(21, 02, 2023),Date(21, 02, 2024)), Insurance("QW12345", Date(1,2,2023), Date(1,2,2024), company.search_company("Оранта"))));
    garage.add_car(Car(Vehicle("АХ3517АС", "Mersedes"), employee.search_employee("Петренко"), Inspection("QW12345", company.search_company("ТехЗона"), Date(21, 10, 2022),Date(21, 10, 2023)), Insurance("QW12345", Date(1,3,2023), Date(1,3,2024), company.search_company("PZU"))));
    garage.add_car(Car(Vehicle("АХ4523АК", "Volkswagen"), employee.search_employee("Дербенский"), Inspection("QW12345", company.search_company("ТехЛоск"), Date(21, 10, 2022),Date(21, 10, 2023)), Insurance("QW12345", Date(1,1,2023), Date(1,1,2024), company.search_company("Оранта"))));
    garage.add_car(Car(Vehicle("АХ7845СХ", "Mersedes"), employee.search_employee("Власенко"), Inspection("QW12345", company.search_company("ТехЗона"), Date(21, 10, 2022),Date(21, 10, 2023)), Insurance("QW12345", Date(21,10,2022), Date(21,10,2023), company.search_company("Оранта"))));


    while (true)
    {
        int choice;
        cout << "\n\tМеню:\n";
        cout << "1. Добавить сотрудника\n";
        cout << "2. Удалить сотрудника\n";
        cout << "3. Найти сотрудника по фамилии\n";
        cout << "4. Вывод всех сотрудников\n";
        cout << "5. Добавить компанию\n";
        cout << "6. Удалить компанию\n";
        cout << "7. Поиск компании по услуге\n";
        cout << "8. Вывод всех компаний\n";
        cout << "9. Добавить автомобиль\n";
        cout << "10. Удалить автомобиль\n";
        cout << "11. Автомобили с истекающей страховкой\n";
        cout << "12. Автомобили с истекающим техосмотром\n";
        cout << "13. Найти автомобиль по номерному знаку\n";
        cout << "14. Вывод всех автомобилей\n\n";
        cout << "0. Выход из программы\n";
        cout << "\nВведите свой выбор: ";
        cin >> choice;
        cin.ignore();
        system("cls");

        switch (choice)
        {
        case 1: //Добавить сотрудника
        {
            string name, last_name, speciality;
            float salary;
            cout << "Введите имя: ";
            getline(cin, name);
            cout << "Введите фамилию: ";
            getline(cin, last_name);
            cout << "Введите специальность: ";
            getline(cin, speciality);
            cout << "Введите зарплату: ";
            cin >> salary;
            cin.ignore();

            employee.add_employee(new Employee(name, last_name, speciality, salary));
            cout << "\nСотрудник добавлен!\n\n";
            system("pause");
            system("cls");
            break;
        }
        case 2: // Удалить сотрудника
        {
            string name, last_name;
            cout << "Введите имя: ";
            getline(cin, name);
            cout << "Введите фамилию: ";
            getline(cin, last_name);
            employee.del_employee(name, last_name);
            cout << "\nСотрудник удален!\n\n";
            system("pause");
            system("cls");
            break;
        }
        case 3: //Найти сотрудника по фамилии
        {
            string last_name;
            cout << "Введите фамилию: ";
            getline(cin, last_name);

            Employee* found_employee = employee.search_employee(last_name);

            if (found_employee != nullptr)
            {
                found_employee->show();
            }
            else
            {
                cout << "Сотрудник не найден.\n";
            }

            system("pause");
            system("cls");
            break;
        }
        case 4: //Вывод всех сотрудников
        {
            employee.show_info();
            system("pause");
            system("cls");
            break;
        }
        case 5: // Добавить компанию
        {
            string name, service, telephone, address;
            cout << "Введите название: ";
            getline(cin, name);
            cout << "Вид услуги: ";
            getline(cin, service);
            cout << "Введите телефон: ";
            getline(cin, telephone);
            cout << "Введите адрес: ";
            getline(cin, address);

            company.add_company(new Company(name, service, telephone, address));
            cout << "\nКомпания добавлена!\n\n";
            system("pause");
            system("cls");
            break;
        }
        case 6: // Удалить компанию
        {
            string name;
            cout << "Enter name: ";
            getline(cin, name);
            company.del_company(name);
            cout << "\nКомпания удалена!\n\n";
            system("pause");
            system("cls");
            break;
        }
        case 7: // Поиск компании по услуге
        {
            string name;
            cout << "Введите название компании: ";
            getline(cin, name);
            
            Company* found_company = company.search_company(name);

            if (found_company != nullptr) 
            {
                found_company->show(); // Отображение информации о найденной компании
            }
            else 
            {
                cout << "Компания с сервисом '" << name << "' не найденa." << endl;
            }
            system("pause");
            system("cls");
            break;
        }
        case 8: //Вывод все компании
        {
            company.show_info();
            system("pause");
            system("cls");
            break;
        }
        case 9: //Добавить автомобиль
        {
            string license_plate, name, last_name, inspection_number, insurance_number, name_company, name_insurance_company;
            int d1, d2, m1, m2, y1, y2;

            // Получить данные об автомобиле от пользователя
            cout << "Введите номерной знак: ";
            getline(cin, license_plate);
            cout << "Введите марку: ";
            getline(cin, name);
            cout << "Введите фамилию водителя: ";
            getline(cin, last_name);
            cout << "Введите номер талона тех.осмотра: ";
            getline(cin, inspection_number);
            cout << "Введите название компании: ";
            getline(cin, name_company);
            cout << "Введите дату прохождения тех.осмотра: \n";
            cout << "Введите день: ";
            cin >> d1;
            cout << "Введите месяц: ";
            cin >> m1;
            cout << "Введите год: ";
            cin >> y1;
            cin.ignore();
            cout << "Введите номер страховки: ";
            getline(cin, insurance_number);
            cout << "Введите название компании: ";
            getline(cin, name_insurance_company);
            cout << "Введите дату начала полиса: \n";
            cout << "Введите день: ";
            cin >> d2;
            cout << "Введите месяц: ";
            cin >> m2;
            cout << "Введите год: ";
            cin >> y2;
            cin.ignore();

            Date date_inspection(d1, m1, y1);
            Date next_inspection(d1, m1, y1 + 1);

            Company* found_company_inspection = company.search_company(name_company); // Поиск компании
            Inspection inspection;
            if (found_company_inspection != nullptr)
            {
                inspection = Inspection(inspection_number, found_company_inspection, date_inspection, next_inspection);
            }
            else
            {
                cout << "Компания '" << name_company << "' не найденa." << endl;
            }

            Date start_policy_date(d1, m1, y1);
            Date end_policy_date(d1, m1, y1 + 1);

            Company* found_company_insurance = company.search_company(name_insurance_company); // Поиск компании
            Insurance insurance;
            if (found_company_insurance != nullptr)
            {
                insurance =  Insurance(insurance_number, start_policy_date, end_policy_date, found_company_insurance);
            }
            else
            {
                cout << "Компания '" << name_insurance_company << "' не найденa." << endl;
            }

            // Создаем объект Vehicle
            Vehicle vehicle(license_plate, name);

            // Создаем объект Car и добавляем его в гараж
            Employee* found_employee = employee.search_employee(last_name);
            
            if (found_employee != nullptr)
            {
                Car car(vehicle, found_employee, inspection, insurance);
                garage.add_car(car);
            }
            else
            {
                cout << "Сотрудник с фамилией " << last_name << " не найден." << endl;
            }
            break;
        }
        case 10: //Удалить автомобиль
        {
            string license_plate;
            cout << "Enter license plate of the car to remove: ";
            getline(cin, license_plate);
            garage.remove_car(license_plate);
            cout << "\nАвтомобиль удален!\n\n";
            system("pause");
            system("cls");
            break;
        }
        case 11: // Автомобили с истекающей страховкой
        {
            vector<Car> expiring_insurance_cars = garage.find_cars_with_expiring_insurance();
            if (expiring_insurance_cars.empty()) 
            {
                cout << "Машины с истекающей страховкой не найдены.\n";
            }
            else 
            {
                cout << "Автомобили с истекающей страховкой:\n";
                for (const auto& car : expiring_insurance_cars) 
                {
                    car.show_car_info();
                }
            }
            system("pause");
            system("cls");            
            break;
        }
        case 12: // Автомобили с истекающим техосмотром
        {            
            vector<Car> expiring_inspection_cars = garage.find_cars_with_expiring_tech_inspection();
            if (expiring_inspection_cars.empty()) 
            {
                cout << "Машин с истекающим техосмотром не обнаружено.\n";
            }
            else 
            {
                cout << "Автомобили с истекающим техосмотром:\n";
                for (const auto& car : expiring_inspection_cars) 
                {
                    car.show_car_info();
                }
            }
            system("pause");
            system("cls");
            break;
        }
        case 13: // Найти машину по номерному знаку
        {            
            string license_plate;
            cout << "Введите номер автомобиля: ";
            getline(cin, license_plate);
            Car* foundCar = garage.find_car_by_license_plate(license_plate);
            if (foundCar != nullptr) 
            {
                foundCar->show_car_info();
            }
            else 
            {
                std::cout << "\nАвтомобиль не найден!\n";
            }
            system("pause");
            system("cls");
            break;
        }
        case 14: //Вывод всех автомобилей
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
            cout << "\nНеверный выбор. Пожалуйста, попробуйте еще раз.\n";
            break;
        }
        }
    }
    return 0;
}