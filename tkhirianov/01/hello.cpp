#include <iostream>

int main()
{
    using namespace std;
    
    string name;
    int age;

    cout << "Hello, what is your name?" << endl << "> ";
    cin >> name;
    cout << "- I`m glad to see you, " << name << "!" << endl << "- How old are you?" << endl;
    cin >> age;
    cout << "- I thought you are " << age +1 << " year old. You look younger!" << endl;
    

    return 0;
}