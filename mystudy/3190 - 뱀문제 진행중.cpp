#include <iostream>
#include <vector>
#include <map>
#include <list>
using namespace std;

/**
 * 왼쪽(C가 'L') 또는 오른쪽(C가 'D')로 90도 방향을 회전시킨
*       6
        3
        3 4
        2 5
        5 3
        3
        3 D
        15 L
        17 D
 * 

        9
 */

//east west north south

#define EAST pair<int, int>(0, 1)
#define SOUTH pair<int, int>(1, 0)
#define WEST pair<int, int>(0, -1)
#define NORTH pair<int, int>(-1, 0)

class snake{
    public:
        typedef pair<int, int> locate;
        typedef list<locate> coordinate;
        typedef coordinate xy;
    
    private:
        locate pose; //first = x, second = y;
        xy body;
        int size;
        int lifetime;

    public:
        snake(){
            pose.first = 0;
            pose.second = 0;
            body.push_back(locate(0,0));
            lifetime = 0;
            pose = EAST;
        };

        ~snake(){};

        locate getHeadLocate(){
            return body.front();
        }

        locate getMoveAxios(){
            return  pose;
        }

        void lotateHead(char event){
            if (event == 'L')
            {
                if (pose == EAST)
                    pose = NORTH;
                else if (pose == NORTH)
                    pose = WEST;
                else if (pose == WEST)
                    pose = SOUTH;
                else if (pose == SOUTH)
                    pose = EAST;
            }
            else if (event == 'D')
            {
                if (pose == EAST)
                    pose = SOUTH;
                else if (pose == NORTH)
                    pose = EAST;
                else if (pose == WEST)
                    pose = NORTH;
                else if (pose == SOUTH)
                    pose = WEST;
            }
        }

        void go(){
            body.push_front(
                locate(body.front().first+pose.first, body.front().second+pose.second)
            );
            body.pop_back();
        }

        void eat(){
            body.push_front(
                locate(body.front().first+pose.first, body.front().second+pose.second)
            );
        }
};

class game{
    public:
        typedef pair<int, int> locate;
        typedef pair<int, char> move;
        typedef list<locate> coordinate;
        typedef coordinate xy;
        typedef map<int, char> event;

    private:
        xy Map;

    public:

};

int main()
{
    int a;
    cin >>a;

}