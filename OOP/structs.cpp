#include <iostream>


struct student {
    std::string name;
    double gpa;
    bool enrolled;
};
int main(){
    // struct = A structure supplies a group  that related variables under one name that group related variables under one name
                // structs can contain many different data types (string, int, double, bool, etc.)
                //     variables in a struct are known as "members"
                //     members can be access with . "Class Member Access  Operator"
    

    student student1;
    student1.name = "Mehmet";
    student1.gpa = 98.7;
    student1.enrolled = false;
    
    student student2;
    student2.name = "Kemal";
    student2.gpa = 91.3;
    student2.enrolled = true;
    
    student student3;
    student3.name = "Semih";
    student3.gpa = 89.6;
    student3.enrolled = false;
    
    std::cout << student1.name << std::endl;
    std::cout << student1.gpa << std::endl;
    std::cout << student1.enrolled << std::endl;
    std::cout<<"*****************************"<<std::endl;
    std::cout << student2.name << std::endl;
    std::cout << student2.gpa << std::endl;
    std::cout << student2.enrolled << std::endl;
    std::cout<<"*****************************"<<std::endl;
    std::cout << student3.name << std::endl;
    std::cout << student3.gpa << std::endl;
    std::cout << student3.enrolled << std::endl;
    
    

    return 0;
}

    
