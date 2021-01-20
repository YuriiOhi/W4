#include <iostream>
#include "FibonacciIterator.h"
#include <string>

using namespace std;


int main() {
	FibonacciIterator<int> seq(5);
	for ( ; !seq.over(); seq++ ) {
	    cout << *seq << endl;
	}
	for ( ; !seq.begin(); seq-- ) {
	    cout << *seq << endl;
	}

//         cout << *seq << endl;


	// seq.reloadIterator();
	// for ( ; !seq.over(); seq++ ) {
	//     cout << *seq << endl;
	// // }
	// AriProgIterator<int> seq(12, 2, 4);

	// for ( ; !seq.over(); seq++ ) {
 //        cout << *seq << endl;
 //    }


 //    for ( ; ! ( *seq <= 1 ); seq-- ) {
 //        cout << *seq << endl;
 //    }
    
	return 0;
}
//=======================================================//=======================================================


	// FileIterator<std::string> seq("task.in");

	// for ( ; !seq.over(); seq++ ) {
 //        cout << seq.value() << endl;
 //    }

    //seq.printAll();

	// cout << "Value " << seq.value() << endl;
	//  seq++;
	//  seq.printSize();

	// cout << "Value " << seq.value() << endl;
	// seq++;
	// seq.printSize();

	// cout << "Value " << seq.value() << endl;
	// seq++;
	// seq.printSize();

	// cout << "Value " << seq.value() << endl;
	// seq++;
	// seq.printSize();
	// cout << "Value " << seq.value() << endl;
	// seq.printSize();



	// cout << "Value " << seq.value() << endl;
	//  seq++;
	//  seq.printSize();

	// cout << "Value " << seq.value() << endl;
	// seq++;
	// seq.printSize();

	// cout << "Value " << seq.value() << endl;
	// seq++;
	// seq.printSize();

	// cout << "Value " << seq.value() << endl;
	// seq++;
	// seq.printSize();

	// cout << "Value " << seq.value() << endl;
	// seq++;
	// seq.printSize();

	// cout << "Value " << seq.value() << endl;
	// seq++;
	// seq.printSize();

	// seq--;
	// cout << "Value " << seq.value() << endl;
	// seq--;
	// cout << "Value " << seq.value() << endl;
	// seq--;
	// cout << "Value " << seq.value() << endl;
	// seq--;
	// cout << "Value " << seq.value() << endl;

	// cout << "Value " << seq.value() << endl;
	// seq++;
	// seq.printSize();

	// cout << "Value " << seq.value() << endl;
	// seq++;
	// seq.printSize();

		// seq++;
	// cout << "Value " << seq.value() << endl;
	// seq++;
	// cout << "Value " << seq.value() << endl;
	// seq.reloadIterator();
	// cout << "Value " << seq.value() << endl;


//=======================================================//=======================================================


// FibonacciIterator<int> seq(0);
	// for ( ; !seq.over(); seq++ ) {
	//     cout << *seq << endl;
	// }
	// // seq.reloadIterator();
	// // for ( ; !seq.over(); seq++ ) {
	// //     cout << *seq << endl;
	// // }
	// // cout << "Value " << seq.value() << endl;
//=======================================================//=======================================================


// 	FactorialIterator<long int> seq(0, 10);
	// cout << "Value " << seq.value() << endl;
	//  seq--;
	//  	 cout << "Value " << seq.value() << endl;

	// for ( ; !seq.over(); seq++ ) {
 //        cout << *seq << endl;
 //    }
 //    seq--;
//	 cout << "Value " << seq.value() << endl;
 // seq--;
	// cout << "Value " << seq.value() << endl;
 // seq--;
	// cout << "Value " << seq.value() << endl;
 // seq--;
	// cout << "Value " << seq.value() << endl;
 // seq--;
	// cout << "Value " << seq.value() << endl;

	// seq--;
	// try {
	// 	++seq;
	// } catch (OutOfSequenceRangeException e) {
	// 	std::cout << "OutOfSequenceRangeException" << std::endl;
	// }
	// cout << "2: " << seq.value() << endl;

	// try {
	// 	seq.value();
	// } catch (OutOfSequenceRangeException e) {
	// 	std::cout << "OutOfSequenceRangeException" << std::endl;
	// }
	// seq.reloadIterator();
	// cout << "5: " << seq.value() << endl;
	// seq++;
	// cout << "6: " << seq.value() << endl;


//=======================================================//=======================================================



	// AriProgIterator<int> seq(12, 2, 4);
// 	for ( ; !seq.over(); seq++ ) {
//         cout << *seq << endl;
//     }
//     seq.reloadIterator();
//     cout << *seq << endl;

	// cout << "1 value: " << seq.value() << " Index: " << seq.getIndex() << endl;
	// seq.next();
	// cout << "2 value: " << seq.value() << " Index: " << seq.getIndex() << endl;
	// seq.next();
	// cout << "3 value: " << seq.value() << " Index: " << seq.getIndex() << endl;
	// seq++;
	// cout << "4 value: " << seq.value() << " Index: " << seq.getIndex() << endl;
	// ++seq;
	// try {
	// 	cout << "5 value: ";
	// 	seq.value();
	// 	cout<< " Index: ";
	// 	seq.getIndex();
	// } catch (OutOfSequenceRangeException e) {
	// 	std::cout << "OutOfSequenceRangeException" << std::endl;
	// }
	// cout << "6 bool: " << seq.over() << endl;
	// seq.previous();
	// cout << "7 value: " << seq.value() << " Index: " << seq.getIndex() << endl;
	// seq--;
	// cout << "8 value: " << seq.value() << " Index: " << seq.getIndex() << endl;



//=======================================================//=======================================================



//    int array[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

 //    ArrayIterator<int> seq(array, 10);

 //   	for ( ; !seq.over(); seq++ ) {
 //        cout << *seq << endl;
 //    }
	// cout << "current: " << seq.value() << endl;
	// seq.reloadIterator();
	// cout << " 1 current: " << seq.value() << endl;
	// seq.next();
	// cout << " 2 current: " << seq.value() << endl;
	// seq.next();
	// cout << " 3 current: " << seq.value() << endl;
	// seq.previous();
	// cout << " 4 current: " << seq.value() << endl;
 // 	seq.reloadIterator();
 //    ++seq;
 //    	cout << " 5 current: " << seq.value() << endl;

 //    seq++;
 //    	cout << " 6 current: " << seq.value() << endl;

 //    --seq;
 //    	cout << " 7 current: " << seq.value() << endl;

 //    seq--;
 //    	cout << " 8 -- 2 scurrent: " << seq.value() << endl;

 //    cout << seq.over() << endl;
 //    cout << seq.value() << endl;
 //    cout << *seq << endl;

// 	try {
// 		std::cout << seq.getValueOf(-1) << std::endl;
// 	} catch (BelowZeroException e) {
// 		std::cout << "BelowZeroException" << std::endl;
// 	} catch (OutOfRangeException e) {
// 		std::cout << "OutOfRangeException" << std::endl;
// 	}

//     return 0;
// }


//=======================================================//=======================================================


// GeoProgIterator<int> seq(10, 4, 10);
//  	seq--;
//  	seq.getIndex();
// 	for ( ; !seq.over(); seq++ ) {
//         cout << *seq << endl;
//     }
// 	seq--;
//  	seq.getIndex();
// 	try {
// 		++seq;
// 	} catch (OutOfSequenceRangeException e) {
// 		std::cout << "OutOfSequenceRangeException" << std::endl;
// 	}
// 	cout << "2: " << seq.value() << endl;

// 	seq++;
// 	cout << "3: " << seq.value() << endl;
// 	try {
// 		seq.value();
// 	} catch (OutOfSequenceRangeException e) {
// 		std::cout << "OutOfSequenceRangeException" << std::endl;
// 	}
// 	seq.reloadIterator();
// 	cout << "5: " << seq.value() << endl;
// 	seq++;
// 	cout << "6: " << seq.value() << endl;
//=======================================================//=======================================================



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