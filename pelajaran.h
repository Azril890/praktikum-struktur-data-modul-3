#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <string>
using namespace std;

struct pelajaran {
    string namapel;
    string kodeMapel;
};

// Function
pelajaran create_pelajaran(string namapel, string kodepel);

// Procedure
void tampil_pelajaran(pelajaran pel);

#endif