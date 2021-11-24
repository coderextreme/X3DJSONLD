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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='Example18.x3d',name='title'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='26 June 2000',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='X3D working group',name='creator'),
    meta(content='VRML 97 specification example: another example of animating the camera by depicting an elevator to ease access to a multi-storey building. For this example, a 2 storey building is shown and it is assumed that the elevator is already at the ground floor. To go up, the user just steps onto the elevator platform. A ProximitySensor fires and starts the elevator up automatically. Additional features such as call buttons for outside the elevator, elevator doors, and floor selector buttons could be added to make the elevator easier to use.',name='description'),
    meta(content='originals/exampleD_18.wrl',name='reference'),
    meta(content='VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.18 Elevator',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.18',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example18.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Example18.x3d'),
    Transform(translation=(0.0,0.0,-3.5),
      children=[
      Shape(
        geometry=Cone(),
        appearance=Appearance(
          material=Material(diffuseColor=(0.0,1.0,0.0))))]),
    Transform(translation=(0.0,4.0,-3.5),
      children=[
      Shape(
        geometry=Cone(),
        appearance=Appearance(
          material=Material(diffuseColor=(1.0,0.0,0.0))))]),
    Transform(translation=(0.0,8.0,-3.5),
      children=[
      Shape(
        geometry=Cone(),
        appearance=Appearance(
          material=Material(diffuseColor=(0.0,0.0,1.0))))]),
    Group(
      children=[
      Transform(DEF='ETransform',
        children=[
        Viewpoint(DEF='EViewpoint',description='Viewpoint',jump=False),
        ProximitySensor(DEF='EProximity',size=(2.0,5.0,5.0)),
        Transform(translation=(0.0,-1.0,0.0),
          children=[
          Shape(
            geometry=Box(size=(2.0,0.2,5.0)),
            appearance=Appearance(
              material=Material(),))])])]),
    PositionInterpolator(DEF='ElevatorPI',key=[0.0,1.0],keyValue=[(0.0,0.0,0.0),(0.0,8.0,0.0)]),
    TimeSensor(DEF='TS',cycleInterval=10.0),
    ROUTE(fromField='enterTime',fromNode='EProximity',toField='startTime',toNode='TS'),
    ROUTE(fromField='isActive',fromNode='TS',toField='set_bind',toNode='EViewpoint'),
    ROUTE(fromField='fraction_changed',fromNode='TS',toField='set_fraction',toNode='ElevatorPI'),
    ROUTE(fromField='value_changed',fromNode='ElevatorPI',toField='translation',toNode='ETransform')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Example18.py")
