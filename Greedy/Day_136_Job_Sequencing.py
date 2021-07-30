def jobSequencing(job):
    job = sorted(job, reverse=True, key=lambda x: x[2])
    profit, count = 0, 0
    maxTime = max(job,key=lambda x: x[1])[1] 
    timeSlots = [False] * maxTime

    for i in range(len(job)):
        for j in range(min(maxTime - 1, job[i][1] - 1), -1, -1):
            if timeSlots[j] == False:
                timeSlots[j] = True
                profit += job[i][2]
                count += 1
                break

    print(f'Max jobs can be schedued are: {count}')
    print(f'Max Profit earned is: {profit}')


if __name__ == '__main__':
    jobList = [(1, 4, 20), (2, 1, 10), (3, 1, 40), (4, 1, 30)]
    jobSequencing(jobList)