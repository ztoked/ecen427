wave add / -radix hex

isim force add Bus2IP_Resetn 0 -time 0
isim force add slv_reg0 10 -time 0
isim force add slv_reg1 7 -time 0

isim force add Bus2IP_Clk 0 -time 0 -value 1 -time 10ns -repeat 20ns

run 60 ns

isim force add Bus2IP_Resetn 1 -time 0

run 340 ns

isim force add slv_reg1 5 -time 0

run 150 ns

isim force add slv_reg1 3 -time 0

run 200 ns

isim force add slv_reg1 7 -time 0


run 300 ns


isim force add slv_reg1 6 -time 0

run 200 ns
