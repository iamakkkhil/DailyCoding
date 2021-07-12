def isPowerofTwo(n):
    if n&n-1 == 0 and n!=0:
        return True  
    return False


if __name__=="__main__":
    print(isPowerofTwo(5))
    print(isPowerofTwo(0))
    print(isPowerofTwo(16))