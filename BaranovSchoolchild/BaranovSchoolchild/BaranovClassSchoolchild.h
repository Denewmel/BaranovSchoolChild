#pragma once
#include <iostream>
/**
	@file      BaranovClassSchoolchild.h
	@brief     ����������� ���� ������ ��������
	@copyright ����
	@author    ������� �.�.
	@date      18-12-2023
	@version   1.0.0
\par ���������� ������:
	@ref BaranovClassSchoolchild
\par �������� �����:
	@ref BaranovClassSchoolchild
*/

/// ����� �������� ���������
/** �������� ������ ��������� � ������ ������ � ���
*/

class BaranovClassSchoolchild
{
public:
	std::string surnameBaranov; ///< ������� ���������
	std::string nameBaranov; ///< ��� 
	std::string patronymicBaranov; ///< ��������
	std::string dateOfBirthBaranov; ///< ���� ��������
	std::string adressBaranov; ///< �����
	std::string phoneNumberBaranov; ///< ����� ��������
	unsigned int schoolNumberBaranov; ///< ����� �����
	unsigned int schoolClassBaranov; ///< ����� ������ � �����

	/// ����������� ������ �� ���������
	/** ������ ��������� ��� ������������� �������
	*/
	BaranovClassSchoolchild();

	/// ����������� � ����������� ���� ������� ������
	/** ������ ��������� � �������������� ��� ��������
	\param surnameBaranov ������� ������������ ���������
	\param nameBaranov ��� ������������ ���������
	\param patronymicBaranov �������� ������������ ���������
	\param dateOfBirthBaranov ���� �������� ������������ ���������
	\param adressBaranov ����� ������������ ���������
	\param phoneNumberBaranov ����� �������� ������������ ���������
	\param schoolNumberBaranov ����� ������ ������������ ���������
	\param schoolClassBaranov ����� ������ � ����� ������������ ���������
	*/
	BaranovClassSchoolchild(std::string surnameBaranov, std::string nameBaranov, std::string patronymicBaranov, std::string dateOfBirthBaranov, std::string adressBaranov, std::string phoneNumberBaranov, unsigned int schoolNumberBaranov, unsigned int schoolClassBaranov);

	/// �������� ������ ���������� �������� �����
	/* ���� �������� ���, �� ���������� ��������� �� ������
	\param schoolNameBaranov �������� �����
	*/
	void ShowSchoolchildsListWithGivenSchoolBaranov(std::string schoolNameBaranov);
	
	/// �������� ������ ���������� �������� ����� � ������
	/* ���� �������� ���, �� ���������� ��������� �� ������
	\param schoolNameBaranov �������� �����
	\param schoolClassBaranov ����� ������
	*/
	void ShowSchoolchildsListWithGivenSchoolAndClassBaranov(std::string schoolNameBaranov, unsigned int schoolClassBaranov);
	
	/// �������� ������ ���������� ��������� ������
	/* ���� �������� ���, �� ���������� ��������� �� ������
	\param cityBaranov �������� ������
	*/
	void ShowSchoolchildsListWithGivenCityBaranov(std::string cityBaranov);
	
	/// ���������� ������, ����������� �������
	~BaranovClassSchoolchild();
};