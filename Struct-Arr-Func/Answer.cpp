//part one
//Q1

#include <iostream>
using namespace std;


double triangle(double height, double width)


//Q2

double triangle(double height, double width)

{
   double area = 0.5 * height * width;
   return area;
}
//Q3


int main()
{
    cout<<triangle(5.0, 10.0);
    return 0;
}

//Q4

#include <iostream>
using namespace std;

double multiplication(num1, num2, num3)

//Q5

double multiplication(double num1,double num2, double num3)
{
    double product = num1 * num2 * num3;
    return product;
}

//Q6

int main ()
{
    cout<<multiplication(4.2, 3.8, 9.5)
    return 0;


//Part 2
//Q!
#include <iostream>
using namespace std;

int arr1[5];

//Q2

double arr1[10];

//Q3

int new_arr[] = {10, 20, 30, 40, 50};

//Q4

#include <iostream>
using namespace std;


int main(){
double arr3[5] = {1.2, 2.0, 3.3 ,4.3, 5.9};
arr3[0] = 1.7;
arr3[4] = 5.4;
cout<<arr3[0]<<arr3[4];
return 0;
]

//Q5

#include <iostream>
using namespace std;

int main()
{

int i;
int arr3[6] = {5, 6, 7, 8, 9, 10};
for(i=0; i<6; i++)
{
    cout<<"arr3["<<i+1<<"]"<<arr3[i]<<endl;
}

return 0;
}

//part3
//Q1

#include <iostream>
using namespace std;

struct Book
{
    string ISBN;
    string title;
    int num_page;
};

//Q2
Book b1;

//Q3

Book b2;

//Q4

Book arr4[];

//Q5

#include <iostream>
using namespace std;

struct Company
{
    string employees;
    string registers;
    string sales;
};

//Q6

int main()
{
    b1.ISBN = "Alpha";
    b1.title = "Dertogada";
    b1.num_page = 34;
    return 0;
}


//Q7


int main()
{
    b2.ISBN = "Kebron";
    b1.title = "Fikir Eske Mekabir";
    b1.num_page = 84;
    return 0;
}


//part 4
//Q1

#include <iostream>
using namespace std;


int i;
double sum= 0.0;
int sizee;
double calculateSum(arr5[], sizee)


//Q2

double calculateSum(arr5[], int sizee)
{
    for(i=0; i<sizee; i++)
    {
        sum += arr5[i]
    }
    return sum;
    cout<<sum;
}

//Q3

main()
{
    calculateSum("firstSum", sizee)
    return 0;

}


//part 5
//Q1

#include <iostream>
using namespace std;

struct City
{
    string name;
    long int population;
};
City metrol1;

long int reducedPopulation(long int population)
{
    long int result = metrol1.population - 0.2 * metrol1.population;
    return result;
}

//Q2

main()
{
    cout<<reducedPopulation(50000);
    return 0;
}