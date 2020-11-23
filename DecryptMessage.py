def decrypting(keys, a){
    
    for i in range(len(a)):
        key = ord(keys[i % 6]) - ord('A')
        if(ord(a[i]) - key) > ord('A'):
            a[i] = ascii(ord(a[i]) - key)
        elif (ord(a[i] > ord('z'))):
            continue
        else:
            a[i] = ascii((-ord('A') - (ord(a[i]) - key)) + int('z'))
    return a
if __name__ == "__main__":
    enc_m = "lcj'] [Yp J bYiX ]^`k] _]X hXoa hXO_.";
    keys = "invicta"
    dec_m = decrypting(keys, enc_m)
    print(dec_m)
