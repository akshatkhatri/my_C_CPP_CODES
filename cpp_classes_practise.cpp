// author-akshat khatri
// date-26-08-2023
// implementing diffrent examples of classes from the book for better understanding

/*#include<iostream>

class item
{
    private:
    int number;
    float cost;
    public:
    void put_data(int ,float );//function declaration inside the class
    void show_data(void)//function declaration inside the class do note that the function declared inside the class is declared inline function
    {
        std::cout<<"number-"<<number<<" "<<"cost-"<<cost<<std::endl;
    }

};

void item::put_data(int a,float b)//using membership labels to seperate the function from normal functions
{
    number=a;
    cost=b;
    //assigning values to the private members through the functions
}

int main()
{
    item x;//creating an object of class item
    x.put_data(10,20.5);
    x.show_data();
std::cout<<std::endl;
    item y;
    y.put_data(40,80.5);
    y.show_data();

//x.number=10; please note that such a line is invalid because a private member can only be accesed through public functions of its own class

    return 0;

}
*/

// demonstrting one's complement of a number using  classes and nested functions
/*
#include <iostream>
#include <string>

class binary
{
private:
    std::string bin;

public:
    void read_binary(void)
    {
        std::cout << "please enter the binary number 0&1 format" << std::endl;
        std::cin >> bin;
    }
    void check_binary();
    void ones(void);
    void display_ones(void);
};

void binary::check_binary()
{
    for (int i = 0; i < bin.length(); i++)
    {
        if (bin.at(i) != '0' && bin.at(i) != '1')
        {
            std::cout << "Invalid binary number format" << std::endl;
            std::cout << "program terminating" << std::endl;
            exit(EXIT_FAILURE);
        }
    }
}
void binary::ones()
{
    check_binary();
    for (int i = 0; i < bin.length(); i++)
    {
        if (bin.at(i) == '0')
        {
            bin.at(i) = '1';
        }
        else
        {
            bin.at(i) = '0';
        }
    }
}

void binary::display_ones()
{
    std::cout << "the one's complement is -"
              << " " << bin;
}

int main()
{
    binary b;
    b.read_binary();
    b.ones();
    b.display_ones();
    return 0;
}
*/

// implementing private member functions
/*#include<iostream>

class data
{
    private:

    int value;
    float credits;
    void read(void);

    public:
    void update(void);
};

void data::read()
{
    std::cout<<"enter value"<<std::endl;
    std::cin>>value;
    std::cout<<value;
}

void data::update()
{
    read();
}
int main()
{
    data obj1;
    obj1.update();
    return 0;
}
*/

// a menu driver program to process a shopping list
/*#include <iostream>

const int size_of_array = 25; // the value is fixed

class items
{
private:
    float item_price[size_of_array];
    int item_code[size_of_array];
    int count;

public:
    void CNT(void)
    {
        count = 0;
    }
    void get_item(void);
    void display_sum(void);
    void display_items(void);
    void remove_items(void);
};

void items::get_item()
{
    std::cout << "enter the item price" << std::endl;
    std::cin >> item_price[count];
    std::cout << "enter the item code" << std::endl;
    std::cin >> item_code[count];
    count++;
}

void items::display_sum()
{
    float sum = 0;

    for (int i = 0; i < count; i++)
    {
        sum = sum + item_price[i];
    }
    std::cout << "total value of the items is" << sum << std::endl;
}

void items::display_items()
{
    std::cout << "ItemPrice"
              << "\t"
              << "Item Code" << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << "\t" << item_price[i];
        std::cout << "\t" << item_code[i];
        std::cout << std::endl;
    }
}
void items::remove_items()
{
    int temp;
    std::cout << "enter the item code you want to delete" << std::endl;
    std::cin >> temp;

    for (int i = 0; i < count; i++)
    {
        if (item_code[i] == temp)
        {
            std::cout << "the deleting is succesful price denounced to zero" << std::endl;
            item_price[i] = 0;
        }
    }
}

int main()
{
    items order;
    order.CNT();
    int temp;

    do
    {
        std::cout << "you can do the following" << std::endl
                  << "1."
                  << " "
                  << "Add an Item" << std::endl
                  << "2."
                  << " "
                  << "display Total Value" << std::endl
                  << "3."
                  << " "
                  << "display all the items" << std::endl
                  << "4."
                  << " "
                  << "remove the items" << std::endl
                  << "5."
                  << " "
                  << "exit from the program" << std::endl;

        std::cin >> temp;

        switch (temp)
        {
        case 1:
            order.get_item();
            break;

        case 2:
            order.display_sum();
            break;

        case 3:
            order.display_items();
            break;

        case 4:
            order.remove_items();
            break;

        case 5:
            std::cout << "exiting the program" << std::endl;
            break;

        default:
            std::cout << "inavlid choice entered" << std::endl;
            break;
        }

    } while (temp != 5);

    return 0;
}
*/

// static variables and static class members example
/*#include <iostream>
class item
{
    int data;
    static int count;

public:
    void get_data(int a)
    {
        data = a;
        count++;
    }
    void get_count()
    {
        std::cout<<"data is-"<<data<<std::endl;
        std::cout << "count is-" << count << std::endl;
    }
};

int item::count;

int main()
{
    item a, b, c;
    a.get_data(10);
    a.get_count();

    b.get_data(20);
    b.get_count();

    c.get_data(30);
    c.get_count();

    return 0;
}
*/

// example of Array of Objects
/*#include <iostream>
#include <string>

class employee
{
    std::string name;
    int age;

public:
    void get_data();
    void put_data();
};

void employee::get_data(void)
{
    std::cout << "enter your name" << std::endl;
    std::cin >> name;
    std::cout << "enter your age" << std::endl;
    std::cin >> age;
}

void employee::put_data(void)
{
    std::cout << "name is-" << name<<std::endl;
    std::cout << "age is" << age<<std::endl;
}

const int size = 3;
int main()
{
    employee manager[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "details of manager" << i + 1 << std::endl;
        manager[i].get_data();
    }
    std::cout << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << "manager" << i + 1 << std::endl;
        manager[i].put_data();
    }
    return 0;
}
*/

//using objects as arguments in the following example
/*#include<iostream>

class time
{
    int hours;
    int minutes;
    public:
    void get_data(void);
    void put_data(void);
    void sum(time,time);

};
void time::get_data(void)
{
    std::cout<<"enter the time in hours"<<std::endl;
    std::cin>>hours;
    std::cout<<"enter the time in minutes"<<std::endl;
    std::cin>>minutes;
}
void time::put_data(void)
{
    std::cout<<"hours are-"<<hours<<"--minutes are-"<<minutes<<std::endl;
}
void time::sum(time t1,time t2)
{
    minutes=t1.minutes+t2.minutes;
    minutes=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;
    
}
int main()
{
    time t1,t2,t3;
    t1.get_data();
    t2.get_data();
    t3.sum(t1,t2);

    t1.put_data();
    t2.put_data();
    t3.put_data();

    return 0;
}

*/
//implementing fre=
