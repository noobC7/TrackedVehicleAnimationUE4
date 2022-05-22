# TrackedVehicleAnimationUE4
### Introduction:
With the tcp, the matlab m-file sends the current driving status of the tracked vehicle to UE4, which acts as an animated display.
So this project is mainly used to do animation for any tracked vehicle in my course.

### Main Use:
You can test your tracked vehicle dynamic model or algorithm in m-file and view real-time driving results instead of showing in matlab figure window.

### Environment Requirements:
- Matlab2021b
- UE4.27 with TCP Socket Plugin(Free in Epic Store)
  ![image](https://user-images.githubusercontent.com/59406542/169698055-0e8803a0-7a65-4898-b9a9-427476222440.png)

### Declaration:
The prototype of the tracked vehicle is from MMT content
https://forums.unrealengine.com/t/open-source-machinery-modelling-toolkit/54422

### How to use:
1. Add your own tracked vehicle model in ServerMain.m, modify the sending 8D-vector which presents the current driving status 
   [x-position(cm),y-position(cm),z-position(cm),Roll(degree),Pitch(degree),Yaw(degree),left-track velocity(cm/s),right-track velocity(cm/s)]
  ![image](https://user-images.githubusercontent.com/59406542/169698360-75fbf83f-7746-46a7-a482-f550c402be78.png)
2. rectify the tracked vehicle info in MMT-Content.uproject->MyM113 in scene->edit its blueprint->MyM113(self)->details->TCP Command->3 types of Radius
  ![image](https://user-images.githubusercontent.com/59406542/169699390-cce76310-84a4-47eb-bbc2-7ae5cee4078c.png)
3. replace your own tracked vehicle static mesh if needed
  ![image](https://user-images.githubusercontent.com/59406542/169699382-89bbe310-8158-4a9a-835f-47181753a885.png)
