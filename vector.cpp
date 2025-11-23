// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector <int> v ; //vector aise banta h5
//     cout<<"size of vector"<<v.size() <<endl;
//     cout<<"size of capacity"<<v.capacity()<<endl;
//     for(int i = 0;i<v.size();i++){
//         cout<<v[i]<<" ";//iiss tarike se karuge toh sahi h capacity ka kaam under hota h yeh sirf samjh ne ke liye hai
//     }
//     cout<<endl;
//     v.push_back(2);//yeh print ni hota 
//     cout<<"size of vector"<<v.size()<<endl;
//     // cout<<"this is vector"<<v<<" "<<endl;
//     cout<<"size of capacity"<<v.capacity()<<endl;
//     for(int i = 0;i<v.size();i++){
//         cout<<v[i]<<" ";//iiss tarike se karuge toh sahi h capacity ka kaam under hota h yeh sirf samjh ne ke liye hai
//     }
//     cout<<endl;
//     v.push_back(432);
//     cout<<"size of vector"<<v.size()<<endl;
//     cout<<"size of capacity"<<v.capacity()<<endl;
//     for(int i = 0;i<v.size();i++){
//         cout<<v[i]<<" ";//iiss tarike se karuge toh sahi h capacity ka kaam under hota h yeh sirf samjh ne ke liye hai
//     }
//     cout<<endl;
//     v.push_back(42);
//     cout<<"size of vector"<<v.size()<<endl;
//     cout<<"size of capacity"<<v.capacity()<<endl;
//     for(int i = 0;i<v.size();i++){
//         cout<<v[i]<<" ";//iiss tarike se karuge toh sahi h capacity ka kaam under hota h yeh sirf samjh ne ke liye hai
//     }
//     cout<<endl;
//     v.push_back(72);
//     cout<<"size of vector"<<v.size()<<endl;
//     cout<<"size of capacity"<<v.capacity()<<endl;
//     for(int i = 0;i<v.size();i++){
//         cout<<v[i]<<" ";//iiss tarike se karuge toh sahi h capacity ka kaam under hota h yeh sirf samjh ne ke liye hai
//     }
//     cout<<endl;
//     v.push_back(82);
//     cout<<"size of vector"<<v.size()<<endl;
//     cout<<"size of capacity"<<v.capacity()<<endl;
//     for(int i = 0;i<v.size();i++){
//         cout<<v[i]<<" ";//iiss tarike se karuge toh sahi h capacity ka kaam under hota h yeh sirf samjh ne ke liye hai
//     }
//     cout<<endl;
//     v.push_back(92);
//     cout<<"size of vector"<<v.size()<<endl;
//     cout<<"size of capacity"<<v.capacity()<<endl;
//     for(int i = 0;i<v.size();i++){
//         cout<<v[i]<<" ";//iiss tarike se karuge toh sahi h capacity ka kaam under hota h yeh sirf samjh ne ke liye hai
//     }
//     cout<<endl;
//     v.insert(v.begin()+0,78);
//     cout<<"size of vector"<<v.size()<<endl;
//     cout<<"size of capacity"<<v.capacity()<<endl;
//     for(int i = 0;i<v.size();i++){
//         cout<<v[i]<<" ";//iiss tarike se karuge toh sahi h capacity ka kaam under hota h yeh sirf samjh ne ke liye hai
//     }
//     cout<<endl;
//     v.pop_back();
//     cout<<"size of vector"<<v.size()<<endl;
//     cout<<"size of capacity"<<v.capacity()<<endl;
//     for(int i = 0;i<v.size();i++){
//         cout<<v[i]<<" ";//iiss tarike se karuge toh sahi h capacity ka kaam under hota h yeh sirf samjh ne ke liye hai
//     }
//     cout<<endl;
//     v.erase(v.end()-2);//dusre number wala

//     cout<<"size of vector"<<v.size()<<endl;
//     cout<<"size of capacity"<<v.capacity()<<endl;
//     for(int i = 0;i<v.size();i++){
//         cout<<v[i]<<" ";//iiss tarike se karuge toh sahi h capacity ka kaam under hota h yeh sirf samjh ne ke liye hai
//     }

//     cout<<endl;

//     for(int i = 0;i<=v.size();i++){//agr hum equal to lagainge 
//         // toh last me 0 lasmin aigaa lekin yeh tabb hoga jab capacity ka size jyada ho 
//         // agr capacit size = size of vector toh last me random value a jaigi 
//         cout<<v[i]<<" "; 
//     }
// cout<<endl;
//     for(int i = 0;i<v.size();i++){
//         cout<<v[i]<<" ";//iiss tarike se karuge toh sahi h capacity ka kaam under hota h yeh sirf samjh ne ke liye hai
//     }

// }

#include <iostream>

using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char currentMarker;
int currentPlayer;

void drawBoard() {
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

bool placeMarker(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = currentMarker;
        return true;
    } 
    return false;
}

int checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return currentPlayer;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return currentPlayer;
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return currentPlayer;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return currentPlayer;

    return 0;
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 1) ? 2 : 1;
    currentMarker = (currentMarker == 'X') ? 'O' : 'X';
}

void playGame() {
    int slot, winner = 0;
    currentPlayer = 1;
    currentMarker = 'X';

    for (int i = 0; i < 9 && winner == 0; i++) {
        drawBoard();
        cout << "Player " << currentPlayer << ", enter your slot (1-9): ";
        cin >> slot;

        if (slot < 1 || slot > 9 || !placeMarker(slot)) {
            cout << "Invalid move, try again." << endl;
            i--; // Don't count this turn
            continue;
        }

        winner = checkWin();
        if (winner == 0) switchPlayer();
    }

    drawBoard();
    if (winner) cout << "Player " << winner << " wins!" << endl;
    else cout << "It's a draw!" << endl;
}

int main() {
    cout << "Welcome to Tic-Tac-Toe!" << endl;
    playGame();
    return 0;
}
