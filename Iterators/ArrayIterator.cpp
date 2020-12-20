#include "ArrayIterator.h"

template <class T> 
ArrayIterator<T>::ArrayIterator(const T* sourceArray, int size) {
	if ( size < 0 ) {
		throw OutOfRangeException();
	}
	this->array = sourceArray;
	this->size = size;
	this->index = 0;
	this->last = size - 1;
	this->currentValue = array[index];
}

template <class T> 
ArrayIterator<T>::~ArrayIterator() {
	this->array = NULL;
	this->size = 0;
	this->index = 0;
	this->last = 0;
	this->currentValue = 0;
	delete array;
}

template <class T> 
void ArrayIterator<T>::reloadIterator() {
	this->index = 0;
	updateValue();
}

template <class T> 
void ArrayIterator<T>::previous() {
    if ( index <= 0 ) {// проверка чтобы не выскочить за границу
    	std::cout << "ERROR: You will get out of range!" << std::endl;
    	return;
    }
    index -= 1;
   	updateValue();
}   	

template <class T> 
void ArrayIterator<T>::next() {
    if ( over() ) { // проверка чтобы не выскочить за границу
   		std::cout << "ERROR: You will get out of range!" << std::endl;
    	return;
    } 
  	index += 1;
   	updateValue(); 
}

template <class T> 
void ArrayIterator<T>::operator++() { next(); }

template <class T> 
void ArrayIterator<T>::operator++(int) { operator++(); }//post increment

template <class T> 
void ArrayIterator<T>::operator--() { previous(); }

template <class T> 
void ArrayIterator<T>::operator--(int) { operator--(); }//post increment

template <class T> 
bool ArrayIterator<T>::over() {
	return index > last;
}
template <class T> 
int ArrayIterator<T>::getIndex() {
    return index;
}
template <class T> 
int ArrayIterator<T>::value() { return array[index]; }

template <class T> 
int ArrayIterator<T>::operator*() { return value(); }

template class ArrayIterator<int>; // explicit instantiation
template class ArrayIterator<bool>;
