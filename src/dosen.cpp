#include <iostream>

#include "include/dosen.hpp"


dosen::dosen(std::string id, std::string nama, std::string tmp, std::string jk, int dd, int mm, int yy, std::string npp, std::string departemen, int pendidikan)
		: person(id, nama, jk, tmp,  dd, mm, yy), npp(npp), departemen(departemen), pendidikan(pendidikan)
{
}

void dosen::setPendidikan(int pendidikan)
{
	this->pendidikan = pendidikan;
}

int dosen::getPendidikan()
{
	return this->pendidikan;
}

std::string dosen::getDepartemen()
{
	return this->departemen;
}

std::string dosen::getNPP()
{
	return this->npp;
}