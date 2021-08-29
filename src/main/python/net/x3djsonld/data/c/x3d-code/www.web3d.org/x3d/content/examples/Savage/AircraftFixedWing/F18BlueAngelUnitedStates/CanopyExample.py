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
    meta(content='CanopyExample.x3d',name='title'),
    meta(content='Animation example from Canopy Prototype. Clicking canopy triggers animation for open and close performance.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='18 October 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/CanopyExample.x3d',name='identifier'),
    meta(content='cockpit canopy animation example',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='Canopy',url=["CanopyPrototype.wrl#Canopy","../../AircraftFixedWing/F18BlueAngelUnitedStates/CanopyPrototype.wrl#Canopy","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/CanopyPrototype.wrl#Canopy","CanopyPrototype.x3d#Canopy","../../AircraftFixedWing/F18BlueAngelUnitedStates/CanopyPrototype.x3d#Canopy","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/CanopyPrototype.x3d#Canopy"],
      field=[
      field(accessType='inputOnly',name='canopyOpen',type='SFBool'),
      field(accessType='outputOnly',name='canopyOut',type='SFBool'),
      field(accessType='inputOnly',name='animationStartTime',type='SFTime'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool')]),
    Background(skyColor=[(0.7,0.7,0.7)]),
    Group(
      children=[
      TouchSensor(DEF='CanopyTouchSensor',description='canopy open/close'),
      Transform(DEF='Canopy',
        children=[
        Script(DEF='ExampleSelectionScript',
          field=[
          field(accessType='initializeOnly',name='landed',type='SFInt32',value=-1),
          field(accessType='inputOnly',name='enabled',type='SFBool'),
          field(accessType='outputOnly',name='status',type='SFBool')])]),
      ProtoInstance(DEF='CP',name='Canopy',
        fieldValue=[
        fieldValue(name='traceEnabled',value=True)])]),
    ROUTE(fromField='touchTime',fromNode='CanopyTouchSensor',toField='animationStartTime',toNode='CP'),
    ROUTE(fromField='isActive',fromNode='CanopyTouchSensor',toField='enabled',toNode='ExampleSelectionScript'),
    ROUTE(fromField='status',fromNode='ExampleSelectionScript',toField='canopyOpen',toNode='CP')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CanopyExample.py")
