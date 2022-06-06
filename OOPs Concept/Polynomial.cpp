#include <iostream>
#include<cmath>
using namespace std;

class Polynomial {
    private:
    int *degCoeff;
    int capacity;
    
    public:
    Polynomial() {
        capacity = 5;
        degCoeff = new int[capacity];
        degCoeff[capacity] = {0}; // initialize all to zero..
        
    }
    Polynomial(Polynomial &p) {
        int *arr = new int[capacity];
        for(int i=0; i<capacity; i++) {
            arr[i] = degCoeff[i];
        }
        delete [] degCoeff;
        degCoeff = arr;
    }
  
    void operator=(Polynomial const &p) {
        // this->capacity = p.capacity;
        // this->degCoeff[this->capacity] = {0};
        this->capacity = p.capacity;
        this->degCoeff = new int[p.capacity];
        for(int i=0; i<p.capacity; i++)
        {
            this->degCoeff[i] = p.degCoeff[i];
        }
    }
    
    void setCoefficient(int degree, int coefficient) {
        if(degree >= capacity) {   
            int *arr = new int[capacity * 2]; 
            for(int i=0; i<capacity; i++) {
                arr[i] = degCoeff[i];
            }
            for(int i=capacity; i<capacity*2; i++)
                arr[i] = 0;
            delete [] degCoeff;
            degCoeff = arr;
            capacity = capacity * 2; // double the capacity
        }
        degCoeff[degree] = coefficient;
    }
    

     Polynomial operator+(Polynomial const  &p) {
        Polynomial sum;
        int cap = max(this->capacity, p.capacity);
        sum.capacity = cap;
        sum.degCoeff[cap] ={0};
        for(int i=0; i<cap; i++)
        {
            sum.degCoeff[i] = this->degCoeff[i] + p.degCoeff[i];
        } 
        return sum;
    } 

    Polynomial operator*(Polynomial const &p) {
        Polynomial product;
        int cap = this->capacity * p.capacity;
        product.capacity = cap;
        product.degCoeff[cap] = {0};
        for(int i=0; i<this->capacity; i++)
        {
            int degree = 0; 
            int coeff = 0;
            if(this->degCoeff[i] == 0)
                continue; // don't worry if coefficient is 0
            for(int j=0; j<p.capacity; j++) 
            {
                if(p.degCoeff[j] == 0)
                    continue;
                degree = i*j;
                coeff = this->degCoeff[i] * p.degCoeff[j];
                product.degCoeff[degree] += coeff;
            }
        }
        return product;
    }

    Polynomial operator-(Polynomial const  &p) {
        Polynomial difference;
        int cap = max(this->capacity, p.capacity);
        difference.capacity = cap;
        difference.degCoeff[cap] ={0};
        for(int i=0; i<cap; i++)
        {
            difference.degCoeff[i] = this->degCoeff[i] - p.degCoeff[i];
        } 
        return difference;
    } 

    void display() {
        int counter = 0;
        for(int i=0; i<capacity; i++) {
            if(degCoeff[i] == 0) 
                continue;
            if(counter!=0 && degCoeff[i] > 0)
                    cout<<"+";  
            cout<<degCoeff[i]<<"x^"<<i;   
            counter++; 
        }
        cout<<endl;
    }
    int getCapacity() {
        return this->capacity;
    }
};

int main() {
    Polynomial p1, p2,p3, p4, p5;
    p1.setCoefficient(0, -2);
    // p1.setCoefficient(4, 3);
    p1.setCoefficient(2, 5);
    cout<<"P1 = ";
    p1.display();
    p2.setCoefficient(2, 5);
    // p2.setCoefficient(3, 3);
    p2.setCoefficient(1, 2);
    cout<<"P2 = ";
    p2.display();
    cout<<"P1 + P2 = ";
    p3 = p1+p2;
    p3.display();
    cout<<"P2 - P1 = ";
    p4 = p2-p1;
    p4.display();
    cout<<"P2 x P1 = ";
    p5 = p2*p1;
    p5.display();


    return 0;
}