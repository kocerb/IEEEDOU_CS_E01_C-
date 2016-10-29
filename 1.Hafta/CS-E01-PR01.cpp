//
//  main.cpp
//  CS-E01-PR01
//
//  Created by Burak Koçer on 22/10/16.
//  Copyright © 2016 Burak Koçer. All rights reserved.
//

#include <iostream>
using namespace std;

const double kdv = 0.08;

int main()

{
    double fiyatYemek;
    double toplamTutar;
    
    cout << "Yemek fiyatını girin: ";
    cin >> fiyatYemek;
    
    cout << endl;
    cout << "Yemek fiyat: " << fiyatYemek <<endl;
    cout << "KDV tutarı: " << fiyatYemek * kdv << endl << endl;
    
    toplamTutar = (fiyatYemek * kdv) + fiyatYemek;
    
    cout << "Toplam tutar: " << toplamTutar << endl;
    
    return 0;
}
