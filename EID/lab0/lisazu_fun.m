function lisazu_fun(f1,f2)
%Funkcija kas uzzīmē Lisažu figūras
%Call:
%lisazu_fun(f1,f2)
%
%27.01.20
%autors Emīls Vizulis
t = 0:0.01:1;
%f1=420; f2=69;
x=cos(2*pi*f1*t);
y=sin(2*pi*f2*t);
plot(x,y)
shg