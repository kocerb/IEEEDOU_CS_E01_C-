//
//  main.cpp
//  CS-E01-PR02
//
//  Created by Burak Koçer on 22/10/16.
//  Copyright © 2016 Burak Koçer. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int x;
    double f;
    
    cout << "Bir x değeri girin: " ;
    cin >> x;
    
    f = (x + sqrt(x+3) ) / ( log(x+1) + pow( x+2 , 1/3.0) );
    
    cout << "Sonuç = " << f << endl;
    
    return 0;
}
