// lesson32.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<string>
using namespace std;
template<typename T>

class Pair1
{
private:

    T Lvalue;
    T Rvalue;
public:
    Pair1(const T& lvalue,const T& rvalue) :Lvalue(lvalue), Rvalue(rvalue) {};
   
    T first() const
    {
        return Lvalue;
    }
    T second() const
    {
        return Rvalue;
    }

};

template<typename T1,typename T2> 
class Pair
{
private:

    T1 Lvalue;
    T2 Rvalue;
public:
    Pair(const T1& lvalue,const T2& rvalue) :Lvalue(lvalue), Rvalue(rvalue) {};
   

    T1 first() const
    {
        return Lvalue;
    }
    T2 second() const
    {
        return Rvalue;
    }

};
template <typename T3>
class StringValuePair : public Pair<string, T3>
{
public:
    StringValuePair(const string& str, const T3& sc) : Pair<string, T3>(str, sc)
    {};
};

int main() 
{
    Pair1<int> p1(6, 9);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair1<double> p2(3.4, 7.8);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    Pair<int, double> p3(6,7.8);
    cout << "Pair: " << p3.first() << ' ' << p3.second() << '\n';


    const Pair<double, int> p4(3.4, 5);
    cout << "Pair: " << p4.first() << ' ' << p4.second() << '\n';

    StringValuePair<int> svp("Amazing", 7);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
