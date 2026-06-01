// Last updated: 6/1/2026, 11:17:47 AM
1class StockSpanner {
2public:
3    stack <pair <int,int>> st;
4    StockSpanner() {
5        
6    }
7    
8    int next(int price) {
9        int span = 1;
10        while(!st.empty() && st.top().first <= price){
11            span += st.top().second;
12            st.pop();
13        }
14        st.push({price,span});
15        return span;
16    }
17};