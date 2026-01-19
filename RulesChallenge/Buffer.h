#ifndef BUFFER_H
#define BUFFER_H

#include <iostream>
#include <cstring>
#include <memory>

using namespace std;

class Buffer
{
public:
    // Constructor
    Buffer(const char *text)
    {
        data = new char[strlen(text) + 1];
        strcpy(data, text);
        length = strlen(data);
        cout << "Buffer Constructed with: " << data << endl;
    }

    // Copy consructor
    Buffer(const Buffer &other)
    {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
        length = other.length;
        cout << "Buffer copied: " << data << endl;
    }

    // Copy assignment operator
    Buffer &operator=(const Buffer &other)
    {
        if (this != &other)
        {
            delete[] data;
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
            length = other.length;
        }
        cout << "Buffer Copy-assigned: " << data << endl;
        return *this;
    }

    // Move constructor
    Buffer(Buffer &&other) noexcept
    {
        data = other.data;
        other.data = nullptr;
        length = other.length;
        other.length = 0;
        cout << "Buffer Moved!" << endl;
    }

    // Move assignment operator
    Buffer &operator=(Buffer &&other) noexcept
    {
        if (this != &other)
        {
            delete[] data;
            data = other.data;
            other.data = nullptr;
            other.length = 0;
            length = other.length;
        }
        cout << "Buffer Move-assigned!" << endl;
        return *this;
    }

    ~Buffer()
    {
        if (data != nullptr)
        {
            cout << "Buffer Destroyed: " << data << endl;
            delete[] data;
        }
    }

    void print()
    {
        if (data != NULL)
        {
            cout << "BUFFER CONTENT" << endl;
            cout << "Data: " << data << "\tLength: " << length << endl;
        }
        else
        {
            cout << "No data on this buffer" << endl;
        }
    }

private:
    char *data;
    int length;
};

#endif