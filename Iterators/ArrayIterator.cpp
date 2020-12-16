#include "ArrayIterator.h"

template <class T> 
ArrayIterator<T>::ArrayIterator(T source[], int size) {
	this->array = new T[size];
	this->size = size;
	this->current = 0;

	for ( int i = 0; i < size; i++ ) {
		this->array[i] = source[i];
	}
}

template <class T> 
ArrayIterator<T>::~ArrayIterator() {
	delete[](this->array);
}

template <class T> 
void ArrayIterator<T>::reloadIterator() {
	this->current = 0;
}

template <class T> 
void ArrayIterator<T>::jumpTo(int element) {
	this->current = element;
}

template <class T> 
void ArrayIterator<T>::previous() {
    if ( current < 0 ) { // проверка чтобы не выскочить за границу
    	std::cout << "You are at the beginning!" << std::endl;
        return;
    }
    current -= 1;
}

template <class T> 
void ArrayIterator<T>::next() {
    if ( over() ) { // проверка чтобы не выскочить за границу
    	std::cout << "The sequence is over!" << std::endl;
        return;
    }
    current += 1;
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
bool ArrayIterator<T>::over() { return current > size; }

template <class T> 
int ArrayIterator<T>::value() { return array[current]; }

template <class T> 
int ArrayIterator<T>::operator*() { return value(); }

template <class T> 
int ArrayIterator<T>::getValueOf(int element) {
	int last = size - 1;
	if ( element > last ) {
		throw OutOfRangeException();
	} else if ( element < 0 ) {
		throw BelowZeroException();
	} 
	return array[element];
}

template class ArrayIterator<int>; // explicit instantiation
template class ArrayIterator<bool>;
