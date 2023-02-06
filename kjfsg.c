set -x
factorial 10
+ factorial 10
+ local -i _req=10 _crt=6 _next=_crt+1 _factor=120
+ '[' '' ']'
+ printf -v '_factorials[_crt]' %u 720
+ factorial 10 7
+ local -i _req=10 _crt=7 _next=_crt+1 _factor=720
+ '[' '' ']'
+ printf -v '_factorials[_crt]' %u 5040
+ factorial 10 8
+ local -i _req=10 _crt=8 _next=_crt+1 _factor=5040
+ '[' '' ']'
+ printf -v '_factorials[_crt]' %u 40320
+ factorial 10 9
+ local -i _req=10 _crt=9 _next=_crt+1 _factor=40320
+ '[' '' ']'
+ printf -v '_factorials[_crt]' %u 362880
+ factorial 10 10
+ local -i _req=10 _crt=10 _next=_crt+1 _factor=362880
+ '[' '' ']'
+ printf -v '_factorials[_crt]' %u 3628800
+ factorial 10 11
+ local -i _req=10 _crt=11 _next=_crt+1 _factor=3628800
+ '[' 3628800 ']'
+ printf '%u\n' 3628800
3628800
