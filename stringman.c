void kopistr(char* dest, const char* src){
    int i = 0;
    for (i =  0; src[i] != '\0'; i++){
        dest[i] = src[i];
    }
    dest[i] = '\0';
}

int hitungkar(const char* format){
    int i = 0;
    while (format[i] != '\0'){
        i++;
    }
    return i;
}

int bandingstr(const char* dest, const char* src){     //Technical Debt for you, rifqi
    int sama = -1; //0 = sama, -1 = beda. asumsi awal adalah beda, jadi ya begitulah...
    int a = 0;    //panjang dest
    int b = 0;    //panjang src
    for (int i = 0; dest[i] != '\0'; i++){
        a++;
    }
    for (int j = 0; src[j] != '\0'; j++){
        b++;
    }
    if (a == b){
        for (int i = 0; dest[i] != '\0' && src[i] != '\0'; i++){
            if (dest[i] == src[i]){
                sama = 0;
                continue;
            }
            else {
                sama = -1;
                break;
            }
        }
        if (sama == 0){
            return sama;
        }
        else {
            return sama;
        }
    }
    else {
        for (int i = 0; dest[i] != '\0' && src[i] != '\0'; i++){
            if (dest[i] == src[i]){
                continue;
            }
            else {
                sama = -1;
                break;
            }
        }
        if (sama == 0){
            return sama;
        }
        else {
            return sama;
        }
    }
}
