let poly = fun a b c -> let delt = (b*.b)-.(4.0*.a*.c) in
			if delt < 0.0
                        then -1 
                        else if delt = 0.0
                        then -1
                        else 0

let test = fun x y z -> if z = x + y
                        then true
                        else false

let valeur_p4 = fun x -> (3*(x*x*x*x))+7*x-1

let polynome3 = fun a b c -> let x = 0 in
                             a(x*x)+b*x+c

let rec pgcd = fun n p -> if p = 0 then n
                          else pgcd p (n mod p);;

let rec ack = fun m n -> if m = 0 then n+1
                         else if m > 0 && n = 0 then ack (m-1) 1
                         else ack (m-1) (ack m (n-1));;

  
let rec stairs = fun n -> if n <= 1 then 1
                          else if n = 2 then 2
                          else stairs (n-1) + stairs (n-2) + stairs (n-3);;

let rec power = fun b n -> if n = 0 then 1
                           else (b * (power b (n-1)));;

  
let rec sum = fun n p -> if n > p then 0
                         else n + sum (n+1) p

 
let value_at_one f = f 1;;

let rec op_prod n p f op neutral =
                         if n > p then neutral
                         else op (f n) (op_prod (n+1) p f op neutral)
                                 ;; 
