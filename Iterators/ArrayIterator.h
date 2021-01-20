#pragma once
#ifndef ARRAY_ITERATOR_H
#define ARRAY_ITERATOR_H

#include <iostream>
#include <string>

class OutOfRangeException {};

template <class T>
class ArrayIterator {
    private:
    	const T *array;
        T currentValue;
        int size;
        int index;
        int last;
        
        void updateValue() {
            currentValue = array[index];
        }

    public:
        ArrayIterator(const T* sourceArray, int size) {
            if ( size < 0 ) {
                throw OutOfRangeException();
            }
            this->array = sourceArray;
            this->size = size;
            this->index = 0;
            this->last = size - 1;
            this->currentValue = array[index];
        }
        
        ~ArrayIterator() {
            this->array = NULL;
             delete array;
        }
        
        void reloadIterator()  {
            this->index = 0;
            updateValue();
        }

        void previous() {
            if ( index < 0 ) {// проверка чтобы не выскочить за границу
                std::cout << "ERROR: You will get out of range!" << std::endl;
                return;
            }
            index -= 1;
            updateValue();
        }

        void next() {
            if ( over() ) { // проверка чтобы не выскочить за границу
                std::cout << "ERROR: You will get out of range!" << std::endl;
                return;
            } 
            index += 1;
            updateValue(); 
        }
        void operator++() { next(); }

        void operator++(int)  { operator++(); }

        void operator--() { previous(); }

        void operator--(int) { operator--(); }

        bool over()  {
            if ( index > last ) {
                index = last;
                updateValue(); 
                return true;
            }
            return false;
        }

        T value()  { 
            if ( over() ) { // проверка чтобы не выскочить за границу
                throw OutOfRangeException();
            }
           return array[index];
        }
        
        T getIndex() {
            if ( over() ) { // проверка чтобы не выскочить за границу
                throw OutOfRangeException();
            }
            return index;
        }

        T operator*() { return value(); }
};

#endif // ARRAY_ITERATOR_H