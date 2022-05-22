%20220521 cjq
clc;
clear;
%https://ww2.mathworks.cn/help/instrument/tcpserver.html
port=7000;
t = tcpserver("localhost",port,"Timeout",20,"ConnectionChangedFcn",@connectionFcn);
pause(5)
DataPkg=[-500,0,0,0,0,0,500,500];
while(1)
    if t.Connected
        for i=1:1000
            write(t,num2str(DataPkg+i*[10,0,0,0,0,0,0,0]),"string")
            pause(0.02)
        end
        break;
    end
end