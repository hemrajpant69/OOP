#include <iostream>
using namespace std;

class TollBooth {
private:
    unsigned int carCount;
    double cashTotal;

public:
    TollBooth() {
        carCount = 0;
        cashTotal = 0.0;
    }

    void payingCar() {
        carCount++;
        cashTotal += 5.0;
    }

    void noPayCar() {
        carCount++;
    }

    void display() {
        cout << "Total cars: " << carCount <<endl;
        cout <<"Total cash collected: "<<cashTotal<<" rupees"<<endl;
    }
};

int main() {
    TollBooth booth;

    char key;
    while (true) {
        cout<<"Press 'P' for paying car, 'N' for non-paying car, or 'Q' to quit: ";
        cin>>key;

        if (key == 'P' || key == 'p') {
            booth.payingCar();
        } else if (key == 'N' || key == 'n') {
            booth.noPayCar();
        } else if (key == 'Q' || key == 'q') {
            break;
        } else {
        cout<<"Invalid input. Please try again."<<endl;
        }
    }

    booth.display();

    return 0;
}
