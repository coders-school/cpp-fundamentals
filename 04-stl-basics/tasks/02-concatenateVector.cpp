#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenateVector(vector<int> vec1, vector<int> vec2)
{
  vector<int> resultVector;
  int a=vec1.size();
  int b=vec2.size();


  auto i=  max(a,b);

  for(int n=0;n<i;++n)
  {
   if(n<a)
   {
        resultVector.push_back(vec1[n]);

   }
   if (n<b)
   {
       resultVector.push_back(vec2[n]);
   }

  }


return  resultVector;


}



int main()
{
    vector<int> vec1 {1,2,3,4,5,6};
    vector<int> vec2 {11,12,13,14,15};
    auto vec=concatenateVector(vec1, vec2);
    for (const auto& el:vec)
    {
        cout<<el<<"";

    }
    return 0;
}

