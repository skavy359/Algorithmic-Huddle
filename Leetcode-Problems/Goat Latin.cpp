class Solution
{
public:
    string toGoatLatin(string sentence)
    {
        istringstream iss(sentence);
        string word, result = "";
        string suffix = "a";
        while (iss >> word)
        {
            char firstChar = word[0];
            if (isVowel(firstChar))
            {
                word = word + "ma";
            }
            else
            {
                word = word.substr(1) + firstChar + "ma";
            }
            word += suffix;
            suffix += "a";
            result += word + " ";
        }
        result.pop_back();
        return result;
    }

private:
    bool isVowel(char ch)
    {
        ch = tolower(ch);
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
};
