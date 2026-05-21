#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenateVector(vector<int> vec1, vector<int> vec2)
{
    int i=0;
    vector<int> resultVector;
  for (auto element : vec1)
  {
      resultVector.push_back(element);
      resultVector.push_back(vec2[i]);
      i++;

  }
  return resultVector;

}



int main()
{
    vector<int> vec1 {1,2,3,4,5};
    vector<int> vec2 {11,12,13,14,15};
    auto vec=concatenateVector(vec1, vec2);
    for (const auto& el:vec)
    {
        cout<<el<<"";

    }
    return 0;
}
