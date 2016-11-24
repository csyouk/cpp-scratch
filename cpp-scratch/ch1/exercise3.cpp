//
//  exercise3.cpp
//  cpp-scratch
//
//  Created by Nolgong on 24/11/2016.
//  Copyright © 2016 csyouk. All rights reserved.
//

#include <iostream>
using namespace std;

void pause();        // Prototype
void just_print();

//int main(int argc, const char * argv[]) {
//    just_print();
//    return 0;
//}

void just_print(){
    cout << endl << "Dear reader, "
    << endl << "have a ";
    pause();
    cout << "!" << endl;
}

void pause(){
    cout << "Break";
}
