#include <iostream>
#include <string>
using namespace std;

//Function Testing
void myFunctionTest() {
    cout << "Function testing";
}
int myFunctionTest2(int x)
{
    return x*x;
}
//Class Testing
class myClassTest1 {
    private:
		string SecretString = "Secret word!";
    public:
     int myNum;      
     string myString;

     void myMethod() {
         cout << "Hello World! Function Call";
     }

	 string getSecretString() {
		 return SecretString;
	 }
	 string setSecretString(string newSecretString) {
		 SecretString = newSecretString;
		 return SecretString;
	 }
};
class inheritClass1 : public myClassTest1 {
public:
	string myString2;
	void myMethod2() {
		cout << "Hello World! Function Call 2";
	}
	void myMethod() {
		cout << "Hello World! Polymorphism Call 2";
	}
};


int main()
{
    //Testing first time printout and lines
    cout << "Hello World!\n";
    cout << "Making a new line \n";

    //Using variables and combining them
    int myNum1 = 5;
    char spaceHolder = ' ';
    string numResponse = "isnt that great! \n";
    cout << "Number is:" << myNum1 << spaceHolder << numResponse;

    //Using constant
    const int constantNum1 = 15;  
    //constantNum1 = 10;  // will throw an error

    // Number Input
    /*
    int inputNumber1;
    cout << "Type a number: "; 
    cin >> inputNumber1;
    cout << "Your number is: " << inputNumber1 << "\n"; 
    */

    // C++ String Concatenation
    string HelloCombination = "Hello ";
    string WorldCombination = "World";
    string ComboWords = HelloCombination + WorldCombination;
    cout << ComboWords << "\n";

    // String Accessing
    cout << "\n";
    cout << HelloCombination[3] << HelloCombination[4] << HelloCombination[3] << "\n";

    // Math Operator usage
    cout << "\n";
    int MathOperator1 = constantNum1 * 5 / 2 + 5;
    MathOperator1 += 5;
    cout << MathOperator1 << "\n";

    // Math comparison
    int mComparison1 = 10;
    int mComparison2 = 5;
    cout << (mComparison1 > mComparison2) << "\n";
    cout << (mComparison1 == mComparison2) << "\n";

    cout << (mComparison1 > 6 || mComparison2 < 4) << "\n";

    cout << "\n";

    //Get line
    /*
    string LineGet1;
    cout << "Type a line of words: ";
    getline(cin, LineGet1);
    cout << "The line you wrote is: " << LineGet1;
    */

    // math functions
    cout << "\n";
    cout << sqrt(64) << "\n";
    cout << round(2.6) << "\n";
    cout << log(2) << "\n";
    
    // if statement
    cout << "\n";
    if (50 > 25) {
        cout << "50 is greater then 25!" << "\n";
    }
    
    // while function
    int whileNumber1 = 0;
    while (whileNumber1 < 3) {
        cout << "While number is: " << whileNumber1 << "\n";
        whileNumber1++;
    }

    // for loop
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << i << "\n";
    }

    // array
    cout << "\n";
    string arrayTest1[4] = { "Hello", "I", "your", "friend" };
    arrayTest1[2] = "am";

    cout << arrayTest1[2] << "\n";

    for (int i = 0; i < sizeof(arrayTest1) / sizeof(arrayTest1[0]); i++) {
        cout << arrayTest1[i] << " ";
    }
    cout << "\n";
    
   
    //Reference Variable
    string instrument = "Pizza";
    string &instrumentReference = instrument;

    cout << instrument << "\n";  // Outputs Pizza
    cout << instrumentReference << " Ref" << "\n";
    cout << &instrument;
    string* instrumentPointer = &instrument;
	cout << instrumentPointer << "\n";
	cout << *instrumentPointer << " Pointer" << "\n";

    //function testing
    cout << "\n";
	myFunctionTest();

    cout << "\n";
    cout << myFunctionTest2(5);

	//class testing
	cout << "\n";
    cout << "\n";
	myClassTest1 myObject;
	myObject.myNum = 15;
	myObject.myString = "Hello";

	cout << myObject.myNum << "\n";
	cout << myObject.myString << "\n";

	myObject.myMethod();

	cout << "\n";
    cout << "\n";

	cout << myObject.getSecretString() << "\n";
    myObject.setSecretString("New Secret Word");
	cout << myObject.getSecretString() << "\n";

    cout << "\n";
    cout << "\n";

	inheritClass1 myObject2;
    myObject2.myMethod2();
    cout << "\n";
	myObject2.myMethod();

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
