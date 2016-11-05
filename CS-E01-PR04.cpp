//
//  main.cpp
//  CS-E01-PR04
//
//  Created by Burak Koçer on 22/10/16.
//  Copyright © 2016 Burak Koçer. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    double sum = 0;
    double average;
    int numOfStudent;
    
    cout << "Öğrenci sayısını girin: " ;
    
    cin >> numOfStudent;
    
    for (int i=1; i <= numOfStudent; i++)
    {
        double x;
        cout << i << ". öğrencinin notunu girin: ";
        cin >> x;
        
        if ( x >= 0 && x <= 100)
        sum = sum + x;
        // sum += x  da yazılabilir.
        
        else
        {
            cout << "HATALI NOT GİRİŞİ" << endl;
            i = i - 1;
        	// i-- da yazılabilir.
        }
        
    }
    
    average = sum / numOfStudent;
    
    cout << "Sınıf not ortalaması: " << average << endl;
    
    return 0;
}
