#include <iostream>
using namespace std;

class Theory {
    int TheoryMarks;

public:
    void getdata() {
        cout << "Enter Marks Obtained In Theory" << endl;
        cin >> TheoryMarks;
    }

    friend class Marks; // Declare Marks class as a friend
};

class Practical {
    int PracticalMarks;

public:
    void getdata() {
        cout << "Enter Marks obtained in practical" << endl;
        cin >> PracticalMarks;
    }

    friend class Marks; // Declare Marks class as a friend
};

class Marks {
    int TotalMarks;

public:
    void CalculateXDisplay(Practical p, Theory t);
};

void Marks::CalculateXDisplay(Practical p, Theory t) {
    TotalMarks = p.PracticalMarks + t.TheoryMarks;
    cout << "Total marks Obtained = " << TotalMarks << endl;
}

int main() {
    Marks m;
    Theory t;
    Practical p;
    p.getdata();
    t.getdata();
    m.CalculateXDisplay(p, t);
    return 0;
}

