#include "FactorialIterator.h"

template <class T> 
FactorialIterator<T>::FactorialIterator(T number, T limit) {
        if ( number < 0 ) {
            throw OutOfRangeException();
        }
        this->initial = number;
        this->number = number;
        this->limit = limit;
        this->factorial = 1;
}

template <class T> 
FactorialIterator<T>::~FactorialIterator() {
}

template <class T> 
void FactorialIterator<T>::reloadIterator() {
    this->number = initial;
    calculateFactorial();
}

template <class T> 
void FactorialIterator<T>::previous() {
    if ( number <= 0 ) {// проверка чтобы не выскочить за границу
        std::cout << "ERROR: You will get out of range!" << std::endl;
        return;
    }
    number -= 1;
    calculateFactorial();
}       

template <class T> 
void FactorialIterator<T>::next() {
    if ( over() ) { // проверка чтобы не выскочить за границу
        std::cout << "ERROR: You will get out of range!" << std::endl;
        return;
    } 
    number += 1;
    calculateFactorial(); 
}

template <class T> 
void FactorialIterator<T>::operator++() { next(); }

template <class T> 
void FactorialIterator<T>::operator++(int) { operator++(); }//post increment

template <class T> 
void FactorialIterator<T>::operator--() { previous(); }

template <class T> 
void FactorialIterator<T>::operator--(int) { operator--(); }//post increment

template <class T> 
bool FactorialIterator<T>::over() { return number > limit; }

template <class T> 
T FactorialIterator<T>::value() { return factorial; }

template <class T> 
T FactorialIterator<T>::operator*() { return value(); }

template class FactorialIterator<long int>; // explicit instantiation
template class FactorialIterator<int>; // explicit instantiation
template class FactorialIterator<bool>;
