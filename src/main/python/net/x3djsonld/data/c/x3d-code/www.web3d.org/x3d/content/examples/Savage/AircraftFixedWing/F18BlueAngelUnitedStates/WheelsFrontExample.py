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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='WheelsFrontExample.x3d',name='title'),
    meta(content='An animation example of front wheels and axle Prototype. Clicking axle triggers animation for gear up or gear down of wheels and axle performance.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='11 July 2003',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsFrontExample.x3d',name='identifier'),
    meta(content='front wheels, gear-up and gear-down example',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='WheelsFront',url=["WheelsFrontPrototype.x3d#WheelsFront","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsFrontPrototype.x3d#WheelsFront","WheelsFrontPrototype.wrl#WheelsFront","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsFrontPrototype.wrl#WheelsFront"],
      field=[
      field(accessType='inputOnly',name='gearup',type='SFBool'),
      field(accessType='outputOnly',name='gearupOut',type='SFBool'),
      field(accessType='inputOnly',name='animationStartTime',type='SFTime'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool')]),
    Background(skyColor=[(0.7,0.7,0.7)]),
    Group(
      children=[
      Transform(DEF='GearUpDown',
        children=[
        Script(DEF='ExampleSelectionScript',
          field=[
          field(accessType='initializeOnly',name='landed',type='SFInt32',value=-1),
          field(accessType='inputOnly',name='enabled',type='SFBool'),
          field(accessType='outputOnly',name='status',type='SFBool')])]),
      TouchSensor(DEF='GearUpDownTouchSensor',description='click for gears up/down'),
      ProtoInstance(DEF='WP',name='WheelsFront',
        fieldValue=[
        fieldValue(name='traceEnabled',value=True)])]),
    ROUTE(fromField='touchTime',fromNode='GearUpDownTouchSensor',toField='animationStartTime',toNode='WP'),
    ROUTE(fromField='isActive',fromNode='GearUpDownTouchSensor',toField='enabled',toNode='ExampleSelectionScript'),
    ROUTE(fromField='status',fromNode='ExampleSelectionScript',toField='gearup',toNode='WP')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WheelsFrontExample.py")
