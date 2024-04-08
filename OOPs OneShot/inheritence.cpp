#include<iostream>
using namespace std;
/*                     // Accessiblities Public, Protected, Private
class parent{
    public:
    int x;

    protected:
    int y;

    private:
    int z;

    class child: public child{
        // x will remain public
        // y will remain protected
        // z will remain private
    };
    class child1: protected parent{
        // x will be protected
        // y will be protected
        // z will be inaccessible
    };
    class child2: private parent{
        // x will be private
        // y will be private
        // z will be inaccessible
    };
};             */

                        // Types of inheritance
                        // Single inheritance
/*                       
class parent{
    public:
        parent(){
            cout<<"Parent class"<<endl;
        }
};
class child: public parent{
    public:
        child(){
            cout<<"Child class"<<endl;
        }
};                        

int main(){
    child c;
    return 0;
} */

                            // Type of inheritance
                            // Multi level inheritance
/*                            
class parent{
    public:
        parent(){
            cout<<"Parent class"<<endl;
        }
};
class child: public parent{         // inherit from parent class
    public:
        child(){
            cout<<"Child class"<<endl;
        }
};
class grandchild: public child{     // Inherit from child class
    public:
        grandchild(){
            cout<<"Grandchild class"<<endl;
        }
};

int main(){
    grandchild c;                  // called parent and child class
    return 0;
}
*/

                                // Type of inheritance
                                // Multiple inheritance
/*                               
class parent1{
    public:
        parent1(){
            cout<<"Parent1 class"<<endl;
        }
};
class parent2{
    public:
        parent2(){
            cout<<"Parent2 class"<<endl;
        }
};

class child: public parent1, parent2{
    public:
        child(){
            cout<<"child class"<<endl;
        }
};

int main(){
    child obj;

    return 0;
} */
                                // Type of inheritance
                                // Hirarchical inheritance
/*                                
class parent{
    public:
        parent(){
            cout<<"Parent class"<<endl;
        }
};
class child1: public parent{
    public:
        child1(){
            cout<<"child1 class"<<endl;
        }
};

class child2: public parent{
    public:
        child2(){
            cout<<"child2 class"<<endl;
        }
};
class child3: public parent{
    public:
        child3(){
            cout<<"child3 class"<<endl;
        }
};

int main(){
    child1 obj1;
    child2 obj2;
    child3 obj3;

    return 0;
} */
                                // Type of inheritance
                                // Hybrid inheritance
/*                                
class parent1{
    public:
        parent1(){
            cout<<"Parent1 class"<<endl;
        }
};
class parent2{
    public:
        parent2(){
            cout<<"Parent2 class"<<endl;
        }
};

class child: public parent1, parent2{
    public:
        child(){
            cout<<"child class"<<endl;
        }
};

class child2: public child{
    public:
    child2(){
        cout<<"Child2 called"<<endl;
    }
};

int main(){
    child2 obj1;

    return 0;
}  */

                            // Type of inheritance
                            // Hybrid inheritance

class parent1{
    public:
        parent1(){
            cout<<"Parent1 class"<<endl;
        }
};
class parent2{
    public:
        parent2(){
            cout<<"Parent2 class"<<endl;
        }
};

class child: public parent1{
    public:
        child(){
            cout<<"child class"<<endl;
        }
}; 
class GrandChild: public parent1, child{
    public:
    GrandChild(){
        cout<<"GrandChild called"<<endl;
    }
};

int main(){
    GrandChild obj1;

    return 0;
}                                                        