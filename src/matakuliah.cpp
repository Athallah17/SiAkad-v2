#include "include/matakuliah.hpp"

matakuliah::matakuliah( std::string nama, std::string kode, int bobot) 
    : nama(nama), kode(kode), bobot(bobot)
{
}

std::string matakuliah::getNama(){
    return this->nama;
}

std::string matakuliah::getKode(){
    return this->kode;
}

int matakuliah::getBobot(){
    return this->bobot;
}