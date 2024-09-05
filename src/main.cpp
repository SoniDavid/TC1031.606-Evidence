#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream> 

#include "../include/error.h"

using namespace std;


int main() {

    // Vector to store the Error objects
    std::vector<Error*> errorEntries;

    // Example line
    // std::string log_line = "Oct 9 10:32:24 423.2.230.77:6166 Failed password for illegal user guest";

    // Open the file, read the lines and store the information in the vector
    std::ifstream infile("../doc/bitacora1.txt");
    if (!infile.is_open()) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    // Read month and day
    std::string log_line;
    while (std::getline(infile, log_line)) {
        // Read month and day
        std::istringstream iss(log_line);
        std::string month;
        int day;
        iss >> month >> day;

        // Read time 
        std::string time_str;
        iss >> time_str;
        std::string hour, minute, second;
        std::stringstream ss(time_str);

        // Split the time_str into hour, minute, and second
        std::getline(ss, hour, ':');
        std::getline(ss, minute, ':');
        std::getline(ss, second, ':');
        // Hour time(hour, minute, second);

        // Read IP
        std::string ip_str;
        iss >> ip_str;
        std::string ipP1, ipP2, ipP3, ipP4, ipP5;
        std::stringstream ip_ss(ip_str);

        // Split the ip_str into its parts
        std::getline(ip_ss, ipP1, '.');
        std::getline(ip_ss, ipP2, '.');
        std::getline(ip_ss, ipP3, '.');
        std::getline(ip_ss, ipP4, ':');
        std::getline(ip_ss, ipP5, ':');

        // Read message
        std::vector<std::string> message;
        std::string word;
        while (iss >> word) {
            message.push_back(word);
        }

        // Creating the Error pointer object
        Error* errorEntry = new Error(month, day, hour, minute, second,
                                    ipP1, ipP2, ipP3, ipP4, ipP5,
                                    message); 

        // Store it in vector of pointers
        errorEntries.push_back(errorEntry);
    }

    /* 
    Here is where the quicksort algorithm should be implemented
    It is missing:
    - Overload comparison operators for the Error class
    - Implement the quicksort algorithm with templates 
    - Sort the vector of pointers
    */

    // Trunc is used to overwrite the file
    std::ofstream outfile("../doc/output.txt", std::ios::trunc);
    if (!outfile.is_open()) {
        cerr << "Error opening output file" << endl;
        return 1;
    } 

    // Save error in the output file
    for (auto entry : errorEntries) {
        outfile << entry->getError() << endl;
        entry->printError();
    }
    
    // Delete objects
    for (auto entry : errorEntries) {
        delete entry;
    }


    return 0;
}