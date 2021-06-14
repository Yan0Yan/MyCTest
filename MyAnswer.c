int maxRepeating(char * sequence, char * word)
{
    int len_s = strlen(sequence);
    int len_w = strlen(word);
    int sum[100] = {0};
    int max = 0;

    for(int i = 0; i <= len_s; i++){
        for(int j = 0; i + j <= len_s; j++){
            if(sequence[i + j] != word[j % len_w]){
                break;
            }
            if(j % len_w == len_w - 1){
                sum[i]++;
            }
        }
    }

    for(int i = 0; i < 100; i++){
        if(max < sum[i]){
            max = sum[i];
        } 
    }
    
    return max;
}