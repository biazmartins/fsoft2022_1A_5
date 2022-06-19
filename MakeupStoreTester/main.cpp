#include <iostream>
#include "gtest/gtest.h"
#include ".."

int main(){
    ::testing::InitGoogleTest(); //codigo para fazer os testes
    return RUN_ALL_TEST();
}