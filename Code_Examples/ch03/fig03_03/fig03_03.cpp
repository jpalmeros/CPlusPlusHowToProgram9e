// Fig. 3.3: fig03_03.cpp
// Define class GradeBook with a member function that takes a parameter,
// create a GradeBook object and call its displayMessage function.
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // function that displays a welcome message to the GradeBook user
    void displayMessage( string curseName ) const
    {
        cout << "Welcome to the grade book for\n" << curseName << "!"
            << endl;
    } // end function displayMessage
}; // end class GradeBook

// functionmain begins program execution
int main()
{
    string nameOfCourse; // string of gharacters to store the course nameOfCourse
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook

    // prompt for and input curse name
    cout << "Please enter the curse name: " << endl;
    getline( cin, nameOfCourse ); // read a curse name with blanks
    cout << endl; // output a blank line

    // call myGradeBook's displayMessage function
    // and pass nameOfCourse as an argument
    myGradeBook.displayMessage( nameOfCourse );
} // end main
