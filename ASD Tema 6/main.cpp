//
//  main.cpp
//  ASD Tema 6
//
//  Created by Marius Ilie on 05/01/17.
//  Copyright © 2017 University of Bucharest - Marius Ilie. All rights reserved.
//

#include "OperationalQueue.h"

int main(int argc, const char * argv[]) {
#pragma mark COADA
    
    OperationalQueue<double> coada = *new OperationalQueue<double>();
    
    coada.push(1, -2.4);
    coada.push(2, 2);
    coada.push(1, 3);
    coada.push(1, 1.2);
    coada.push(2, 2.1);
    coada.push(3, 8);
    coada.push(2, 3.7);
    coada.push(1, 74);
    
    coada.afiseaza();
    
    while(coada.pop().isSet());
    cout << "\n\n";
    
    return 0;
}
