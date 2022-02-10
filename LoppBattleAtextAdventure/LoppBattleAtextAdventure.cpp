// LoppBattleAtextAdventure.cpp : This file contains the 'main' function. Program execution begins and ends there.
// IDEA
//Setting: medival age
//Character
//ruler of a powerful kingdom
//somebody sends a message saying to 1v1 them bro and if u lose u die and give up ur kingdom and if they lose they give up their most valuable gift
//u train
//u fight
//u die or not

#include <iostream>
#include <Windows.h>

void start();
void begin();
void train();
void fight();
void end();
//1
void start() {
    int choice;
    //beginning
    std::cout << "Welcome to LoppBattle. A game made by Sooper Booper\n";
    //question
    std::cout << "1. Start\n";
    std::cout << "2. Credits\n";
    //user input
    std::cin >> choice;
    
    //consequence
    if (choice == 1) {
        //next scene
        begin();
    }
    else if (choice == 2) {
        std::cout << "LoppBattle: by Sooper booper\n";
        std::cout << "this is a joke game lmao\n";
        start();
    }
    else {
        std::cout << "INVALID NUMBER DONT DO IT AGAIN\n";
        start();
    }
}
//2
void begin() {
    int choice2;
    //scene begins
    std::cout << "It is the year 500 CE. You are a ruler of a very powerful kindom called deez. deez what? joe mama gottem.\n" << " After lunch you walk to your study and you find a note on your desk.\n" <<
        "It says, '1v1 me bro at sword fighting at 5 pm today. If you lose you die and i get your kingdom and if I lose you get my most valuable item. Signed - Lopp'\n " << "Do you accept to fight?\n";
    //question
    std::cout << "1. Accept\n";
    std::cout << "2. Decline\n";
    //user input
    std::cin >> choice2;
    //consequence
    if (choice2 == 1) {
        //next scene
        train();
    }
    else if (choice2 == 2) {
        std::cout << "You have died from death.\n";
        begin();
    }
    else {
        std::cout << "HEY YOU PRESSED SOMETHIN ELSE STOP!\n";
        begin();
    }
}
//3
void train() {
    int choice3;
    //scene
    std::cout << "You accept the sword duel. You feel out of shape and rusty.\n";
    //question
    std::cout << "1. Train?\n";
    std::cout << "2. Relax?\n";
    //user input
    std::cin >> choice3;
    //consequence
    if (choice3 == 1) {
        std::cout << "As you walk to the gym a portal opens next to you. A steam engine hits u at high speed.\n" << "You have died\n";
        train();
    }
    else if (choice3 == 2) {
        std::cout << "You decide to just take a nap.\n";
        fight();
    }
    else {
        std::cout << "HEY CAN YOU STOP PICK ONE OR 2!";
        train();
    }
}
//4
void fight() {
    int choice4;
    //scene
    std::cout << "You wake up. Its 4:59 oh no. You then wear your armor and rush out to the feild. You wait for your opponent.\n" << "You hear a purr. You look a little down and see a 0,6 cat wearin goggles and a hoodie\n" << "You start to laugh but then you smell the odor.\n" << "ITS HORRIBLE OH GOD WHY IS THIS CAT SO STINKY???!!!!IM CRYIN RIGHT KNOW\n";
    std::cout << "Your oppenent says, 'Meow'. <TRANSLATION> my name is loppezz fear me.\n";
    //question
    std::cout << "1. call loppezz a stinky, short cat\n";
    std::cout << "2. call loppezz a sussy baka\n";
    //user input
    std::cin >> choice4;
    //consequence
    if (choice4 == 1) {
        std::cout << "Loppezz pulls out a glowing red sword 1000000000x your height. He meows <Translation> 'I like ur cut G'\n" << "The sword kills u instantly. lmao \n";
        fight();
    }
    else if (choice4 == 2) {
       std::cout << "Loppezz has a shocked look on his face. He walks to you and gives you a really really small cat plushie. He meows. <Translation> im too sus\n" << "He falls over and pulls out a phone. He updates his discord to sussy lopp.\n";
       std::cout << "YOU WIN!\n";
       end();
      
    }
    else {
        std::cout << "GODDAMN IT AGAIN???";
        start();
    }
}
//end
void end() {
    int choice5;
    //transition
    std::cout << "THANKS FOR PLAYING!!!\n";
    std::cout << "1. credits\n";
    std::cout << "2. replay\n";

    std::cin >> choice5;

    if (choice5 == 1) {
        std::cout << "Game made by Sooper Booper!\n";
        std::cout << "Game for loppezz's yarn factory!\n";
        end();
    }
    else if (choice5 == 2) {
        start();
    }
    else {
        std::cout << "STOOOOOOOPPP IT\n";
        start();
    }
}
int main()
{
    start();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
