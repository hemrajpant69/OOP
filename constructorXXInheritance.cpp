#include<iostream>
#include<string.h>
using namespace std;

class university {
protected:
    char name[50];
    char location[50];

public:
    university(char* a, char* b) {
        strcpy(name, a);
        strcpy(location, b);
    }

    void putuniversity() {
        cout << "University name: " << name << " Location: " << location << endl;
    }
};

class affilated : virtual public university {
protected:
    int noprogram;
    char add[44];
    char aname[30];

public:
    affilated(char* c, char* d, char* e, char* f, int g) : university(c, d) {
        strcpy(aname, e);
        strcpy(add, f);
        noprogram = g;
    }

    void putaffilated() {
        cout << "Name Of affiliated college: " << aname << " Address: " << add << " No. of programs: " << noprogram << endl;
    }
};

class constituent : virtual public university {
protected:
    char school[30];
    char dean[30];
    char nprogram[40];

public:
    constituent(char* h, char* i, char* j, char* k, char* l) : university(h, i) {
        strcpy(school, j);
        strcpy(dean, k);
        strcpy(nprogram, l);
    }

    void putconstituent() {
        cout << "Name of Constituent school: " << school << " Dean: " << dean << " Name of program: " << nprogram << endl;
    }
};

class student : public affilated, public constituent {
private:
    int year;
    char sname[30];
    char program[30];

public:
    student(char* m, char* n, char* o, char* p, int q, char* r, char* s, char* t, char* u, char* v, int w) :
        university(m, n), affilated(m, n, o, p, q), constituent(m, n, r, s, t) {
        strcpy(sname, u);
        strcpy(program, v);
        year = w;
    }

    void putstudent() {
        cout << "Name of student: " << sname << " Program: " << program << " Enrolled year: " << year << endl;
    }
};

int main() {
    char  z[30];
    char aa[30];
    char bb[30];
    char cc[30];
    char dd[30];
    char ee[30];
    char ff[30];
    char gg[30];
    char hh[30];
    char ii[30];
    int x, y;

    cout << "Enter name of university, location, name of affiliated college, address, no. of programs, constituent college school, dean, name of program, student name, program, enrolled year:" << endl;
    cin >> z >> aa >> bb >> cc >> x >> dd >> ee >> ff >> gg >> hh>> y;
    student s(z, aa, bb, cc, x, dd, ee, ff, gg, hh, y);
    s.putuniversity();
    s.putaffilated();
    s.putconstituent();
    s.putstudent();

    return 0;
}

