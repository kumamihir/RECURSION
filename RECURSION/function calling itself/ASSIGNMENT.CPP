#include <bits/stdc++.h>
using namespace std;
void printElementsInReverse(vector<int> &arr, int currIndex, int
n) {
if(currIndex == n) {
return;
}
printElementsInReverse(arr, currIndex+1, n);
cout << arr[currIndex] << " ";
}
int main() {
int n;
cin >> n;
vector<int> arr(n);
for(int i = 0; i < n; ++i) {
cin >> arr[i];
}
printElementsInReverse(arr, 0, n);
return 0;
}