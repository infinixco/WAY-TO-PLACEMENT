def countWays(n):
    '''
    :param n: given value of n
    :return: Integer , ways to write n as sum of positive integers
    '''
    mod = 1000000007
    dp = [0 for i in range(n+1)]
    dp[0]=1 # choosing 0 in one way
    
    '''
    Pick all integer one by one and update the
    dp[] values after the index greater
    than or equal to n
    '''
    for i in range(1,n):
        for j in range(i,n+1):
            dp[j] = (dp[j]%mod + dp[j-i]%mod)%mod

    return dp[n]