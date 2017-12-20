#include<iostream>
using namespace std;
 
 
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		float rate;
		int mins, noofplan;
		cin >> rate >> mins >> noofplan;
		float TIcost = rate*mins;
		int i = 0;
		int plan = 0;
		while (noofplan--)
		{
			i++;
			float noofmonth, cost;
			float drate;
			cin >> noofmonth >> drate >> cost;
			float fcost = ((drate*mins) + (cost/noofmonth));
			if( fcost < TIcost)
			{
				plan = i;
				TIcost = fcost;
			}
		}
		cout << plan << endl;
	}
	return 0;
} 
