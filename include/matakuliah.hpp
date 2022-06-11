#ifndef __MATA_KULIAH_HPP__
#define __MATA_KULIAH_HPP__

#include <iostream>

class matakuliah {
private:
    std::string nama;
    std::string kode;
    int bobot;

public:
    matakuliah(std::string nama, std::string kode, int bobot);

    std::string getNama();
    std::string getKode();
    int getBobot();

};

#endif 
