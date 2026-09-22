#include <iostream>
#include <string>
using namespace std;

int main() {

    // Kaggle Car Dataset
    // Source: Car Details from Car Dekho

    string carName[5] = {
        "Maruti 800 AC",
        "Maruti Wagon R LXI Minor",
        "Hyundai Verna 1.6 SX",
        "Datsun RediGO T Option",
        "Honda Amaze VX i-DTEC"
    };

    int year[5] = {
        2007,
        2007,
        2012,
        2017,
        2014
    };

    int sellingPrice[5] = {
        60000,
        135000,
        600000,
        250000,
        450000
    };

    // Pointer points to the first selling price
    int *pricePtr = &sellingPrice[0];

    cout << "Kaggle Car Dataset" << endl;
    cout << "------------------------" << endl;

    // Display all 5 records
    for (int i = 0; i < 5; i++) {
        cout << carName[i]
             << " | Year: " << year[i]
             << " | Selling Price: " << sellingPrice[i]
             << endl;
    }

    cout << endl;

    // Access the first value through a pointer
    cout << "First car selling price through pointer: "
         << *pricePtr << endl;

    return 0;
}
