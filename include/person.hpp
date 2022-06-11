#ifndef __PERSON_HPP__
#define __PERSON_HPP__

#include <iostream>


class person {
private:
	std::string id;
	std::string nama;
	std::string jk;
	std::string tmp;
	int dd, mm, yy;

public:
	person(std::string id, std::string nama, std::string jk,std::string tmp,int dd, int mm, int yy);

	void setId(std::string id);
	std::string getId();

	void setNama(std::string nama);
	std::string getNama();

	void setTmptLahir(std::string tmp);
	std::string getTmptLahir();

	void setJeniskelamin(std::string jk);
	std::string getJeniskelamin();

	void setTglLahir(int dd, int mm, int yy);
	int getTglLahir();
	int getBulanLahir();
	int getTahunLahir();	
};


#endif
