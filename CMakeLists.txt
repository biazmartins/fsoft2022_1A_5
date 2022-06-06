cmake_minimum_required(VERSION 3.21)
project(fsoft2022_1A_5)

set(CMAKE_CXX_STANDARD 14)

add_executable(fsoft2022_1A_5 main.cpp headers/client.h source/client.cpp source/controller.cpp source/dataConsistencyException.cpp source/MakeupStore.cpp source/ClientFile.cpp headers/ClientFile.h source/Client.cpp source/Employee.cpp source/Controllers.cpp source/Controllers.h headers/Controllers/controller.h source/Exceptions/duplicatedDataException.cpp source/Exceptions/invalidDataException.cpp source/Model/ClientFileContainer.cpp source/Model/EmployeeContainer.cpp headers/Model/ClientFile.h source/Model/Person.cpp source/Model/person.cpp mockData.cpp mockData.h mock/mockData.cpp source/Model/Workshop.cpp)
