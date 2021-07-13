def celebrity(M, n):
    # 2 pointers
    A = 0
    B = n-1
    
    # while loop to know celebrity
    while A<B:
        # if a knows b then a is not a celebrity
        if M[A][B] == 1:
            A+=1
        # if no knows b then b can't be celebrity
        else:
            B-=1
    
    # Possibility is that A can be celebrity
    # check count of A knowing no.of people
    # if countpeopleknowingA = n-1 and countAknowingpeople = 0
    count_People_Knowing_A = 0
    count_A_Knowing_People = 0
    
    for i in range(n):
        if M[i][A] == 1:
            count_People_Knowing_A += 1
        
        if M[A][i] == 1:
            count_A_Knowing_People += 1
            
    if count_People_Knowing_A == n-1 and count_A_Knowing_People == 0:
        return A
    
    return -1


if __name__ == "__main__":
    N = 3
    M = [[0, 1, 0],
         [0, 0, 0], 
         [0, 1, 0]]

    print(f"The celebrity is: {celebrity(M,N)}")