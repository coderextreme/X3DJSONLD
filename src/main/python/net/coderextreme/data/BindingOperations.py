'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
Viewpoint(DEF="View1", centerOfRotation=((-6,0,0)), description="Viewpoint 1", position=((-6,0,5))),
Viewpoint(DEF="View2", centerOfRotation=((-2,0,0)), description="Viewpoint 2", position=((-2,0,5))),
Viewpoint(DEF="View3", centerOfRotation=((2,0,0)), description="Viewpoint 3", position=((2,0,5))),
Viewpoint(DEF="View4", centerOfRotation=((6,0,0)), description="Viewpoint 4", position=((6,0,5))),
#Script initialization ought to first bind view5 below.

Group(children=[
Transform(DEF="Text1", translation=((-6,0,0)), children=[
Shape(
geometry=
Text(string=["View","# 1"], 
fontStyle=
FontStyle(DEF="CenterJustify", justify=["MIDDLE","MIDDLE"])), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)))))]),
Transform(DEF="Text2", translation=((-2,0,0)), children=[
Shape(
geometry=
Text(string=["View","# 2"], 
fontStyle=
FontStyle(USE="CenterJustify")), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,1,0)))))]),
Transform(DEF="Text3", translation=((2,0,0)), children=[
Shape(
geometry=
Text(string=["View","# 3"], 
fontStyle=
FontStyle(USE="CenterJustify")), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,0,1)))))]),
Transform(DEF="Text4", translation=((6,0,0)), children=[
Shape(
geometry=
Text(string=["View","# 4"], 
fontStyle=
FontStyle(USE="CenterJustify")), 
appearance=
Appearance(
material=
Material()))])]),
#The following advanced animation sequence uses nodes covered in Chapters 7, 8 and 9.

#It does not need to be studied in this chapter.

Transform(translation=((0,-3,8)), children=[
#notice this next Viewpoint has been transformed with the text, so its position is relative. it is called view5 in the Script.

Viewpoint(DEF="ClickToAnimateView", description="Select animation sequence", position=((0,0,7))),
Shape(
geometry=
Text(string=["Click here to animate"], 
fontStyle=
FontStyle(justify=["MIDDLE","BEGIN"])), 
appearance=
Appearance(
material=
Material(diffuseColor=((0.8,0.4,0))))),
Shape(
geometry=
Box(size=((7,1,0.02))), 
appearance=
Appearance(
material=
Material(transparency=1))),
TouchSensor(DEF="TextTouchSensor", description="Click to begin animating viewpoint selections"),
TimeSensor(DEF="Clock", cycleInterval=10),
ROUTE(fromField="touchTime", fromNode="TextTouchSensor", toField="set_startTime", toNode="Clock"),
IntegerSequencer(DEF="TimingSequencer", key=[float(0),float(0.1),float(0.2),float(0.3),float(0.4),float(0.5),float(0.6),float(0.7),float(0.8),float(1.0)], keyValue=[0,1,2,3,4,5,6,7,8,10]),
ROUTE(fromField="fraction_changed", fromNode="Clock", toField="set_fraction", toNode="TimingSequencer"),
Script(DEF="BindingSequencerEngine", field=[field(name="set_timeEvent", accessType="inputOnly", type="SFInt32"),
field(name="bindView1", accessType="outputOnly", type="SFBool"),
field(name="bindView2", accessType="outputOnly", type="SFBool"),
field(name="bindView3", accessType="outputOnly", type="SFBool"),
field(name="bindView4", accessType="outputOnly", type="SFBool"),
field(name="bindView5", accessType="outputOnly", type="SFBool"),
field(name="view1Bound", accessType="inputOnly", type="SFBool"),
field(name="view2Bound", accessType="inputOnly", type="SFBool"),
field(name="view3Bound", accessType="inputOnly", type="SFBool"),
field(name="view4Bound", accessType="inputOnly", type="SFBool"),
field(name="priorInputvalue", accessType="initializeOnly", type="SFInt32", value=-1)
], 
#['', '        ecmascript:', '', 'function initialize ()', '{', '    bindView5 = true;', "    Browser.print ('Timing script initialized and ready for activation');", '}', 'function set_timeEvent (inputValue)', '{', '    if (inputValue == priorInputvalue)', '    {', '        return; // ignore repeated inputs', '    }', '    // new value provided', '    priorInputvalue = inputValue;', "    // Browser.print ('
#timeEvent inputValue=' + inputValue);", '', '    // mimics user execution of Figure 4.1 steps t_0 through t_8', '    if (inputValue == 0)', '    {', "        Browser.print ('
#===========
# time t0');", '        bindView1 = true;', '    }', '    else if (inputValue == 1)', '    {', "        Browser.print ('
#===========
# time t1');", '        bindView2 = true;', '    }', '    else if (inputValue == 2)', '    {', "        Browser.print ('
#===========
# time t2');", '        bindView3 = true;', '    }', '    else if (inputValue == 3)', '    {', "        Browser.print ('
#===========
# time t3');", '        bindView3 = false;', '    }', '    else if (inputValue == 4)', '    {', "        Browser.print ('
#===========
# time t4');", '        bindView1 = true;', '    }', '    else if (inputValue == 5)', '    {', "        Browser.print ('
#===========
# time t5');", '        bindView2 = false;', '    }', '    else if (inputValue == 6)', '    {', "        Browser.print ('
#===========
# time t6');", '        bindView1 = false;', '    }', '    else if (inputValue == 7)', '    {', "        Browser.print ('
#===========
# time t7');", '        bindView4 = true;', '', '    }', '    else if (inputValue == 8)', '    {', "        Browser.print ('
#===========
# time t8');", "        Browser.print (', no action, all done');", "        Browser.print ('
#
#');", '    }', '}', '', 'function view1Bound (inputValue)', '{', "    Browser.print (', view1Bound ' + (inputValue));", "    if (priorInputvalue == -1) Browser.print ('
#');", '}', 'function view2Bound (inputValue)', '{', "    Browser.print (', view2Bound ' + (inputValue));", '}', 'function view3Bound (inputValue)', '{', "    Browser.print (', view3Bound ' + (inputValue));", '}', 'function view4Bound (inputValue)', '{', "    Browser.print (', view4Bound ' + (inputValue));", '}', 'function view5Bound (inputValue)', '{', "    Browser.print (', view5Bound ' + (inputValue));", '}', '', '']
),
#drive Script with TimeSensor clock

ROUTE(fromField="value_changed", fromNode="TimingSequencer", toField="set_timeEvent", toNode="BindingSequencerEngine"),
#Script will bind and unbind Viewpoint nodes

ROUTE(fromField="bindView1", fromNode="BindingSequencerEngine", toField="set_bind", toNode="View1"),
ROUTE(fromField="bindView2", fromNode="BindingSequencerEngine", toField="set_bind", toNode="View2"),
ROUTE(fromField="bindView3", fromNode="BindingSequencerEngine", toField="set_bind", toNode="View3"),
ROUTE(fromField="bindView4", fromNode="BindingSequencerEngine", toField="set_bind", toNode="View4"),
ROUTE(fromField="bindView5", fromNode="BindingSequencerEngine", toField="set_bind", toNode="ClickToAnimateView"),
#Viewpoint nodes report bind and unbind events

ROUTE(fromField="isBound", fromNode="View1", toField="view1Bound", toNode="BindingSequencerEngine"),
ROUTE(fromField="isBound", fromNode="View2", toField="view2Bound", toNode="BindingSequencerEngine"),
ROUTE(fromField="isBound", fromNode="View3", toField="view3Bound", toNode="BindingSequencerEngine"),
ROUTE(fromField="isBound", fromNode="View4", toField="view4Bound", toNode="BindingSequencerEngine"),]),]))
.XML())
