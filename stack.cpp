#include <iostream>
#include <stack>
using namespace std;

int main() {
stack<int> st;
st.push(10); // Add elements
st.push(20);
st.push(30);

cout << "Top element: " << st.top() << endl; // Access top element

st.pop(); // Remove top element
cout << "After pop, top element: " << st.top() << endl;

return 0;
}