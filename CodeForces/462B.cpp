//Solved http://codeforces.com/problemset/problem/462/B


#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

typedef map<char, unsigned long long,std::greater<unsigned long long>>::iterator it_type;

int main()
{
	int n,k;
	cin>>n>>k;
	char tc;

	map<char,unsigned long long,std::greater<unsigned long long>> char_counts;
	for(int i='A';i<='Z';i++)
	{
		char_counts[i]=0;
	}

	for(int i=0;i<n;i++)
	{
		cin>>tc;
		char_counts[tc]++;
	}

	int taken_cards=0;
	unsigned long long coin_count=0;

	vector<unsigned long long>counts;
	for(it_type iterator = char_counts.begin(); iterator != char_counts.end(); iterator++)
	{
		counts.push_back(iterator->second);
	}

	sort(counts.begin(),counts.end());
	
	for(int i=counts.size()-1;i>=0;i--)
	{
			if(counts[i]<=(k-taken_cards))
			{
				taken_cards+=counts[i];
				coin_count+=counts[i]*counts[i];
			}
			else
			{
				coin_count+=((unsigned long long)(k-taken_cards)*(k-taken_cards));
				taken_cards+=(k-taken_cards);
				break;
				
			}
	}




	cout<<coin_count;
	return 0;

}
