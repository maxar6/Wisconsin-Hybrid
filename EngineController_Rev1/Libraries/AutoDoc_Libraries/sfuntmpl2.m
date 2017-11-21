function [sys,x0,str,ts] = sfuntmpl2(t,x,u,flag)


switch flag,

  case 0,
  [sys,x0,str,ts]=mdlInitializeSizes;    
    
  case { 1, 2, 3, 4, 9 }
  sys=[];

end


function [sys,x0,str,ts] = mdlInitializeSizes

sizes = simsizes;

sizes.NumContStates  = 0;
sizes.NumDiscStates  = 0;
sizes.NumOutputs     = 0;
sizes.NumInputs      = 0;
sizes.DirFeedthrough = 1;
sizes.NumSampleTimes = 1;

sys = simsizes(sizes);
x0  = [];
str = [];
ts  = [-1 0];