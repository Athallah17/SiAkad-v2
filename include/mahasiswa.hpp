#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include <iostream>
#include "include/person.hpp"

class mahasiswa : public person {
private:
	int nrp;
	std::string departemen;
	int tahunmasuk;
	int semesterke;
	int skslulus;
	float ipk;
	std::vector<float> ips;

public:
	mahasiswa(std::string id, std::string name, std::string jk, std::string tmp, int tgl, int bln , int thn,
					int nrp, std::string departemen, int tahunmasuk);

	
	void setSemester(int semesterke);
	int getSemester();


	void setSKSLulus(int skslulus);
	int getSKSLulus();

	void setNRP(int nrp);
	int getNRP();

	std::string getDepartemen();
	int getTahunMasuk();


	void hitungIPK();

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	std::vector<float> getAllIPS();
};

#endif
