#include<iostream>
#include<queue>
#include<utility>
#include<string>

int main()
{
    int n, q ;
    std::cin >> n >> q ;

    std::queue<std::pair<std::string, int>> que;
    
    std::pair<std::string, int> a ;
    for(int i = 0 ; i != n ; ++i)
    {
        cin >> a.first >> a.second ;
        que.push( a ) ;
    }
}

