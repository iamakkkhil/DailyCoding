def maximumMeetings(n,start,end):
    pair = [[start[i],end[i]] for i in range(n)]
    pair.sort(key=lambda x: x[1])

    count = 0
    maximum = 0
    for i in range(n):
        if pair[i][0] > maximum:
            count+=1
            maximum = pair[i][1]

    return count


if __name__=="__main__":
    S = [75250, 50074, 43659, 8931, 11273, 27545, 50879, 77924]
    F = [112960, 114515, 81825, 93424, 54316, 35533, 73383, 160252]
    print(maximumMeetings(8, S, F))
