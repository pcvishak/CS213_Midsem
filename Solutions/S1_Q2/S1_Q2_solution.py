def Q(A, i, j, k):
	if i == j:
		return False
	else:
		if A[i] + A[j] < k:
			return Q(A, i+1, j, k)
		elif A[i] + A[j] > k:
			return Q(A, i, j-1, k)
		else:
			return True 

n = int(input())
A = list(map(int, input().split()))
k = int(input())
print(str(Q(A, 0, n-1, k)).lower())