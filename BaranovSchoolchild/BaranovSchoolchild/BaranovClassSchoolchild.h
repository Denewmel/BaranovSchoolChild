#pragma once
#include <iostream>
/**
	@file      BaranovClassSchoolchild.h
	@brief     Загловочный файл класса Школьник
	@copyright ВоГУ
	@author    Баранов Д.М.
	@date      18-12-2023
	@version   1.0.0
\par Использует классы:
	@ref BaranovClassSchoolchild
\par Содержит класс:
	@ref BaranovClassSchoolchild
*/

/// Класс описания школьника
/** Содержит данные школьника и методы работы с ним
*/

class BaranovClassSchoolchild
{
public:
	std::string surnameBaranov; ///< Фамилия школьника
	std::string nameBaranov; ///< Имя 
	std::string patronymicBaranov; ///< Отчество
	std::string dateOfBirthBaranov; ///< Дата рождения
	std::string adressBaranov; ///< Адрес
	std::string phoneNumberBaranov; ///< Номер телефона
	unsigned int schoolNumberBaranov; ///< Номер школы
	unsigned int schoolClassBaranov; ///< Номер класса в школе

	/// Конструктор класса по умолчанию
	/** Создаёт школьника без инициализации свойств
	*/
	BaranovClassSchoolchild();

	/// Конструктор с заполнением всех свойств класса
	/** Создаёт школьника и инициализирует его свойства
	\param surnameBaranov Фамилия создаваемого школьника
	\param nameBaranov Имя создаваемого школьника
	\param patronymicBaranov Отчество создаваемого школьника
	\param dateOfBirthBaranov Дата рождения создаваемого школьника
	\param adressBaranov Адрес создаваемого школьника
	\param phoneNumberBaranov Номер телефона создаваемого школьника
	\param schoolNumberBaranov Номер школьы создаваемого школьника
	\param schoolClassBaranov Номер класса в школе создаваемого школьника
	*/
	BaranovClassSchoolchild(std::string surnameBaranov, std::string nameBaranov, std::string patronymicBaranov, std::string dateOfBirthBaranov, std::string adressBaranov, std::string phoneNumberBaranov, unsigned int schoolNumberBaranov, unsigned int schoolClassBaranov);

	/// Показать список школьников заданной школы
	/* Если сведений нет, то возвращает сообщение об ошибке
	\param schoolNameBaranov название школы
	*/
	void ShowSchoolchildsListWithGivenSchoolBaranov(std::string schoolNameBaranov);
	
	/// Показать список школьников заданной школы и класса
	/* Если сведений нет, то возвращает сообщение об ошибке
	\param schoolNameBaranov название школы
	\param schoolClassBaranov номер класса
	*/
	void ShowSchoolchildsListWithGivenSchoolAndClassBaranov(std::string schoolNameBaranov, unsigned int schoolClassBaranov);
	
	/// Показать список школьников заданного города
	/* Если сведений нет, то возвращает сообщение об ошибке
	\param cityBaranov название города
	*/
	void ShowSchoolchildsListWithGivenCityBaranov(std::string cityBaranov);
	
	/// Деструктор класса, освобождает ресурсы
	~BaranovClassSchoolchild();
};