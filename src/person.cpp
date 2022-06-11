#include <iostream>
#include "include/person.hpp"


person::person(std::string id, std::string nama, std::string tmp, std::string jk, int dd, int mm, int yy)
		: id(id), nama(nama), jk(jk), tmp(tmp), dd(dd), mm(mm), yy(yy)
{
}

void person::setId(std::string id)
{
	this->id = id;
}

std::string person::getId() 
{
	return this->id;
}

void person::setNama(std::string nama)
{
	this->nama = nama;
}

std::string person::getNama()
{
	return this->nama;
}

void person::setJeniskelamin(std::string jk)
{
	this->jk = jk;
}

std::string person::getJeniskelamin()
{
	return this->jk;
}

void person::setTmptLahir(std::string tmp)
{
	this->tmp = tmp;
}

std::string person::getTmptLahir()
{
	return this->tmp;
}

void person::setTglLahir(int dd, int mm, int yy)
{
	this->dd = dd;
	this->mm = mm;
	this->yy = yy;
}

int person::getTglLahir()
{
	return this->dd;
}

int person::getBulanLahir()
{
	return this->mm;
}

int person::getTahunLahir()
{
	return this->yy;
}



