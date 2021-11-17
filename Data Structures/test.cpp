//You are given a list, L, and another list, P, containing integers sorted in ascending order.  Consider an iterator specification for an operation printLots(L,P) will print the elements in L that are in position specified by P.  For instance, if P = 1, 3, 4,6, the elements in positions 1, 3, 4, and 6 in L are printed.  Using only the public STL container operations, select the correct procedure printLots(L,P). 

using namespace std;

template <typename Object>

void printLots(list <Object> L, list<int> P)

{

   typename list < int > ::const_iterator pIter ;

   typename list < Object >::const_iterator lIter ;

   int start = 0;

   lIter = L.begin();

   for (pIter = P.begin(); pIter != P.end() && lIter != L.end(); pIter++)

   {

      while (start < *pIter && lIter != L.end())

   {

      start++;

      lIter++;

   }

   if (lIter != L.end())

      cout << *lIter << endl;

   }

 }