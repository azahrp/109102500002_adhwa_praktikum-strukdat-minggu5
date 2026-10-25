#ifndef SINGLYLIST_H_INCLUDED
#define SINGLYLIST_H_INCLUDED

#include <iostream>
using namespace std;

#define Nil NULL

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

// Membuat list kosong
void createList(List &L);

// Alokasi elemen baru dengan info = x, mengembalikan alamatnya
address alokasi(infotype x);

// Mengembalikan memori elemen P ke sistem
void dealokasi(address P);

// Menampilkan seluruh info pada list
void printInfo(List L);

// Menambah elemen P di awal list
void insertFirst(List &L, address P);

// Soal 3: mencari elemen dengan info x, mengembalikan alamatnya (Nil jika tidak ada)
address findElm(List L, infotype x);

// Soal 4: menghitung jumlah total info seluruh elemen
int sumInfo(List L);

#endif // SINGLYLIST_H_INCLUDED