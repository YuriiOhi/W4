// #include "ArrayIterator.h"

// template <class T> 
// ArrayIterator<T>::ArrayIterator(const T* sourceArray, int size) {
// 	if ( size < 0 ) {
// 		throw OutOfRangeException();
// 	}
// 	this->array = sourceArray;
// 	this->size = size;
// 	this->index = 0;
// 	this->last = size - 1;
// 	this->currentValue = array[index];
// }

// template <class T> 
// ArrayIterator<T>::~ArrayIterator() {
// 	this->array = NULL;
// 	delete array;
// }

// template <class T> 
// void ArrayIterator<T>::reloadIterator() {
// 	this->index = 0;
// 	updateValue();
// }

// template <class T> 
// void ArrayIterator<T>::previous() {
//     if ( index < 0 ) {// проверка чтобы не выскочить за границу
//     	std::cout << "ERROR: You will get out of range!" << std::endl;
//     	return;
//     }
//     index -= 1;
//    	updateValue();
// }   	

// template <class T> 
// void ArrayIterator<T>::next() {
//     if ( over() ) { // проверка чтобы не выскочить за границу
//    		std::cout << "ERROR: You will get out of range!" << std::endl;
//     	return;
//     } 
//   	index += 1;
//    	updateValue(); 
// }

// template <class T> 
// void ArrayIterator<T>::operator++() { next(); }

// template <class T> 
// void ArrayIterator<T>::operator++(int) { operator++(); }//post increment

// template <class T> 
// void ArrayIterator<T>::operator--() { previous(); }

// template <class T> 
// void ArrayIterator<T>::operator--(int) { operator--(); }//post increment

// template <class T> 
// bool ArrayIterator<T>::over() {
// 	if ( index > last ) {
// 		index = last;
// 		updateValue(); 
// 		return true;
// 	}
// 	return false;
// }

// template <class T> 
// T ArrayIterator<T>::getIndex() {
// 	if ( over() ) { // проверка чтобы не выскочить за границу
//    		throw OutOfRangeException();
//     }
//     return index;
// }

// template <class T> 
// T ArrayIterator<T>::value() { 
// 	if ( over() ) { // проверка чтобы не выскочить за границу
//    		throw OutOfRangeException();
//     }
//     return array[index];
// }

// template <class T> 
// T ArrayIterator<T>::operator*() { return value(); }

// template class ArrayIterator<unsigned int>;
// template class ArrayIterator<long int>;
// template class ArrayIterator<int>; 
// template class ArrayIterator<bool>;
// template class ArrayIterator<float>;
// template class ArrayIterator<double>;
// template class ArrayIterator<char>;
// template class ArrayIterator<std::string>;
