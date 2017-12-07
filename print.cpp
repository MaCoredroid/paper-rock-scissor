#include"p_r_s.h"
static int win_cnt=0,lose_cnt=0,tie_cnt=0;
void prn_game_status()
{
    cout<<endl;
    cout<<"Game status:"<<endl;
    cout<<"Win:"<<win_cnt<<endl;
    cout<<"Lose:"<<lose_cnt<<endl;
    cout<<"Tie:"<<tie_cnt<<endl;
    cout<<"Total:"<<win_cnt+lose_cnt+tie_cnt<<endl;

}
void prn_help()
{
    cout<<endl
        <<"The following characters can be used:\n"
        <<" p for paper\n"
        <<" r for rock\n"
        <<" s for scissor\n"
        <<" g print the game status\n"
        <<" h help\n"
        <<" q quit this game\n";



}
void report (outcome result)
{
    switch(result)
    {
        case win:++win_cnt;cout<<"You win\n";break;
        case lose:++lose_cnt;cout<<"You lose\n";break;
        case tie:++tie_cnt;cout<<"A tie\n";break;
    }
}
