// Fig. 3.11: GradeBook.h
// GradeBook class definition. This file presents GradeBook's public
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp.
#include <string> // class GradeBook uses C++ standard string class

// GradeBook class definition
class GradeBook
{
private:
    std::string courseName; // course name for this GradeBook

public:
    explicit GradeBook( std::string ); // constructor initialize courseName
    void setCourseName( std::string ); // sets the course name
    std::string getCourseName() const; // gets the course name
    void displayMessage() const;       // display a welcome message
}; // end class GradeBook
