#include <iostream>
using namespace std;

class dailyRoutine{
  public:
    void routine(){
      cout<<" Daily Routine for Sunita Sharma : "<<endl;
      cout<<"1. Wake up at 6:00 am"<<endl;
      cout<<"2. Take a walk for 30 min i.e., 6:15 -6:45am"<<endl;
      cout<<"3. Yoga or warmup exercise for 30 min (7:00-7:30am)"<<endl;
      cout<<"4. Light Breakfast at 9:00 am"<<endl;
      cout<<"5. Small walk for 10 min (9:40-9:50am) if breakfast take 30 min"<<endl;
      cout<<"6. Lunch at 1:00pm"<<endl;
      cout<<"7. Walk for 10 min (2:10-2:20pm) if lunch takes an hour"<<endl;
      cout<<"8. Take a rest or meet with friends or do any work if they want till 5pm"<<endl;
      cout<<"9. Evening snacks and walk from 5:00-5:40pm"<<endl;
      cout<<"10.Dinner at 8:00pm, dinner should be light"<<endl;
      cout<<"11.Take a walk for 10-15 min"<<endl;
      cout<<"12.Go to bed till 9:30 pm (sleep).";
    }
};

int main(){
    dailyRoutine sunita;
    sunita.routine();
    return 0;
}