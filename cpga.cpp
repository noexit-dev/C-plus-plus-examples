#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

/**
 * @brief cummulative grade point average calculator
 * 
 * 
 * @return int 
 */

int main() {
    //attempt to open file
    ifstream file("single_student_4_year_grades.csv");

    if (!file.is_open()) {
        cerr << "Error: Could not open the file." << endl;
        return 1;
    }

    string line;

    // read file line by line
    while (getline(file, line)) {
        vector<string> row;
        stringstream ss(line);
        string field;

        while(getline(ss, field, ',')) {
            //only grab letter grade data with +/- as well
            // if (field == "") {

            // }

            row.push_back(field);
        }

        //format data
        for (const auto& val : row) {
            cout << "[" << val << "] ";
        }
        cout << "\n";
    }

    file.close();
    return 0;
}