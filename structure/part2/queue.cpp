#include<iostream>
#include<queue>
#include<utility>
#include<string>

int main()
{
    int n, q ;
    std::cin >> n >> q ;

    using process = std::pair<std::string, int> ;

    std::queue<process> que;
    
    process a ;
    for(int i = 0 ; i != n ; ++i)
    {
        std::cin >> a.first >> a.second ;
        que.push( a ) ;
    }

    int time{} ;
    std::queue<process> timetable ;
    
    while(!que.empty())
    {
        a = que.front() ;
        que.pop() ;
        if(q < a.second)
        {
            time += q ;
            a.second -= q ;
            que.push(a) ;
            
        }
        else
        {
            time += a.second ;
            a.second = time ;
            timetable.push(a) ;
        }
    }
        
    while(!timetable.empty())
    {
        std::cout << timetable.front().first << " " << timetable.front().second << std::endl ;
        timetable.pop();
    }

}

