#include <vector>
using namespace std;
class PrimeFactor
{
public:
	vector<int> of(int i)
	{
		vector<int> result = {};
		if( i == 2)
		{
			result.push_back(2);
		}
		if (i == 3)
		{
			result.push_back(3);
		}
		return result;
	}
	
};