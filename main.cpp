#include <iostream>

using namespace std;

class student
{
     protected:
    int rollnumber;
    public:
     void get_number(int a)
    {
        rollnumber=a;
    }
    void put_number()
    {
        cout<<"roll number"<<rollnumber<<endl;
    }
};
class test
{
    protected:
    int part1;
    int part2;
    public:
    void get_marks(int x, int y)
    {
        part1=x;
        part2=y;
    }
    void put_marks()
    {
        cout<<"marks obtained"<<endl;
        cout<<"part1"<<part1<<endl;
        cout<<"part2"<<part2<<endl;
    }

};
class sport:virtual public student
{
    protected:
    int score;
    public:
    void get_score(int s)
    {
        score=s;
    }
    void put_score()
    {
        cout<<"score"<<score<<endl;
    }
};
class result:public test,public sport
{
    private:
    int total;
    public:
    void display()
    {
        total=part1+part2+score;
        cout<<"total"<<total<<endl;
    }
};
int main()
{
   student s;
   s.get_number(11);
   s.put_number();
   test t;
   t.get_marks(10,20);
    t.put_marks();
    sport sp;
    sp.get_score(55);
    sp.put_score();
    result r;
  r.display();
    return 0;
}
