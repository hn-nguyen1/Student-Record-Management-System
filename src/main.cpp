#include <iostream>
#include <fstream>
#include <string>

void readFile(){
    std::ifstream readFile("students.txt");
    std::string readName;
    int readRoll;
    int readMarks;

    std::cout << "--- Student Records ---\n";
    while (readFile >> readName >> readRoll >> readMarks){
        std::cout << readName << " " << readRoll << " " << readMarks << std::endl;
    }
    readFile.close();
}

void fileHandling(){
    std::string name{};
    int roll{};
    int marks{};

    std::cout << "Enter Name: ";
    std::cin >> name;
    std::cout << "Enter Roll Number: ";
    std::cin >> roll;
    std::cout << "Enter Marks: ";
    std::cin >> marks;

    std::ofstream file("students.txt", std::ios::app);
    if (file.is_open()){
        file << name << " " << roll << " " << marks << std::endl;
        std::cout << "Record saved successfully!\n";
    } else {
        std::cout << "Error opening file!\n";
    }
    file.close();
}

int main(){
    int choice{};
    do{
        std::cout << "1. Add Student\n"
                  << "2. Display All Students\n"
                  << "3. Exit\n"
                  << "Enter choice: ";
        std::cin >> choice;

        if(choice == 1){
            fileHandling();
        } else if (choice == 2){
            readFile();
        } else if (choice == 3){
            std::cout << "Exiting program...\n";
            break;
        } else {
            std::cout << "Enter valid choice.\n";
        }
    } while(choice != 3);

    return 0;
}
