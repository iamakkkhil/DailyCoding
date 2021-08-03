def setBits(N):
    count=0
    while (N>0):
        if N&1:
            count+=1
        N = N>>1
    return count


if __name__ == '__main__':
    setBits(10)