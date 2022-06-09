cmake_minimum_required(VERSION 3.21)
project(fsoft2022_1A_5)

set(CMAKE_CXX_STANDARD 14)


set(PROJECT_HEADERS_DIR ${PROJECT_SOURCE_DIR}/headers)

set(PROJECT_SOURCES_DIR ${PROJECT_SOURCE_DIR}/source)

set(PROJECT_MOCK_DIR ${PROJECT_SOURCE_DIR}/mock)

include_directories(
        ${PROJECT_MOCK_DIR})
set(MOCK_SOURCE_FILES
        ${PROJECT_MOCK_DIR}/mockData.h
        ${PROJECT_MOCK_DIR}/mockData.cpp)


set(PROJECT_HEADERS_CONTROLLERS_DIR
        ${PROJECT_HEADERS_DIR}/Controllers)
set(PROJECT_SOURCES_CONTROLLERS_DIR
        ${PROJECT_SOURCES_DIR}/Controllers)
include_directories(
        ${PROJECT_HEADERS_CONTROLLERS_DIR}
        ${PROJECT_SOURCES_CONTROLLERS_DIR})


set(PROJECT_HEADERS_MODEL_DIR
        ${PROJECT_HEADERS_DIR}/Model)
set(PROJECT_SOURCES_MODEL_DIR
        ${PROJECT_SOURCES_DIR}/Model)
include_directories(
        ${PROJECT_HEADERS_MODEL_DIR}
        ${PROJECT_SOURCES_MODEL_DIR})

set(MODEL_SOURCE_FILES
        ${PROJECT_HEADERS_MODEL_DIR}/ClientFile.h
        ${PROJECT_SOURCES_MODEL_DIR}/ClientFile.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/employee.h
        ${PROJECT_SOURCES_MODEL_DIR}/Employee.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Date.h
        ${PROJECT_SOURCES_MODEL_DIR}/Date.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Person.h
        ${PROJECT_SOURCES_MODEL_DIR}/person.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/Workshop.h
        ${PROJECT_SOURCES_MODEL_DIR}/Workshop.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/ClientFileContainer.h
        ${PROJECT_SOURCES_MODEL_DIR}/ClientFileContainer.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/EmployeeContainer.h
        ${PROJECT_SOURCES_MODEL_DIR}/EmployeeContainer.cpp)

add_executable(
        fsoft2022_1A_5
        main.cpp
        ${MODEL_SOURCE_FILES}
        ${CONTROLLERS_SOURCE_FILES}
        ${MOCK_SOURCE_FILES})
