#include "PrimeNumIterator.h"

template <class T> 
PrimeNumIterator<T>::PrimeNumIterator(const T limit) {
    if ( limit <= 0 ) {
        throw OutOfRangeException();
    }
    this->primeNumbers = new std::vector<T>();
    this->limit = limit;
    this->currentPrimeNumber = 1;
    this->index = 0;
    this->currentHighest = 1;
    addPrimeNumber();
}

template <class T>
PrimeNumIterator<T>::~PrimeNumIterator() {
    primeNumbers->clear();
}

template <class T> 
void PrimeNumIterator<T>::reloadIterator() {
    this->index = 0;
}

template <class T> 
void PrimeNumIterator<T>::previous() {
    this->index -= 1;
}

template <class T> 
void PrimeNumIterator<T>::next() {
    if ( currentHighest > currentPrimeNumber ) {
        this->index += 1;
    }
    this->index += 1;
    this->currentPrimeNumber += 1;
    this->currentHighest += 1;

    addPrimeNumber();
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
bool PrimeNumIterator<T>::over() {
    if ( currentPrimeNumber < 1 ) {
        throw OutOfRangeException();
    }
    return false;
}

template <class T> 
bool PrimeNumIterator<T>::isPrime(const T number) {
    for ( int factor = 2; factor <= number / 2; factor++ ) {
        if ( number % factor == 0 && number != factor ) {
            return false;
        }
    }
    return true;
}

template <class T>
T PrimeNumIterator<T>::prime(const T sequenceNumber) {
    T number;
    int counter = 2;
        
    if ( sequenceNumber < 1 ) {
        throw OutOfRangeException();
    }
    if ( sequenceNumber == 1 ) {
        number = 2;
        return number;
    }
    if ( sequenceNumber == 2 ) {
        number = 3;
        return number;
    }

    for ( number = 3; counter < sequenceNumber; ) {
        number += 1;
        if ( isPrime(number) == true ) {
            counter += 1;
        }
    }
    return number;
}

template <class T> 
T PrimeNumIterator<T>::value() {
    if ( over() ) {
        throw OutOfRangeException();
    }
    return primeNumbers->at(index); 
}

template <class T> 
T PrimeNumIterator<T>::operator*() { return value(); }

template class PrimeNumIterator<long int>; // explicit instantiation
template class PrimeNumIterator<int>; // explicit instantiation

