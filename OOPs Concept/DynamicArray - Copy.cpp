#include <iostream>
using namespace std;

class DynamicArray {
    private:
    int *data;
    int nextIndex;
    int capacity;
    public:
    
    DynamicArray() {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;        
    }

    // Let's override the default copy constructor to avoid shallow copy
    DynamicArray(DynamicArray const &d) {
        this->data = new int[d.capacity];
        for(int i=0; i<d.capacity; i++)
        {
            this->data[i] = d.data[i];
        }
        this->capacity = d.capacity;
        this->nextIndex = d.nextIndex;
    }

    // Let's override copy assignment operator to avoid shallow copy
    void operator=(DynamicArray const &d) {
        this->data = new int[d.capacity];
        for(int i=0; i<d.capacity; i++)
        {
            this->data[i] = d.data[i];
        }
        this->capacity = d.capacity;
        this->nextIndex = d.nextIndex;
    }

    void add(int a) {
        if(nextIndex == capacity) {
            int *newData = new int[capacity * 2];
            for(int i=0; i<capacity; i++) 
            {
                newData[i] = data[i];
            }
            // let's delete the previous data
            delete []data;
            data = newData; // and poin to newdata...
            capacity = capacity * 2;
        }
        data[nextIndex] = a;
        nextIndex++;
    }

    int get(int index) {
        if(index>=nextIndex) //there are valid elements only below nextIndex
            return -1;
        return data[index];   
    }

    void insert(int index, int value) {
        if(index<nextIndex) 
            data[index] = value;
        else if(index == nextIndex)
            add(value);
        else 
            return;
    }

    void print() {
        for(int i=0; i<nextIndex; i++)
        {
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
};
int main() {
    DynamicArray d1, d3;
    d1.add(13);
    d1.add(20);
    d1.add(7);
    d1.add(19);
    d1.add(73);
    d1.add(5);
    d1.add(63);
    d1.print();
    DynamicArray d2(d1); // copy constructor is called...
    d2.insert(2, 49);  // since we implemented deep copy, 
    d1.print();  // it won't affect d1 at all
    d3 = d1; // deep copy :*
    d3.insert(0, 99);
    d1.print();
    return 0;
}