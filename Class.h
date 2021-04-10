#include <iostream>
 
 #ifndef Class_h
 #define Class_h

 class MyClassVector1 
{ 
  private:  
    vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};

class MyClassVector2
{
  private:
    vector<int> vec;
  public:
      MyClassVector2 (vector<int> v) : vec(v)
      {
      }
      void print()
      {
        for (int i = 0; i < vec.size(); i++)
        {
          cout << vec[i] << " ";
        }
      }
};

class MyClassVector3
{
  private:
    vector<int>& vec;
  public:
    MyClassVector3(vector<int>& arr) : vec(arr)
    {
    }
    void print()
    {
      for (int i = 0; i < vec.size(); i++)
      {
        cout << vec[i] << " ";
      }
    }
};

#endif
