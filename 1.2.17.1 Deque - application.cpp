#include <iostream>
#include <deque>

using namespace std;

enum CommandType
{
	MoveLeft,
	MoveRight,
	MoveForward,
	MoveBackward
};

struct RoboCommander
{
    deque<int> commandDeque;
    void AddCommand(int com)
    {
        commandDeque.push_back(com);
    }
    void UndoCommand()
    {
        if(commandDeque.size()>0)
            commandDeque.pop_back();
    }
    void Execute()
    {
        for(int c : commandDeque)
        {
            switch(c)
            {
                case MoveLeft: cout << "Moving left\n"; break;
                case MoveRight: cout << "Moving right\n"; break;
                case MoveForward: cout << "Moving forward\n"; break;
                case MoveBackward: cout << "Moving backward\n"; break;
            }
        }
        cout << "Ready\n";
    }
};

int main()
{
	RoboCommander commander;
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveRight);
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveForward);
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveForward);
	commander.AddCommand(MoveRight);
	commander.AddCommand(MoveBackward);
	commander.Execute();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.AddCommand(MoveForward);
	commander.Execute();
	return 0;
}
