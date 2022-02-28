int isPangram(char *str){
    int count[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ')
            count[str[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
        {
            return 0;
        }
    }
    return 1;
}
