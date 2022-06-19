#ifndef HEADERS_VIEWS_VIEW_H
#define HEADERS_VIEWS_VIEW_H


#include <string>
#include "Utils.h"
#include "invalidDataException.h"
#include <iostream>
#include <list>

using namespace std;
class View{
public:
    View();
    int menuMakeupStore();
    int menuClientFile();
    int menuEmployees();
    int menuWorkshop();

};

#endif //HEADERS_VIEWS_VIEW_H
