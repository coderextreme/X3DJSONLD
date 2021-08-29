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
    meta(content='TimeTriggerTest.x3d',name='title'),
    meta(content='Test of TimeTrigger node.',name='description'),
    meta(content='8 October 2007',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter09EventUtilitiesScripting/TimeTriggerTest.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TimeTriggerTest.x3d'),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='TimeTrigger test',position=(0,0,7)),
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.6,0,.8))),
        geometry=Text(string=["Touch text to print","output values on console"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
      #  Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip 
      Shape(
        geometry=Box(size=(9,2,.001)),
        appearance=Appearance(
          material=Material(transparency=1))),
      #  This TouchSensor only reacts to user clicking on the sibling Shape and Text, because it is under a parent Transform grouping node 
      TouchSensor(DEF='TextTouched',description='touch to activate')]),
    BooleanFilter(DEF='Filter'),
    ROUTE(fromField='isActive',fromNode='TextTouched',toField='set_boolean',toNode='Filter'),
    TimeTrigger(DEF='Trigger'),
    ROUTE(fromField='inputTrue',fromNode='Filter',toField='set_boolean',toNode='Trigger'),
    Script(DEF='TraceScript',
      field=[
      field(accessType='inputOnly',name='printBoolean',type='SFBool'),
      field(accessType='inputOnly',name='printTimestamp',type='SFTime')]),
    ROUTE(fromField='triggerTime',fromNode='Trigger',toField='printTimestamp',toNode='TraceScript'),
    ROUTE(fromField='isActive',fromNode='TextTouched',toField='printBoolean',toNode='TraceScript')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TimeTriggerTest.py")
