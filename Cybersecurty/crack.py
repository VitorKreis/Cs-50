from string import digits, ascii_letters, punctuation
from itertools import product


for crack in product(digits + ascii_letters + punctuation,  repeat=4):
    print(*crack)