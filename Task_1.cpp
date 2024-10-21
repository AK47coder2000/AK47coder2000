#include <iostream>
using namespace std;

class Point{
    private:
     int X, Y;

    public:
    Point(){
        X = 0; // default values
        Y = 0; // default values
    }

    int getX(){ //The getX method is a public member function that allows access to the private member variable X 
        return  X; //of the Point class. It returns the value of X. This is useful for encapsulation, 
    }               //as it provides a controlled way to access the value of X from outside the class, 
                   //while keeping the variable itself private.
        
    

    int getY(){
        return Y;
    }

 //The displayPoint method provides a way to view these values without exposing the variables themselves.

    void displayPoint(){                                     //void does not return any value.
        cout << "Point coordinates:" << X << "," << Y << endl;
    }

    int sum(){
        return X + Y;
    }

    void setXY(int x, int y) {
        X = x;
        Y = y;
    }
};

int main(){
    Point p1, p2;

    int X1, Y1, X2, Y2;
    cout << "Enter coordinates of point 1: " << endl;
    cout << "X: ";
    cin >> X1;
    cout << "Y: ";
    cin >> Y1;

    cout << "Enter coordinates of point 2:" << endl;
    cout << "X: ";
    cin >> X2;
    cout << "Y: ";
    cin >> Y2;

    p1.setXY(X1, Y1);
    p2.setXY(X2, Y2);

    p1.displayPoint();
    p2.displayPoint();

    cout << "sum of point1:" << p1.sum() << endl;
    cout << "sum of point2:" << p2.sum() << endl;

    return 0;
}