#pragma once
#ifndef FILE_ITERATOR_H
#define FILE_ITERATOR_H

#include <iostream>
#include <vector>
#include <fstream>

class OutOfFileException {};
class OutOfRangeException {};

template <class T>
class FileIterator {
    private:
        std::ifstream file;
        std::vector<T>* buffer;
        const char* filename;
        T data;
        int index;
        int size;
        bool isOver;

    public:
        FileIterator(const char* filename);
        ~FileIterator();
        void reloadIterator();
        void previous();
        void next();
        void operator++();
        void operator++(int);
        void operator--();
        void operator--(int);
        void printAll();
        bool isSpace(char symbol);
        bool over();
        T value();
        T operator*();
};

#endif // FILE_ITERATOR_H