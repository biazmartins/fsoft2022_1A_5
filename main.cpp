#include <iostream>
#include "MakeupStore.h"

#include "mockData.h"
#include "Controller.h"
//comentario
using namespace std;

int main(){
    MakeupStore makeupStore ();

    mockData mock;
    mock.generateData(makeupStore);

    Controller controller(makeupStore);
    controller.run();
    cout <<"Application has existed" << endl;
    return 0;
}
