//
//  Controller.cpp
//  MiniProject
//
//  Created by Woolsey, Adam on 1/25/18.
//  Copyright © 2018 Woolsey, Adam. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    for (int index = 0; index < 10; index++)
    {
        cout << "This is the " << index << " time in the loop" << endl;
    }
}
