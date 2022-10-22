# include <iostream>

int main() {
    int King,Queen,Rook,Bishop,Knight,Pawn;
    std::cin >> King >> Queen >> Rook >> Bishop >> Knight >> Pawn;
    std::cout << 1-King << " " << 1-Queen << " " << 2-Rook << " " << 2-Bishop << " " << 2-Knight << " " << 8-Pawn << " " << std::endl;
}