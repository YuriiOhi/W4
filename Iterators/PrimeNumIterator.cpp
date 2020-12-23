#include "PrimeNumIterator.h"

template <class T> 
PrimeNumIterator<T>::PrimeNumIterator(T limit) {
    if ( limit <= 0 ) {
        throw OutOfRangeException();
    }
    this->limit = limit;
    this->arrayPrime = new T[limit];
    this->index = 0;

    for ( int i = 0, number = 2; i < limit; number++ ) {
        bool isPrime = true;
        for ( int factor = 2; factor <= number / 2; factor++ ) {
            if ( number % factor == 0 && number != factor ) {
                isPrime = false;    
            }
        }
        if ( isPrime ) {
            arrayPrime[i] = number;
            i++;
        }
    }
}

template <class T>
PrimeNumIterator<T>::~PrimeNumIterator() {
    delete[]this->arrayPrime;
}

template <class T> 
void PrimeNumIterator<T>::reloadIterator() {
    this->index = 0;
}

template <class T> 
void PrimeNumIterator<T>::previous() {
    if ( index <= 0 ) {
        std::cout << "ERROR: You will get out of range!" << std::endl;
        return;
    }
    this->index -= 1;
}

template <class T> 
void PrimeNumIterator<T>::next() {
    if ( over() ) { // проверка чтобы не выскочить за границу
        std::cout << "ERROR: You will get out of range!" << std::endl;
        return;
    }
    this->index += 1;
}

template <class T> 
void PrimeNumIterator<T>::operator++() { next(); }

template <class T> 
void PrimeNumIterator<T>::operator++(int) { operator++(); }

template <class T> 
void PrimeNumIterator<T>::operator--() { previous(); }

template <class T> 
void PrimeNumIterator<T>::operator--(int) { operator--(); }

template <class T> 
bool PrimeNumIterator<T>::over() { return index >= limit; }

template <class T> 
T PrimeNumIterator<T>::value() {
    if ( over() ) {
        std::cout << "ERROR: You are out of range!" << std::endl;
        throw OutOfRangeException();
    }
    return arrayPrime[index]; 
}

template <class T> 
T PrimeNumIterator<T>::operator*() { return value(); }

template class PrimeNumIterator<long int>; // explicit instantiation
template class PrimeNumIterator<int>; // explicit instantiation
template class PrimeNumIterator<bool>;