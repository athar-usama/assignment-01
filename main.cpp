#include <iostream>
#include <cstdlib>
#include <math.h>
#include "cnumber.h"
#include "linklist.h"

using namespace std;

int main(){
    try{
        linklist l1;

        cnumber c1(4, 5);
        cnumber c2(3, -3);
        cnumber c3(4, 3);

        l1.insert_at_start(c1);
        l1.insert_at_end(c2);
        l1.insert_at_end(c3);

        l1.print();

        l1.insert_at_end(c1 + c2);

        l1.print();

        l1.insert_at_end(c1 - c3);

        l1.print();

        l1.insert_at_end(c2 * c3);

        l1.print();

        l1.delete_at_pos(4);

        l1.print();

        l1.insert_at_end(c1 / c3);

        l1.print();
    }

    catch(int a){
        cout << endl << "Error: The complex number you entered cannot be divided." << endl;
    }
}
