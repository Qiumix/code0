MOD = 10**9 + 7
n = int(input())
nums = list(map(int, input().split()))


def calculate_all_combinations():
    if n == 1:
        return nums[0]

    xor_sum = [0] * n
    add_sum = [0] * n
    sub_sum = [0] * n

    xor_sum[1] = nums[0] ^ nums[1]
    add_sum[1] = nums[0] + nums[1]
    sub_sum[1] = nums[0] - nums[1]

    for i in range(2, n):
        xor_sum[i] = ((xor_sum[i - 1] ^ nums[i]) + (add_sum[i - 1] ^ nums[i]) +
                      (sub_sum[i - 1] ^ nums[i])) % MOD

        add_sum[i] = ((xor_sum[i - 1] + nums[i]) + (add_sum[i - 1] + nums[i]) +
                      (sub_sum[i - 1] + nums[i])) % MOD

        sub_sum[i] = ((xor_sum[i - 1] - nums[i]) + (add_sum[i - 1] - nums[i]) +
                      (sub_sum[i - 1] - nums[i])) % MOD

    return (xor_sum[n - 1] + add_sum[n - 1] + sub_sum[n - 1]) % MOD


result = calculate_all_combinations()
print(result)
