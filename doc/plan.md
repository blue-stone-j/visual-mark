
# schedual
Develop plan. Features of different version are designed here.

### version control
1. commit 

### version devision method
1. major: 1(base) 2(better function) 3(new code structure, such as use electron)
2. minor: function
3. patch: stage of one function development
4. patch 0 declare the beginning of a new function.
4. Commits for bugs won't change version and will be at the front of commits queue. 
5. Tiny changes for developed function likely aren't be list in commit message.  

### development log
1. Only the most important bugs will be listed in bug log.
2. Only changes that can be noticed easily will be list, such as add, delete or change function, a significant cha nge to UI, bugs and so on.

# version-1
Window and basic functions.

## version-1.0
start project and create main window. Design interaction elements if possible.

### version-1.0.0
This mainwindow is derived from other window and I don't want to reserve unrelevant elements from it. So this will be a version that contains many new contents. It would be better to split them into several sub-versions.
##### main goal
1. start this project
2. main window and interaction elements
3. design code structure
##### features 
1. use office 16 format
2. add about form and other common forms
3. add logo.ico
4. add necessary resources and embed them
3. floating widget


---


## version-1.1
Display widgets and projection.

### version-1.1.
##### main goal
1. display cloud
##### features
1. design cloud and image pairs
2. read cloud of type pcd
3. display cloud in pcl_visualization
4. show fix box on cloud widget by overlying

### version-1.1.
##### main goal
1. display image
2. projection box and cloud
##### features
3. read image of type png and jpeg
2. display image
3. project cloud to image
5. show same box on image by overlying

### version-1.1.
##### main goal
1. add color field for cloud
##### features
1. height
2. intensity

## version-1.2
Add functions about bounding box.

### version-1.2.
##### main goal
1. adjustable box
##### features
1. adjust values to adjust pose of box
2. minus and plus for position
2. slide bar for rotation

### version-1.2.
##### main goal
1. multi-boxes
##### features
2. list multi-boxes
3. show multi-boxes
4. project multi-boxes

## version-1.3
add sequence and store

### version-1.3.
##### main goal
1. add sequence
##### features
1. design pattern of cloud, image and extrinsic


### version-1.3.
##### main goal
store and restore annotation result
##### features
* store boxes for every frame
* load last annotation result

# version 2
More functions and easier to use. 
This project is compatible with only Ubuntu by current version. But more features on Windows will be added continously to make it close to be a cross-platform project from this version. These features may not be listed in log or commits.

## version-2.0
better interaction with box
### version-2.0.1
##### main goal
use color to differ box and points
##### features
1. design color rule
2. use different color for different boxes
3. points share color with its box

### version-2.0.2
##### main goal
1. add bounding box interation on cloud widget
##### features
1. use box format with cc format

## version-2.1
add category and tag
### version-2.1.0
##### main goal
add category
##### features
1. field of category: car, truck, tree, pedestrian,

### version-2.1.1
##### main goal
add tag
##### features
1. fields of tag: color, reflectivity, time(daytime or sunset or night), speed

## version-2.2
semi-automatic annotation to add initial bounding boxes.
### version-2.2.1
##### main goal
add initial bounding boxes.
##### features
1. define interface
2. add one object recongnization

### version-2.2.2

Conbine infomation mentioned above, how to calculate 