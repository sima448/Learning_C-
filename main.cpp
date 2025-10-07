#include <iostream>
#include <string>
using namespace std;

int main()
{
    // cout<<"hello world Harry"<<endl; //use this code ->std::cout<<"hello world";  remove-> using namespace std;
    // cout<<"hello world";
    // int a,b,c;
    // short sa=8;
    // cout<<sa;

    // camelCase Notation
    // int marksInMaths=89;
    // cout<<"The marks of the student in maths is "<<marksInMaths;

    // strin harry = "harry"
    //   short a;
    //   int b;
    //   long c;
    //   long long d;
    //   float const score = 42.34;
    //   double score1 =42.35;
    //   long double score2 = 42.39;
    // //   score = 32.4; //assign score
    // cout<<"The score is "<<score<<endl;
    // cout<<"The score is "<<score1<<endl;
    // cout<<"The score is "<<score2;4

    // int a, b;
    // cout<<"Enter first number"<<endl;
    // cin>>a;

    // cout<<"Enter second number"<<endl;
    // cin>>b;

    // cout<<"a - b is "<< a - b<<endl;  // cout<<"The sum is "<< a + b<<endl;
    // cout<<"a + b is "<< a + b<<endl; // cout<<"The differance is "<< a - b<<endl;
    // cout<<"a * b is "<< a * b<<endl; // cout<<"The multiplex is "<< a * b<<endl;
    // cout<<"a / b is "<< a / b<<endl; // cout<<"The divide is "<< a / b<<endl;

    // // if else statement
    // int age;
    // cout<<"Enter your age"<<endl;
    // cin>>age;
    // if(age>150 || age<1)
    // {
    //     cout<<"Invalid age";
    // }
    // else if(age>=18){
    // cout<<"you can vote";

    // }
    // else
    // {
    //     cout<<"You connot vote";
    // }

    // // switch statement
    //    int age;
    //     cout << "Enter your age" << endl;
    //     cin >> age;

    //     switch (age)
    //     {
    //     case 18:
    //         cout << "You are 18 year old"; /* code */
    //         break;
    //     case 12:
    //         cout << "You are 12 year old"; /* code */
    //         break;

    //     default:
    //         cout << "You are neither 12 nor 18 years old";
    //         break;
    //     }

    // // while loop
    //    int index = 0;
    //    while(index<30)
    //    {
    //     cout<<"We are at index number "<<index<<endl;
    //     index = index + 1;
    //    }

    // // do while loop
    // int index = 0;
    // do
    // {
    //     cout<<"We are at index number "<<index<<endl;
    //     index = index + 1;
    // } while (index>34);

    // // for loop
    //  for ( int i = 0; i <= 8; i++)
    //  {
    //    cout<<"The value of i is "<<i<<endl;
    //  }

    // // main() function
    // f(x) = x^2 + 2
    // int sum(int a, int b)
    // {
    //     int c;
    //     c = a + b;
    //     return c;
    // }
    // int main()
    // {
    // int a, b;
    //     cout<<"Enter first number"<<endl;
    //     cin>>a;

    //     cout<<"Enter second number"<<endl;
    //     cin>>b;
    //     cout<<"The function returned "<<sum(a,b);

    // int arr[] = {6,4,1,2,4};
    // // array index start 0,1,2,3,4
    // cout<<arr[4];

    // int marks[8];
    // for(int i=0;i<8;i++)

    // {
    //    cout<<"Enter the marks of "<<i<<"th student"<<endl;

    //     cin>>marks[i];
    // }
    // for(int i=0;i<8;i++)

    // {

    //     cout<<"Marks of "<<i<<"th student is"<<marks[i]<<endl;

    // }

    // int arr2d[2][3] = {{1,2,3},
    //                    {4,5,6}};
    // for(int i=0;i<2;i++)
    // {
    //     for(int j = 0; j < 3; j++)
    //     {
    //         cout<<"The value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
    //     }
    // }

    // type casting
    // int a = 323;
    // float b = 32.45;
    // cout<<(float) a/4<<endl;
    //   cout<<(int) b<<endl;

    // string name = "harryname";
    // cout<<"The name is "<<name<<endl;
    // cout<<"The length of name is "<<name.length()<<endl;
    // cout<<"The name is "<<name.substr(0,3)<<endl;
    // cout<<"The name is "<<name.substr(3,8)<<endl;

    // int a = 34;
    // int* ptra;  // ptra me address store kr sakte he a ka
    //    ptra = &a;//that means &a store the address of a in ptra
    //   cout<<ptra<<endl;// ptra  print the address of a
    //   cout<<*ptra<<endl;// *ptra print the value a
    //   cout<<"The value of a is "<<a<<endl;
    //   cout<<"The value of a is "<<*ptra<<endl;
    //   cout<<"The address of a is "<<&a<<endl;
    //   cout<<"The address of a is "<<ptra<<endl;

    // classes & objects

    class Employee
    {
    public: // private protective access modifires bhi kahlate he
        string name;
        int salary;

        Employee(string n, int s, int sp)
        {
            this->name = n;
            this->salary = s;
            this->secretPassword = sp;
        }

        void printDetails()
        {
            cout << "The name of our first employee is " << this->name << "and his salary is " << this->salary << " Dollars " << endl;
        }

        void getsecretPassword() // method
        {
            cout<< "The secret password of employee is" << this -> secretPassword << endl;
    }

    private:
        int secretPassword;
    };
  //inheritance
   class Programmer : public Employee
   {
    public:
     int errors;
   };


    //        n             s       sp
    Employee har("Harry constructor", 344, 345566);
    //   har.name = "harry";
    //   har.salary = 100;
    //   cout<<"The name of our first employee is "<< har.name << "and his salary is "<< har.salary<<"Dollars"<<endl;
    har.printDetails();
    //  cout<<har.secretPassword<<endl;esko access nhi kr sakte he
    har.getsecretPassword();

    return 0;
}