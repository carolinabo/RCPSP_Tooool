set r / 
r53
/; 

set j / 
Q 
j518
j519
j520
j521
j522
j523
j524
j525
j526
S 
/; 

set t /t0*t50/; 

VN(h,j)=no; 
VN('Q','j518')=yes;
VN('j518','S')=yes;
VN('Q','j519')=yes;
VN('j519','S')=yes;
VN('Q','j520')=yes;
VN('j520','S')=yes;
VN('Q','j521')=yes;
VN('j521','S')=yes;
VN('Q','j522')=yes;
VN('j522','S')=yes;
VN('Q','j523')=yes;
VN('j523','S')=yes;
VN('Q','j524')=yes;
VN('j524','S')=yes;
VN('Q','j525')=yes;
VN('j525','S')=yes;
VN('Q','j526')=yes;
VN('j526','S')=yes;

VN('j518','j519')=yes; 
VN('j518','j520')=yes; 
VN('j519','j521')=yes; 
VN('j520','j524')=yes; 
VN('j521','j522')=yes; 
VN('j521','j523')=yes; 
VN('j522','j525')=yes; 
VN('j522','j526')=yes; 
VN('j523','j524')=yes; 
VN('j524','j526')=yes; 

parameter 
d(j) / 
Q   0
S   0
j518   2
j519   4
j520   3
j521   7
j522   2
j523   1
j524   5
j525   2
j526   7
/
FEZ(j) /
Q   0
S   0
j518   2
j519   6
j520   5
j521   13
j522   15
j523   14
j524   19
j525   17
j526   26
/
SEZ(j) /
Q   0
S   50
j518   2
j519   6
j520   14
j521   13
j522   19
j523   14
j524   19
j525   26
j526   26
/
Kap(r) /
r53   9
/;

k(j,r)=0;
k('j518','r53')=1;
k('j519','r53')=2;
k('j520','r53')=6;
k('j521','r53')=1;
k('j522','r53')=1;
k('j523','r53')=2;
k('j524','r53')=2;
k('j525','r53')=1;
k('j526','r53')=8;
