// author-akshat khatri
// date-24-08-2023
//  counting the number of ballots in an election

#include <iostream>
#include <string>
int main()
{
    // int cand_1, cand_2, cand_3, cand_4, cand_5;
    int spoilt_ballot = 0;
    int vote;
    int result[5] = {0};
    int i, show;
    // std::string winner;
    std::cout << "to show result press 0 when asked to vote" << std::endl;

    while (1)
    {

        // std::cout<<"to show result type res to continue press any key"<<std::endl;
        // std::cin>>winner;

        std::cout << "please vote for the canditate 1 to 5" << std::endl;
        std::cin >> vote;

        if (vote == 0)
        {
            int max = result[0];

            for (i = 0; i < sizeof(result) / sizeof(result[0]); i++)
            {
                if (result[i] >= max)
                {
                    max = result[i];
                    show = i;
                }
            }
            std::cout << "winner is canditate"
                      << " " << (show + 1) << " "
                      << "with"
                      << " " << max << " "
                      << "votes" << std::endl;
            std::cout << "spoilt ballots are"
                      << " " << spoilt_ballot << std::endl;
            break;
        }
        else if (vote > 5 || vote < 1)
        {
            spoilt_ballot++;
        }
        else
        {
            result[vote - 1]++;
        }
    }
    return 0;
}