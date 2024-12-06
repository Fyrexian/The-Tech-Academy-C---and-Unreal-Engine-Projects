#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
    string breed;
    string color;
    double height;
    double weight;

    void shake() {
        cout << breed << " is shaking hands!" << endl;
    }

    void sit() {
        cout << breed << " is sitting down!" << endl;
    }

    void laydown() {
        cout << breed <<  " is laying down!" << endl;
    }
};

int main()
{
    // Create an instance of the Dog class
    Dog myDog;

    // Set the properties of the dog
    myDog.breed = "Hound";
    myDog.color = "Brown";
    myDog.height = 2;
    myDog.weight = 60;

    // Print the dog's information
    cout << "Breed: " << myDog.breed << endl;
    cout << "Color: " << myDog.color << endl << endl;
    cout << "Height: " << myDog.height << " feet" << endl;
    cout << "Weight: " << myDog.weight << " pounds" << endl << endl;
	myDog.shake();
	myDog.sit();
	myDog.laydown();

    return 0;
}
