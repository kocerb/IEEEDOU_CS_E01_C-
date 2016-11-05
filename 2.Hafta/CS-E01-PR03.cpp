//
//  main.cpp
//  CS-E01-PR03
//
//  Created by Burak Koçer on 22/10/16.
//  Copyright © 2016 Burak Koçer. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int x;
    cout << "Bir sayı girin: ";
    cin >> x;
    
    if ( (x/2 * 2) == x )
    {
        cout << x << " çift sayıdır." << endl;
    }
        
    else if ( (x/2 * 2) != x )
    {
        cout << x << " tek sayıdır." << endl;
    }
    
    return 0;
}
