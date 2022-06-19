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
set(CONTROLLERS_SOURCE_FILES
        ${PROJECT_HEADERS_CONTROLLERS_DIR}/controller.h
        ${PROJECT_SOURCES_CONTROLLERS_DIR}/controller.cpp)

set(PROJECT_HEADERS_EXCEPTIONS_DIR
        ${PROJECT_HEADERS_DIR}/Exceptions)

set(PROJECT_SOURCES_EXCEPTIONS_DIR
        ${PROJECT_SOURCES_DIR}/Exceptions)

include_directories(
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}
        ${PROJECT_SOURCES_EXCEPTIONS_DIR})

set(EXCEPTIONS_SOURCE_FILES
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/dataConsistencyException.h
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/dataConsistencyException.cpp
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/duplicatedDataException.h
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/duplicatedDataException.cpp
        ${PROJECT_HEADERS_EXCEPTIONS_DIR}/invalidDataException.h
        ${PROJECT_SOURCES_EXCEPTIONS_DIR}/invalidDataException.cpp)

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
        ${PROJECT_HEADERS_MODEL_DIR}/WorkshopContainer.h
        ${PROJECT_SOURCES_MODEL_DIR}/WorkshopContainer.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/ClientFileContainer.h
        ${PROJECT_SOURCES_MODEL_DIR}/ClientFileContainer.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/EmployeeContainer.h
        ${PROJECT_SOURCES_MODEL_DIR}/EmployeeContainer.cpp
        ${PROJECT_HEADERS_MODEL_DIR}/MakeupStore.h
        ${PROJECT_SOURCES_MODEL_DIR}/MakeupStore.cpp)


set(PROJECT_HEADERS_VIEWS_DIR
        ${PROJECT_HEADERS_DIR}/Views)

set(PROJECT_SOURCES_VIEWS_DIR
        ${PROJECT_HEADERS_DIR}/Views)
include_directories(
        ${PROJECT_HEADERS_VIEWS_DIR}
        ${PROJECT_SOURCES_VIEWS_DIR})

set(VIEWS_SOURCE_FILES
        ${PROJECT_HEADERS_VIEWS_DIR}/Utils.h
        ${PROJECT_SOURCES_VIEWS_DIR}/Utils.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/View.h
        ${PROJECT_SOURCES_VIEWS_DIR}/View.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/ClientFileView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/ClientFileView.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/EmployeeView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/EmployeeView.cpp
        ${PROJECT_HEADERS_VIEWS_DIR}/WorkshopView.h
        ${PROJECT_SOURCES_VIEWS_DIR}/WorkshopView.cpp)

add_executable(
        fsoft2022_1A_5
        main.cpp
        ${VIEWS_SOURCE_FILES}
        ${MODEL_SOURCE_FILES}
        ${EXCEPTION_SOURCE_FILES}
        ${CONTROLLERS_SOURCE_FILES}
        ${MOCK_SOURCE_FILES})