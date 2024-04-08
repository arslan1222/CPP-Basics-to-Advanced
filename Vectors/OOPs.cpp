#include <iostream> 
using namespace std; 
// class Box {   
//     public:      
//     double length;   // Length of a box      
//     double breadth;  // Breadth of a box    
//     double height;   // Height of a box 
//     };

// int main( ){

//     Box Box1;      // Declare Box1 of type Box   
//     Box Box2;      // Declare Box2 of type Box   
//     double volume = 0.0;     // Store the volume of a box here

//    // box 1 specification   
//    Box1.height = 5.0;   
//    Box1.length = 6.0;    
//    Box1.breadth = 7.0; 
//    // box 2 specification  
//    Box2.height = 10.0;   
//    Box2.length = 12.0;   
//    Box2.breadth = 13.0;   // volume of box 1   
//    volume = Box1.height * Box1.length * Box1.breadth;   
//    cout << "Volume of Box1 : " << volume <<endl; 
//    // volume of box 2   
//    volume = Box2.height * Box2.length * Box2.breadth;   
//    cout << "Volume of Box2 : " << volume <<endl;   
//    return 0; 
//    } 

 
// Base class 
    // class Shape {

    // public:      
    // void setWidth(int w){   

    //         width = w;      
    //     }     
    // void setHeight(int h){
    //         height = h;
    //     }   
    // protected:

    //     int width;      
    //     int height; 
    // }; 

    // // Derived class 
    // class Rectangle: public Shape{
    //     public:      
    //     int getArea() {          
    //         return (width * height);       
    //     } 
    //     }; 


    // int main(void){  

    // Rectangle Rect; 
    // Rect.setWidth(5);   
    // Rect.setHeight(7); 
    // // Print the area of the object.   
    // cout << "Total area: " << Rect.getArea() << endl; 
    
    // return 0; 
    // } 
 
class printData {
    public:      
    void print(int i) {        
        cout << "Printing int: " << i << endl;
        } 

    void print(double  f) {        
    cout << "Printing float: " << f << endl;      
    } 
    void print(char* c) {        
        cout << "Printing character: " << c << endl;      
        } 
        };

int main(void) {   
    printData pd; 
   // Call print to print integer   
   pd.print(5);   // Call print to print float   
   pd.print(500.263);   // Call print to print character   
   pd.print("Hello C++"); 
   return 0; 
   }     