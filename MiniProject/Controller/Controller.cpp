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

int billy [] = {16, 2, 77, 40, 12071};
int n, result=0;

int array ()
{
    for ( n=0 ; n<5 ; n++ )
    {
        result += billy [n];
    }
    cout << result;
    return 0;
}

int pointer ()
{
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;
    cout << &var1 << endl;
    cout << &var2 << endl;
    cout << &var3 << endl;
}
