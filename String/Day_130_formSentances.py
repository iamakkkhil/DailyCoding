def areIsomorphic(str1,str2):
    if len(str1) != len(str2):
        return False
    
    definations = {}
    
    for i in range(len(str1)):
        if str1[i] in definations.keys():
            if definations[str1[i]] != str2[i]:
                return False
        elif str2[i] in definations.values():
            return False
        else:
            definations[str1[i]] = str2[i];
    
    return True


if __name__=="__main__":
    str1 = 'aabcbc'
    str2 = 'xxyzyz'
    print(areIsomorphic(str1, str2))
    