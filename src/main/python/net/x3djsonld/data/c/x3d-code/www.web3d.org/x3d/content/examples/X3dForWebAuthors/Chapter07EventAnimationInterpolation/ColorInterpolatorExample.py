###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='ColorInterpolatorExample.x3d',name='title'),
    meta(content='Demonstrate basic design pattern for animating a node.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='17 April 2005',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='ColorInterpolatorExampleSceneGraphWithRoutes.png',name='drawing'),
    meta(content='ColorInterpolatorExample4Colors.png',name='Image'),
    meta(content='Animation ColorInterpolator',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter07EventAnimationInterpolation/ColorInterpolatorExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ColorInterpolatorExample.x3d'),
    Group(
      #  Place triggering text above sphere of interest 
      children=[
      Transform(translation=(0,2,0),
        children=[
        Shape(
          geometry=Text(string=["Touch text to","start animation..."],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=Material(),)),
        #  Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip 
        Shape(
          geometry=Box(size=(6.2,2,.001)),
          appearance=Appearance(
            material=Material(transparency=1))),
        #  This TouchSensor only reacts to user clicking on the sibling Shape and Text, because it is under a parent Transform grouping node 
        TouchSensor(DEF='TextTriggerTouchSensor',description='Touch text to start...')]),
      #  Here is Sphere with accompanying Material that will get animated 
      Transform(translation=(0,-1,0),
        children=[
        Shape(
          geometry=Sphere(),
          appearance=Appearance(
            #  SphereMaterial diffuseColor gets overridden by interpolator output 
            material=Material(DEF='SphereMaterial',diffuseColor=(0.5,0.5,0.5))))]),
      #  TimeSensor is triggered to start by TouchSensor, then sends animating values to Interpolator 
      TimeSensor(DEF='AnimationClock',cycleInterval=6),
      #  ROUTE 1: TouchSensor trigger to TimeSensor clock 
      ROUTE(fromField='touchTime',fromNode='TextTriggerTouchSensor',toField='startTime',toNode='AnimationClock'),
      #  Interpolator: ColorChanger interpolates evenly between red, green, blue and then back to red 
      ColorInterpolator(DEF='ColorChanger',key=[0,0.3333,0.6666,1],keyValue=[(1,0,0),(0,1,0),(0,0,1),(1,0,0)]),
      #  ROUTE 2: the ColorChanger interpolator gets stimulated by AnimationClock TimeSensor fraction to compute a color value 
      ROUTE(fromField='fraction_changed',fromNode='AnimationClock',toField='set_fraction',toNode='ColorChanger'),
      #  ROUTE 3: Interpolator output is sent to target node of interest. Changed color value is routed to SphereMaterial color. 
      ROUTE(fromField='value_changed',fromNode='ColorChanger',toField='diffuseColor',toNode='SphereMaterial')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ColorInterpolatorExample.py")
