#include <iostream>
using namespace std;

// = hello world

// int main() {
//     cout << "Hello, World!";
//     return 0;
// }

// = standard in / out

// #include <iostream>
// using namespace std;

// int main()
// {
//     int age;
//     // Taking input from user and store it in variable
//     cin >> age;
    
//     // Output the entered age
//     cout << "Age entered: " << age;
//     return 0;
// }

// = identifiers

// Class Identifier
// class Student {
// public:

//     // Method Identifier
//     void show() {
        
//         // Variable Identifier
//         int marks = 90; 
//         cout << marks;
//     }
// };

// int main()
// {
//     // Object Identifier
//     Student s1; 
//     s1.show();
//     return 0;
// }

// class Student {
//     public:
//         void print(int age){
//             int marks = 90;
//             std::cout << marks << std::endl;
//         }
// };

// = loops

#include <iostream>
using namespace std;

int main() {
  
  	// For loop that starts with i = 1 and ends
  	// when i is greater than 5.
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    return 0;
}

