w, h, b = map(int, input().split())
res=w*h*b/1024/1024/8

print('%.2f'%res,"MB") # 소수점 셋째 자리에서 반올림 -> 둘째 자리까지 출력