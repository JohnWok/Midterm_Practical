#include <iostream>
#include <string>
#include <vector>
#include <ctime>

int main()
{
    srand(time(NULL));
    std::vector<std::string> sentence = 
    { "What two keys can't open any door? ", 
        "What can run but not walk? ", 
        "What has a head, a tail, but does not have a body? ", 
        "What bird can lift the most weight? " };
    std::vector<std::string> answers =
    { "A monkey and a donkey", 
        "Rain drops", 
        "A coin", 
        "A crane" };
    std::string n_words = sentence[rand() % sentence.size()];
    std::cout << n_words << std::endl; 
    std::cout << "What's your answer: ";
    std::string word = " ";
    std::getline(std::cin, word);
    
  
        if (word == answers[0] || word == answers[1] || word == answers[2] || word == answers[3])
        {
            std::cout << "Correct!";
          
        }
        else
        {
            std::cout << "Incorrect!\n";
           
        }

       
}


