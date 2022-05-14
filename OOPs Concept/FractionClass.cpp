#include <iostream>
using namespace std;

class Fraction {
    private:
    int numerator;
    int denominator;
    public:
    Fraction(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }


    void display() {
        cout<<this->numerator<<"/"<<this->denominator<<endl;
    }

    // We also need to break the fraction to the simplest term so.. THis does that..
    void simplify() {
        int hcf = 1;
        int temp = min(this->numerator, this->denominator);
        for(int i=1; i<=temp; i++)
        {
            if(this->numerator%i == 0 && this->denominator%i == 0)
            {
                hcf = i;
            }
        
        }
        this->numerator /= hcf;
        this->denominator /= hcf;
    }

    // the idea is to add the provided fraction to the original fraction
   
    // void add(Fraction f) 
    // {
    //     int lcm = this->denominator * f.denominator;
    //     int num;
    //     num = ((lcm/this->denominator) * this->numerator) + ((lcm/f.denominator) * f.numerator );
    //     this->numerator = num;
    //     this->denominator = lcm;
    //     simplify();
    // }  

     // What's wrong with this??
    /*
    Well, there's nothing wrong..But let's optimise our code..
    When I pass a fraction by value, a new copy of fraction class will be created and the values will be copied to it
    from the actual object,i.e, the copy constructor runs. Instead let's use pass the fraction object by reference..
    By doing so we don't create a new object, instead a new identifier which points to the same value pointed by 
    actual object. So we no need to create new object and run copy constructor to copy values...
    But now we can actually change the value of actual object though this identifier, and that's not something
    good.. So let's only give that identifier the read only permission using const keyword....
    */

    void add(Fraction const &f) 
    {
        // now we can't do f.denominator++; // means,we can't change actual values//
        int lcm = this->denominator * f.denominator;
        int num;
        num = ((lcm/this->denominator) * this->numerator) + ((lcm/f.denominator) * f.numerator );
        this->numerator = num;
        this->denominator = lcm;
        simplify();
    } 
    void multiply(Fraction const &f) {
       this->numerator *= f.numerator;
       this->denominator *= f.denominator;
       simplify();
    }

};

int main() {
    Fraction f1(4, 2);
    Fraction f2(5, 3);
    f1.add(f2);
    f1.display();
    // note that the f1 has already changed by addition... :)
    f1.multiply(f2);
    f1.display();

    return 0;
}