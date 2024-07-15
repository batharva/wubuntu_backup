#include <iostream>
using namespace std;
void draw(char array[3][3]){
    int a=1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<array[i][j]<<"|";
            
        }
        cout<<"   "<<a<<" "<<a+1<<" "<<a+2;
        cout<<endl;
        a=a+3;
    }
}
bool winnerprint(char array[3][3],int flag,int win){
    switch (flag)
    {
    case 1:
        cout<<"Player 1 is winner."<<endl;
        win=0;
        break;
    case 0:
        cout<<"Player 2 is winner."<<endl;
        win=0;
        break;
    case -1:
        win =1;
        break;
    }
    return win;
}
int conditions(char array[3][3]){
    for (int i = 0; i < 3; i++)
    {
        if (array[i][0]=='X' && array[i][1]=='X' && array[i][2]=='X')
        {
            return 1;
            break;
        }else if (array[i][0]=='O' && array[i][1]=='O' && array[i][2]=='O')
        {
            return 0;
            break;
        }else if (array[0][i]=='X' && array[1][i]=='X' && array[2][i]=='X')
        {
            return 1;
            break;
        }else if (array[0][i]=='O' && array[1][i]=='O' && array[2][i]=='O')
        {
            return 0;
            break;
        }else if (array[0][i]=='X' && array[1][1]=='X' && array[2][2-i]=='X')
        {
            return 1;
            break;
        }else if (array[0][i]=='O' && array[1][1]=='O' && array[2][2-i]=='O')
        {
            return 0;
            break;
        }
        
    }

    return -1;
}
int main(){
    char box[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            box[i][j]='*';
        }
    }
    bool win=1;
    int p1,p2;
    while (win)
    {
        draw(box);
        cout<<"Player 1(X):"<<endl;
        cin>>p1;
        switch (p1)
        {
        case 1:
            box[0][0]='X';
            break;
        case 2:
            box[0][1]='X';
            break;
        case 3:
            box[0][2]='X';
            break;
        case 4:
            box[1][0]='X';
            break;
        case 5:
            box[1][1]='X';
            break;
        case 6:
            box[1][2]='X';
            break;
        case 7:
            box[2][0]='X';
            break;
        case 8:
            box[2][1]='X';
            break;
        case 9:
            box[2][2]='X';
            break;    
        }
        draw(box);
        if (!winnerprint(box,conditions(box),win))
        {
            break;
        }
        cout<<"Player 2(O):"<<endl;
        cin>>p2;
        switch (p2)
        {
        case 1:
            box[0][0]='O';
            break;
        case 2:
            box[0][1]='O';
            break;
        case 3:
            box[0][2]='O';
            break;
        case 4:
            box[1][0]='O';
            break;
        case 5:
            box[1][1]='O';
            break;
        case 6:
            box[1][2]='O';
            break;
        case 7:
            box[2][0]='O';
            break;
        case 8:
            box[2][1]='O';
            break;
        case 9:
            box[2][2]='O';
            break;    
        }
        if (!winnerprint(box,conditions(box),win))
        {
            break;
        }
        
    }
    
    

    return 0;
}

// #include <iostream>
// using namespace std;

// // Function declarations
// void draw(const char array[3][3]);
// bool winnerprint(char array[3][3], int flag, int& win);
// int conditions(char array[3][3]);

// void draw(const char array[3][3]) {
//     for (int i = 0; i < 3; ++i) {
//         for (int j = 0; j < 3; ++j) {
//             cout << array[i][j];
//             if (j < 2) cout << '|';
//         }
//         cout << "   " << (i * 3 + 1) << " " << (i * 3 + 2) << " " << (i * 3 + 3) << endl;
//     }
// }

// bool winnerprint(char array[3][3], int flag, int& win) {
//     switch (flag) {
//         case 1:
//             cout << "Player 1 (X) is the winner!" << endl;
//             win = 0;
//             break;
//         case 0:
//             cout << "Player 2 (O) is the winner!" << endl;
//             win = 0;
//             break;
//         case -1:
//             win = 1;
//             break;
//     }
//     return win;
// }

// int conditions(char array[3][3]) {
//     for (int i = 0; i < 3; ++i) {
//         if (array[i][0] == 'X' && array[i][1] == 'X' && array[i][2] == 'X')
//             return 1;
//         else if (array[i][0] == 'O' && array[i][1] == 'O' && array[i][2] == 'O')
//             return 0;
//         else if (array[0][i] == 'X' && array[1][i] == 'X' && array[2][i] == 'X')
//             return 1;
//         else if (array[0][i] == 'O' && array[1][i] == 'O' && array[2][i] == 'O')
//             return 0;
//     }
//     if (array[0][0] == 'X' && array[1][1] == 'X' && array[2][2] == 'X')
//         return 1;
//     else if (array[0][0] == 'O' && array[1][1] == 'O' && array[2][2] == 'O')
//         return 0;
//     else if (array[0][2] == 'X' && array[1][1] == 'X' && array[2][0] == 'X')
//         return 1;
//     else if (array[0][2] == 'O' && array[1][1] == 'O' && array[2][0] == 'O')
//         return 0;

//     return -1;
// }

// int main() {
//     char box[3][3] = {{'*', '*', '*'}, {'*', '*', '*'}, {'*', '*', '*'}};
//     bool win = true;
//     int p1, p2;
//     while (win) {
//         draw(box);
//         cout << "Player 1 (X): ";
//         cin >> p1;
//         if (p1 < 1 || p1 > 9) {
//             cout << "Invalid move. Please enter a number between 1 and 9." << endl;
//             continue;
//         }
//         int row = (p1 - 1) / 3;
//         int col = (p1 - 1) % 3;
//         if (box[row][col] == '*')
//             box[row][col] = 'X';
//         else {
//             cout << "Cell already taken. Player 1, try again." << endl;
//             continue;
//         }
//         if (!winnerprint(box, conditions(box), win))
//             break;

//         draw(box);
//         cout << "Player 2 (O): ";
//         cin >> p2;
//         if (p2 < 1 || p2 > 9) {
//             cout << "Invalid move. Please enter a number between 1 and 9." << endl;
//             continue;
//         }
//         row = (p2 - 1) / 3;
//         col = (p2 - 1) % 3;
//         if (box[row][col] == '*')
//             box[row][col] = 'O';
//         else {
//             cout << "Cell already taken. Player 2, try again." << endl;
//             continue;
//         }
//         if (!winnerprint(box, conditions(box), win))
//             break;
//     }
//     return 0;
// }
