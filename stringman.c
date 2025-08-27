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
