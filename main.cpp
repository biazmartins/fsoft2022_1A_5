#include <iostream>
#include "MakeupStore.h"
#include "mockData.h"
#include "controller.h"

using namespace std;

int main(){
    MakeupStore makeupStore ();

    mockData mock;
    mock.generateData(MakeupStore);

    Controller controller(makeupStore);
    controller.run();
    cout <<"Application has existed" << endl;
    return 0;
}
