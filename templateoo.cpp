#include<iostream>
using namespace std;

template<class T>
class Array {
    private:
        T sum;

    public:
        Array() : sum(0) {}

        T calculate(T a[], int size) {
            sum = 0;
            for(int i = 0; i < size; i++) {
                sum += a[i];    
            }
            return sum;
        }
};

int main() {
    int n;
    int b[30];
    float c[30];

    cout << "Enter Size of an array:" << endl;
    cin >> n;

    Array<int> s1;
    cout << "Enter Value of array of integer types:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int sumo = s1.calculate(b, n);

    Array<float> s2;
    cout << "Enter value of Array Of float Type:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }
    float summ = s2.calculate(c, n);

    cout << "Value of sum of Integer Array = " << sumo << endl;
    cout << "Value of Sum of Float Array = " << summ << endl;

    return 0;    
}

