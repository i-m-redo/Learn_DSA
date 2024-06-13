class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int sum=0;
        for(int i=0;i<students.size();i++){
            if(students[i]==seats[i]){
                sum=sum+0;
            }
            else if(students[i]>seats[i]){
                sum=sum+(students[i]-seats[i]);
            }
            else
            {
                sum=sum+(seats[i]-students[i]);
            }
        }
        
        return sum;
    }
};