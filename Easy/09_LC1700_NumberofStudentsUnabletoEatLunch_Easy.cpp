#include <queue>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        int c=0, i=0;

        for(int i=0; i<students.size(); i++) q.push(students[i]);
        while(!q.empty() && c!=students.size()){
            if(q.front()==sandwiches[i]){
                q.pop();
                i++;
                c=0;
            }else{
                c++;
                int temp=q.front();
                q.pop();
                q.push(temp);
            }
        }
        return q.size();
    }
};