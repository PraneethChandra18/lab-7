#include <bits/stdc++.h>
using namespace std;
int cnum(string X,string Y)
{
	string XY=X.append(Y);
	string YX=Y.append(X);
	return XY.compare(YX)>0 ? 1:0;
};
int main()
{
int t;
vector<string> n;
string s;
string res="";
cin>>t;
	while(t--)
 		{
				vector<string> n;
  			int r;
  			cin>>r;
  			for(int j=0;j<r;j++)
			{
				cin>>s;
				n.push_back(s);
			}
			sort(n.begin(),n.end(),cnum);
			for(int j=0;j<n.size();j++)
			{
				res=res.append(n[j]);
			}
			cout << res << endl;	
			res="";
 		}

}
