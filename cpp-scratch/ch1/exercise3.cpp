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

int main() {
    cout << endl << "Dear reader, "
         << endl << "have a ";
    pause();
    cout << "!" << endl;
    return 0;
}

void pause(){
    cout << "Break";
}
