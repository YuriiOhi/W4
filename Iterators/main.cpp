#include <iostream>
#include "ArrayIterator.h"

using namespace std;

int main() {
    int array[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    ArrayIterator<int> seq(array, 10);
   for ( ; !seq.over(); seq++ ) {
        cout << *seq << endl;
    }
	seq++;
  	cout << seq.value() << endl;
 	++seq;
  	cout << seq.value() << endl;
	seq++;
  	cout << seq.value() << endl; 	
  	++seq;
  	cout << seq.value() << endl;
	seq++;
  	cout << seq.value() << endl;
  	--seq;
   	cout << seq.value() << endl;
   	--seq;
  	cout << seq.value() << endl;
  	seq.reloadIterator();
	cout << seq.value() << endl;
	seq++;

	try {
		std::cout << seq.getValueOf(-1) << std::endl;
	} catch (BelowZeroException e) {
		std::cout << "BelowZeroException" << std::endl;
	} catch (OutOfRangeException e) {
		std::cout << "OutOfRangeException" << std::endl;
	}

    return 0;
}

// #include <iostream>
// #include "NaturalIterator.h"

// using namespace std;

// int main() {
//     NaturalIterator seq(10);

//     for ( ; !seq.over(); seq++ ) {
//         cout << *seq << endl;
//     }
//     cout << seq.value() << endl;

//     seq++;
//     seq.value();

//     return 0;
// }