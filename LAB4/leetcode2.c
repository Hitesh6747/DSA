int firstUniqChar(char* s) { 
    int charCount[26] = {0}; 
    for (int i = 0; s[i] != '\0'; i++) { 
        charCount[s[i] - 'a']++; 
    } 
    for (int i = 0; s[i] != '\0'; i++) { 
        if (charCount[s[i] - 'a'] == 1) 
{ 
            return i; 
        } 
    } 
    return -1; 
}
