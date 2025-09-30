#include <iostream>
#include <string>
using namespace std;

// 1. Introduction
// Covered implicitly through class definitions

// 2. OOPS & Object
class BasicObject {
public:
    string name;
    BasicObject(string n) : name(n) {}
    void display() { cout << "Object: " << name << endl; }
};

// 3. Class & Object
class Person {
public:
    string name;
    Person(string n) : name(n) {}
    void show() { cout << "Person: " << name << endl; }
};

// 4. Access Specifier
class AccessDemo {
private:
    int privateVar = 10;
protected:
    int protectedVar = 20;
public:
    int publicVar = 30;
    void display() { cout << "Private: " << privateVar << ", Protected: " << protectedVar << ", Public: " << publicVar << endl; }
};

// 5. Encapsulation
class Account {
private:
    double balance;
public:
    Account(double b) : balance(b) {}
    void deposit(double amount) { if (amount > 0) balance += amount; }
    double getBalance() { return balance; }
};

// 6. Constructor
class ConstructorDemo {
public:
    ConstructorDemo() { cout << "Default Constructor" << endl; }
    ConstructorDemo(int x) { cout << "Parameterized Constructor with " << x << endl; }
};

// 7. this Pointer
class ThisDemo {
private:
    int value;
public:
    ThisDemo(int value) { this->value = value; }
    void display() { cout << "Value: " << this->value << endl; }
};

// Additional this Pointer Example
class ThisPointerDemo {
private:
    int number;
    string id;
public:
    ThisPointerDemo(int n, string i) {
        this->number = n;
        this->id = i;
    }
    void modify(int number, string id) {
        this->number = number; // Using this to differentiate parameter and member
        this->id = id;
    }
    void print() { cout << "Number: " << number << ", ID: " << id << endl; }
};

// 8. Copy Constructor
class CopyDemo {
private:
    int data;
public:
    CopyDemo(int d) : data(d) {}
    CopyDemo(const CopyDemo& obj) : data(obj.data) { cout << "Copy Constructor called" << endl; }
    void show() { cout << "Data: " << data << endl; }
};

// 9. Shallow vs Deep Copy
class DeepCopyDemo {
private:
    int* ptr;
public:
    DeepCopyDemo(int d) { ptr = new int; *ptr = d; }
    DeepCopyDemo(const DeepCopyDemo& obj) { ptr = new int; *ptr = *(obj.ptr); } // Deep copy
    ~DeepCopyDemo() { delete ptr; }
    void display() { cout << "Value: " << *ptr << endl; }
};

// 10. Destructor
class DestructorDemo {
public:
    ~DestructorDemo() { cout << "Destructor called" << endl; }
    void call() { cout << "Method called" << endl; }
};

// 11. Inheritance
class Base {
public:
    void baseFunc() { cout << "Base Function" << endl; }
};
class Derived : public Base {
public:
    void derivedFunc() { cout << "Derived Function" << endl; }
};

// 12. Mode of Inheritance
class Parent {
public:
    void parentFunc() { cout << "Parent Function" << endl; }
};
class Child : private Parent { // Private inheritance
public:
    void callParent() { parentFunc(); }
};

// 13. Types of Inheritance
class GrandParent {
public:
    void grandParentFunc() { cout << "GrandParent Function" << endl; }
};
class Parent1 : virtual public GrandParent {}; // Virtual inheritance to avoid diamond problem
class Parent2 : virtual public GrandParent {};
class Child1 : public Parent1, public Parent2 {
public:
    void childFunc() { grandParentFunc(); }
};

// 14. Polymorphism
class PolyBase {
public:
    virtual void polyFunc() { cout << "Base Poly" << endl; }
    virtual ~PolyBase() {}
};
class PolyDerived : public PolyBase {
public:
    void polyFunc() override { cout << "Derived Poly" << endl; }
};

// 15. Function Overloading
class OverloadDemo {
public:
    void add(int a, int b) { cout << "Sum: " << a + b << endl; }
    void add(double a, double b) { cout << "Sum: " << a + b << endl; }
};

// 16. Function Overriding
class OverrideBase {
public:
    virtual void overrideFunc() { cout << "Base Override" << endl; }
};
class OverrideDerived : public OverrideBase {
public:
    void overrideFunc() override { cout << "Derived Override" << endl; }
};

// 17. Abstraction
class AbstractBase {
public:
    virtual void abstractFunc() = 0; // Pure virtual function
    virtual ~AbstractBase() {}
};
class AbstractDerived : public AbstractBase {
public:
    void abstractFunc() override { cout << "Abstract Implementation" << endl; }
};

// 18. Abstract Class
// Already demonstrated with AbstractBase above

// 19. Static Keyword
class StaticDemo {
public:
    static int count;
    StaticDemo() { count++; }
    static void showCount() { cout << "Count: " << count << endl; }
};
int StaticDemo::count = 0;

int main() {
    // 2. OOPS & Object
    BasicObject obj("Test");
    obj.display();

    // 3. Class & Object
    Person person("Alice");
    person.show();

    // 4. Access Specifier
    AccessDemo access;
    access.display();

    // 5. Encapsulation
    Account acc(1000);
    acc.deposit(500);
    cout << "Balance: " << acc.getBalance() << endl;

    // 6. Constructor
    ConstructorDemo def;
    ConstructorDemo param(5);

    // 7. this Pointer
    ThisDemo thisObj(10);
    thisObj.display();
    ThisPointerDemo ptrDemo(100, "A1");
    ptrDemo.print();
    ptrDemo.modify(200, "B2");
    ptrDemo.print();

    // 8. Copy Constructor
    CopyDemo orig(15);
    CopyDemo copy(orig);
    copy.show();

    // 9. Shallow vs Deep Copy
    DeepCopyDemo deep(20);
    deep.display();

    // 10. Destructor
    DestructorDemo dest;
    dest.call();

    // 11. Inheritance
    Derived derived;
    derived.baseFunc();
    derived.derivedFunc();

    // 12. Mode of Inheritance
    Child child;
    child.callParent();

    // 13. Types of Inheritance
    Child1 child1;
    child1.childFunc();

    // 14. Polymorphism
    PolyBase* poly = new PolyDerived();
    poly->polyFunc();
    delete poly;

    // 15. Function Overloading
    OverloadDemo overload;
    overload.add(5, 3);
    overload.add(5.5, 3.2);

    // 16. Function Overriding
    OverrideBase* override = new OverrideDerived();
    override->overrideFunc();
    delete override;

    // 17. & 18. Abstraction & Abstract Class
    AbstractBase* abs = new AbstractDerived();
    abs->abstractFunc();
    delete abs;

    // 19. Static Keyword
    StaticDemo s1, s2, s3;
    StaticDemo::showCount();

    return 0;
}