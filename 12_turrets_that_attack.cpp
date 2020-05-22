#include <iostream>
#include <vector>

#include <stdio.h>

using namespace std;

/*
         _______                   _____                    _____                    _____                    _____                   _______         
        /::\    \                 /\    \                  /\    \                  /\    \                  /\    \                 /::\    \        
       /::::\    \               /::\____\                /::\    \                /::\____\                /::\    \               /::::\    \       
      /::::::\    \             /:::/    /               /::::\    \              /::::|   |               /::::\    \             /::::::\    \      
     /::::::::\    \           /:::/    /               /::::::\    \            /:::::|   |              /::::::\    \           /::::::::\    \     
    /:::/~~\:::\    \         /:::/    /               /:::/\:::\    \          /::::::|   |             /:::/\:::\    \         /:::/~~\:::\    \    
   /:::/    \:::\    \       /:::/    /               /:::/__\:::\    \        /:::/|::|   |            /:::/  \:::\    \       /:::/    \:::\    \   
  /:::/    / \:::\    \     /:::/    /               /::::\   \:::\    \      /:::/ |::|   |           /:::/    \:::\    \     /:::/    / \:::\    \  
 /:::/____/   \:::\____\   /:::/    /      _____    /::::::\   \:::\    \    /:::/  |::|   | _____    /:::/    / \:::\    \   /:::/____/   \:::\____\ 
|:::|    |     |:::|    | /:::/____/      /\    \  /:::/\:::\   \:::\    \  /:::/   |::|   |/\    \  /:::/    /   \:::\ ___\ |:::|    |     |:::|    |
|:::|____|     |:::|____||:::|    /      /::\____\/:::/  \:::\   \:::\____\/:: /    |::|   /::\____\/:::/____/     \:::|    ||:::|____|     |:::|    |
 \:::\   _\___/:::/    / |:::|____\     /:::/    /\::/    \:::\  /:::/    /\::/    /|::|  /:::/    /\:::\    \     /:::|____| \:::\    \   /:::/    / 
  \:::\ |::| /:::/    /   \:::\    \   /:::/    /  \/____/ \:::\/:::/    /  \/____/ |::| /:::/    /  \:::\    \   /:::/    /   \:::\    \ /:::/    /  
   \:::\|::|/:::/    /     \:::\    \ /:::/    /            \::::::/    /           |::|/:::/    /    \:::\    \ /:::/    /     \:::\    /:::/    /   
    \::::::::::/    /       \:::\    /:::/    /              \::::/    /            |::::::/    /      \:::\    /:::/    /       \:::\__/:::/    /    
     \::::::::/    /         \:::\__/:::/    /               /:::/    /             |:::::/    /        \:::\  /:::/    /         \::::::::/    /     
      \::::::/    /           \::::::::/    /               /:::/    /              |::::/    /          \:::\/:::/    /           \::::::/    /      
       \::::/____/             \::::::/    /               /:::/    /               /:::/    /            \::::::/    /             \::::/    /       
        |::|    |               \::::/    /               /:::/    /               /:::/    /              \::::/    /               \::/____/        
        |::|____|                \::/____/                \::/    /                \::/    /                \::/____/                 ~~              
         ~~                       ~~                       \/____/                  \/____/                  ~~                                       
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
      _____                   _______                   _____                    _____          
     /\    \                 /::\    \                 /\    \                  /\    \         
    /::\____\               /::::\    \               /::\    \                /::\    \        
   /:::/    /              /::::::\    \             /::::\    \              /::::\    \       
  /:::/    /              /::::::::\    \           /::::::\    \            /::::::\    \      
 /:::/    /              /:::/~~\:::\    \         /:::/\:::\    \          /:::/\:::\    \     
/:::/____/              /:::/    \:::\    \       /:::/  \:::\    \        /:::/__\:::\    \    
|::|    |              /:::/    / \:::\    \     /:::/    \:::\    \      /::::\   \:::\    \   
|::|    |     _____   /:::/____/   \:::\____\   /:::/    / \:::\    \    /::::::\   \:::\    \  
|::|    |    /\    \ |:::|    |     |:::|    | /:::/    /   \:::\    \  /:::/\:::\   \:::\    \ 
|::|    |   /::\____\|:::|____|     |:::|    |/:::/____/     \:::\____\/:::/__\:::\   \:::\____\
|::|    |  /:::/    / \:::\    \   /:::/    / \:::\    \      \::/    /\:::\   \:::\   \::/    /
|::|    | /:::/    /   \:::\    \ /:::/    /   \:::\    \      \/____/  \:::\   \:::\   \/____/ 
|::|____|/:::/    /     \:::\    /:::/    /     \:::\    \               \:::\   \:::\    \     
|:::::::::::/    /       \:::\__/:::/    /       \:::\    \               \:::\   \:::\____\    
\::::::::::/____/         \::::::::/    /         \:::\    \               \:::\   \::/    /    
 ~~~~~~~~~~                \::::::/    /           \:::\    \               \:::\   \/____/     
                            \::::/    /             \:::\    \               \:::\    \         
                             \::/____/               \:::\____\               \:::\____\        
                              ~~                      \::/    /                \::/    /        
                                                       \/____/                  \/____/         
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
          _____                    _____                _____                    _____                    _____                    _____                    _____          
         /\    \                  /\    \              /\    \                  /\    \                  /\    \                  /\    \                  /\    \         
        /::\    \                /::\    \            /::\    \                /::\    \                /::\____\                /::\    \                /::\    \        
       /::::\    \              /::::\    \           \:::\    \               \:::\    \              /:::/    /               /::::\    \              /::::\    \       
      /::::::\    \            /::::::\    \           \:::\    \               \:::\    \            /:::/    /               /::::::\    \            /::::::\    \      
     /:::/\:::\    \          /:::/\:::\    \           \:::\    \               \:::\    \          /:::/    /               /:::/\:::\    \          /:::/\:::\    \     
    /:::/__\:::\    \        /:::/__\:::\    \           \:::\    \               \:::\    \        /:::/____/               /:::/__\:::\    \        /:::/__\:::\    \    
   /::::\   \:::\    \       \:::\   \:::\    \          /::::\    \              /::::\    \       |::|    |               /::::\   \:::\    \      /::::\   \:::\    \   
  /::::::\   \:::\    \    ___\:::\   \:::\    \        /::::::\    \    ____    /::::::\    \      |::|    |     _____    /::::::\   \:::\    \    /::::::\   \:::\    \  
 /:::/\:::\   \:::\    \  /\   \:::\   \:::\    \      /:::/\:::\    \  /\   \  /:::/\:::\    \     |::|    |    /\    \  /:::/\:::\   \:::\    \  /:::/\:::\   \:::\____\ 
/:::/__\:::\   \:::\____\/::\   \:::\   \:::\____\    /:::/  \:::\____\/::\   \/:::/  \:::\____\    |::|    |   /::\____\/:::/__\:::\   \:::\____\/:::/  \:::\   \:::|    |
\:::\   \:::\   \::/    /\:::\   \:::\   \::/    /   /:::/    \::/    /\:::\  /:::/    \::/    /    |::|    |  /:::/    /\:::\   \:::\   \::/    /\::/   |::::\  /:::|____|
 \:::\   \:::\   \/____/  \:::\   \:::\   \/____/   /:::/    / \/____/  \:::\/:::/    / \/____/     |::|    | /:::/    /  \:::\   \:::\   \/____/  \/____|:::::\/:::/    / 
  \:::\   \:::\    \       \:::\   \:::\    \      /:::/    /            \::::::/    /              |::|____|/:::/    /    \:::\   \:::\    \            |:::::::::/    /  
   \:::\   \:::\____\       \:::\   \:::\____\    /:::/    /              \::::/____/               |:::::::::::/    /      \:::\   \:::\____\           |::|\::::/    /   
    \:::\   \::/    /        \:::\  /:::/    /    \::/    /                \:::\    \               \::::::::::/____/        \:::\   \::/    /           |::| \::/____/    
     \:::\   \/____/          \:::\/:::/    /      \/____/                  \:::\    \               ~~~~~~~~~~               \:::\   \/____/            |::|  ~|          
      \:::\    \               \::::::/    /                                 \:::\    \                                        \:::\    \                |::|   |          
       \:::\____\               \::::/    /                                   \:::\____\                                        \:::\____\               \::|   |          
        \::/    /                \::/    /                                     \::/    /                                         \::/    /                \:|   |          
         \/____/                  \/____/                                       \/____/                                           \/____/                  \|___|          
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
          _____                   _______                   _____                    _____                    _____                    _____                    _____                   _______         
         /\    \                 /::\    \                 /\    \                  /\    \                  /\    \                  /\    \                  /\    \                 /::\    \        
        /::\    \               /::::\    \               /::\    \                /::\____\                /::\    \                /::\____\                /::\    \               /::::\    \       
       /::::\    \             /::::::\    \             /::::\    \              /::::|   |                \:::\    \              /::::|   |               /::::\    \             /::::::\    \      
      /::::::\    \           /::::::::\    \           /::::::\    \            /:::::|   |                 \:::\    \            /:::::|   |              /::::::\    \           /::::::::\    \     
     /:::/\:::\    \         /:::/~~\:::\    \         /:::/\:::\    \          /::::::|   |                  \:::\    \          /::::::|   |             /:::/\:::\    \         /:::/~~\:::\    \    
    /:::/  \:::\    \       /:::/    \:::\    \       /:::/__\:::\    \        /:::/|::|   |                   \:::\    \        /:::/|::|   |            /:::/  \:::\    \       /:::/    \:::\    \   
   /:::/    \:::\    \     /:::/    / \:::\    \     /::::\   \:::\    \      /:::/ |::|   |                   /::::\    \      /:::/ |::|   |           /:::/    \:::\    \     /:::/    / \:::\    \  
  /:::/    / \:::\    \   /:::/____/   \:::\____\   /::::::\   \:::\    \    /:::/  |::|___|______    ____    /::::::\    \    /:::/  |::|   | _____    /:::/    / \:::\    \   /:::/____/   \:::\____\ 
 /:::/    /   \:::\ ___\ |:::|    |     |:::|    | /:::/\:::\   \:::\____\  /:::/   |::::::::\    \  /\   \  /:::/\:::\    \  /:::/   |::|   |/\    \  /:::/    /   \:::\ ___\ |:::|    |     |:::|    |
/:::/____/     \:::|    ||:::|____|     |:::|    |/:::/  \:::\   \:::|    |/:::/    |:::::::::\____\/::\   \/:::/  \:::\____\/:: /    |::|   /::\____\/:::/____/     \:::|    ||:::|____|     |:::|    |
\:::\    \     /:::|____| \:::\    \   /:::/    / \::/   |::::\  /:::|____|\::/    / ~~~~~/:::/    /\:::\  /:::/    \::/    /\::/    /|::|  /:::/    /\:::\    \     /:::|____| \:::\    \   /:::/    / 
 \:::\    \   /:::/    /   \:::\    \ /:::/    /   \/____|:::::\/:::/    /  \/____/      /:::/    /  \:::\/:::/    / \/____/  \/____/ |::| /:::/    /  \:::\    \   /:::/    /   \:::\    \ /:::/    /  
  \:::\    \ /:::/    /     \:::\    /:::/    /          |:::::::::/    /               /:::/    /    \::::::/    /                   |::|/:::/    /    \:::\    \ /:::/    /     \:::\    /:::/    /   
   \:::\    /:::/    /       \:::\__/:::/    /           |::|\::::/    /               /:::/    /      \::::/____/                    |::::::/    /      \:::\    /:::/    /       \:::\__/:::/    /    
    \:::\  /:::/    /         \::::::::/    /            |::| \::/____/               /:::/    /        \:::\    \                    |:::::/    /        \:::\  /:::/    /         \::::::::/    /     
     \:::\/:::/    /           \::::::/    /             |::|  ~|                    /:::/    /          \:::\    \                   |::::/    /          \:::\/:::/    /           \::::::/    /      
      \::::::/    /             \::::/    /              |::|   |                   /:::/    /            \:::\    \                  /:::/    /            \::::::/    /             \::::/    /       
       \::::/    /               \::/____/               \::|   |                  /:::/    /              \:::\____\                /:::/    /              \::::/    /               \::/____/        
        \::/____/                 ~~                      \:|   |                  \::/    /                \::/    /                \::/    /                \::/____/                 ~~              
         ~~                                                \|___|                   \/____/                  \/____/                  \/____/                  ~~                                       
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
          _____                    _____                            _____                   _______                   _____          
         /\    \                  /\    \                          /\    \                 /::\    \                 /\    \         
        /::\    \                /::\____\                        /::\____\               /::::\    \               /::\____\        
       /::::\    \              /:::/    /                       /:::/    /              /::::::\    \             /:::/    /        
      /::::::\    \            /:::/    /                       /:::/    /              /::::::::\    \           /:::/    /         
     /:::/\:::\    \          /:::/    /                       /:::/    /              /:::/~~\:::\    \         /:::/    /          
    /:::/__\:::\    \        /:::/    /                       /:::/____/              /:::/    \:::\    \       /:::/    /           
   /::::\   \:::\    \      /:::/    /                        |::|    |              /:::/    / \:::\    \     /:::/    /            
  /::::::\   \:::\    \    /:::/    /      _____              |::|    |     _____   /:::/____/   \:::\____\   /:::/    /      _____  
 /:::/\:::\   \:::\    \  /:::/____/      /\    \             |::|    |    /\    \ |:::|    |     |:::|    | /:::/____/      /\    \ 
/:::/__\:::\   \:::\____\|:::|    /      /::\____\            |::|    |   /::\____\|:::|____|     |:::|    ||:::|    /      /::\____\
\:::\   \:::\   \::/    /|:::|____\     /:::/    /            |::|    |  /:::/    / \:::\    \   /:::/    / |:::|____\     /:::/    /
 \:::\   \:::\   \/____/  \:::\    \   /:::/    /             |::|    | /:::/    /   \:::\    \ /:::/    /   \:::\    \   /:::/    / 
  \:::\   \:::\    \       \:::\    \ /:::/    /              |::|____|/:::/    /     \:::\    /:::/    /     \:::\    \ /:::/    /  
   \:::\   \:::\____\       \:::\    /:::/    /               |:::::::::::/    /       \:::\__/:::/    /       \:::\    /:::/    /   
    \:::\   \::/    /        \:::\__/:::/    /                \::::::::::/____/         \::::::::/    /         \:::\__/:::/    /    
     \:::\   \/____/          \::::::::/    /                  ~~~~~~~~~~                \::::::/    /           \::::::::/    /     
      \:::\    \               \::::::/    /                                              \::::/    /             \::::::/    /      
       \:::\____\               \::::/    /                                                \::/____/               \::::/    /       
        \::/    /                \::/____/                                                  ~~                      \::/____/        
         \/____/                  ~~                                                                                 ~~              
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
          _____                    _____                _____                    _____                    _____                            _____            _____          
         /\    \                  /\    \              /\    \                  /\    \                  /\    \                          /\    \          /\    \         
        /::\    \                /::\    \            /::\    \                /::\    \                /::\    \                        /::\____\        /::\    \        
       /::::\    \              /::::\    \           \:::\    \              /::::\    \              /::::\    \                      /:::/    /       /::::\    \       
      /::::::\    \            /::::::\    \           \:::\    \            /::::::\    \            /::::::\    \                    /:::/    /       /::::::\    \      
     /:::/\:::\    \          /:::/\:::\    \           \:::\    \          /:::/\:::\    \          /:::/\:::\    \                  /:::/    /       /:::/\:::\    \     
    /:::/__\:::\    \        /:::/__\:::\    \           \:::\    \        /:::/__\:::\    \        /:::/__\:::\    \                /:::/    /       /:::/__\:::\    \    
   /::::\   \:::\    \       \:::\   \:::\    \          /::::\    \      /::::\   \:::\    \      /::::\   \:::\    \              /:::/    /       /::::\   \:::\    \   
  /::::::\   \:::\    \    ___\:::\   \:::\    \        /::::::\    \    /::::::\   \:::\    \    /::::::\   \:::\    \            /:::/    /       /::::::\   \:::\    \  
 /:::/\:::\   \:::\    \  /\   \:::\   \:::\    \      /:::/\:::\    \  /:::/\:::\   \:::\    \  /:::/\:::\   \:::\____\          /:::/    /       /:::/\:::\   \:::\    \ 
/:::/__\:::\   \:::\____\/::\   \:::\   \:::\____\    /:::/  \:::\____\/:::/  \:::\   \:::\____\/:::/  \:::\   \:::|    |        /:::/____/       /:::/  \:::\   \:::\____\
\:::\   \:::\   \::/    /\:::\   \:::\   \::/    /   /:::/    \::/    /\::/    \:::\  /:::/    /\::/   |::::\  /:::|____|        \:::\    \       \::/    \:::\  /:::/    /
 \:::\   \:::\   \/____/  \:::\   \:::\   \/____/   /:::/    / \/____/  \/____/ \:::\/:::/    /  \/____|:::::\/:::/    /          \:::\    \       \/____/ \:::\/:::/    / 
  \:::\   \:::\    \       \:::\   \:::\    \      /:::/    /                    \::::::/    /         |:::::::::/    /            \:::\    \               \::::::/    /  
   \:::\   \:::\____\       \:::\   \:::\____\    /:::/    /                      \::::/    /          |::|\::::/    /              \:::\    \               \::::/    /   
    \:::\   \::/    /        \:::\  /:::/    /    \::/    /                       /:::/    /           |::| \::/____/                \:::\    \              /:::/    /    
     \:::\   \/____/          \:::\/:::/    /      \/____/                       /:::/    /            |::|  ~|                       \:::\    \            /:::/    /     
      \:::\    \               \::::::/    /                                    /:::/    /             |::|   |                        \:::\    \          /:::/    /      
       \:::\____\               \::::/    /                                    /:::/    /              \::|   |                         \:::\____\        /:::/    /       
        \::/    /                \::/    /                                     \::/    /                \:|   |                          \::/    /        \::/    /        
         \/____/                  \/____/                                       \/____/                  \|___|                           \/____/          \/____/         
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
*/

#define MAX_BOARD_SIZE 100
#define TURRET 'T'
#define PAWN 'X'
#define EMPTY '.'

char board[MAX_BOARD_SIZE][MAX_BOARD_SIZE];
int boardSize;

void discoverPositionForNextTurret(
    int startingLine, int startingColumn, int &line, int &column)
{
    for (size_t j = startingColumn; j < boardSize; j++)
        if (board[startingLine][j] == EMPTY)
        {
            line = startingLine;
            column = j;
            return;
        }

    for (size_t i = startingLine + 1; i < boardSize; i++)
        for (size_t j = 0; j < boardSize; j++)
            if (board[i][j] == EMPTY)
            {
                line = i;
                column = j;
                return;
            }
}

int findPawnColumn(int line, int startingColumn)
{
    int pawnColumn = startingColumn;

    while (pawnColumn < boardSize && board[line][pawnColumn] != PAWN)
        pawnColumn++;

    return pawnColumn;
}

bool turretCanBeAttacked(int line, int column)
{
    // Check left
    for (int i = column - 1; i >= 0; i--)
    {
        if (board[line][i] == TURRET)
            return true;
        if (board[line][i] == PAWN)
            break;
    }

    // Check right
    for (int i = column + 1; i < boardSize; i++)
    {
        if (board[line][i] == TURRET)
            return true;
        if (board[line][i] == PAWN)
            break;
    }

    // Check up
    for (int i = line - 1; i >= 0; i--)
    {
        if (board[i][column] == TURRET)
            return true;
        if (board[i][column] == PAWN)
            break;
    }

    // Check down
    for (int i = line + 1; i < boardSize; i++)
    {
        if (board[i][column] == TURRET)
            return true;
        if (board[i][column] == PAWN)
            break;
    }

    return false;
}

void printBoard(int &numTurrets)
{
    cout << "SOLUÇÃO ENCONTRADA (n = " << numTurrets << "):" << endl;
    for (size_t i = 0; i < boardSize; i++)
    {
        for (size_t j = 0; j < boardSize; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "==================" << endl
         << endl;
}

void placeTurret(int line, int column, int numTurrets, int &maxNumTurrets)
{
    numTurrets++;
    int pawnColumn = findPawnColumn(line, column + 1);
    int nextTurretLine, nextTurretColumn;

    for (size_t i = column; i < pawnColumn; i++)
    {
        if (turretCanBeAttacked(line, i))
            continue;

        int startLine = line, startColumn = pawnColumn + 1;
        board[line][i] = TURRET;
        do
        {
            nextTurretLine = nextTurretColumn = -1;
            discoverPositionForNextTurret(
                startLine, startColumn, nextTurretLine, nextTurretColumn);

            if (nextTurretLine == -1 || nextTurretColumn == -1)
            {
                // printBoard(numTurrets);
                if (numTurrets > maxNumTurrets)
                    maxNumTurrets = numTurrets;
                board[line][i] = EMPTY;
                return;
            }

            startLine = nextTurretLine;
            startColumn = nextTurretColumn + 1;

        } while (turretCanBeAttacked(nextTurretLine, nextTurretColumn));

        placeTurret(nextTurretLine, nextTurretColumn, numTurrets, maxNumTurrets);
        board[line][i] = EMPTY;
    }
}

int getMaxNumTurrets()
{
    int line = -1, column = -1;
    discoverPositionForNextTurret(0, 0, line, column);

    if (line == -1 || column == -1)
        return 0;

    int maxNumTurrets = 0;
    placeTurret(line, column, 0, maxNumTurrets);
    return maxNumTurrets;
}

int main()
{
    string boardLine;
    cin >> boardSize;

    while (!cin.eof())
    {
        cin.ignore();

        for (size_t i = 0; i < boardSize; i++)
        {
            getline(cin, boardLine);
            for (size_t j = 0; j < boardSize; j++)
                board[i][j] = boardLine[j];
        }

        cout << getMaxNumTurrets() << endl;
        cin >> boardSize;
    }
}
