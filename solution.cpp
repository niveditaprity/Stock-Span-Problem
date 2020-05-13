void calculateSpan(int price[], int n, int S[])
{
stack<int>s;
s.push(0);
for(int i=0;i<n;i++)
{
 while(s.empty()==false&&price[s.top()]<=price[i]){
     s.pop();
     
 }
 int p=(s.empty())?i+1:i-s.top();
 S[i]=p;
 s.push(i);
 }// Your co
