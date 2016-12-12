wave add / -radix unsigned

isim force add Bus2IP_Resetn 0 -time 0
isim force add data 0 -time 0
isim force add Bus2IP_Clk 0 -time 0 -value 1 -time 2ns -repeat 4ns

run 60 ns

isim force add Bus2IP_Resetn 1 -time 0

run 10000000 ns