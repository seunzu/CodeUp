h, b, c, s = map(int, input().split())

print(round(h*b*c*s/8/1024/1024, 1), "MB") # 소수점 첫째 자리까지 출력

