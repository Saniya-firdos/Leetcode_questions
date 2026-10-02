class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        queue<int> q;
        for(int x : students){
            q.push(x);
        }
        int i = 0;
        int rejected = 0;
        int count = q.size();
        while(!q.empty() && rejected < count){
            if(q.front()==sandwiches[i]){
                q.pop();
                i++;
                rejected=0;
            }else{
                q.push(q.front());
                q.pop();
                rejected++;
            }
        }
        return q.size();
    }
};