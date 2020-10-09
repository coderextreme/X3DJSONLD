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
    meta(name='title',content='arc4.x3d'),
    meta(name='creator',content='Lost, Doug Sanden I think'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d'),
    meta(name='description',content='a generic proto to connect two objects')]),
  Scene=Scene(
    children=[
    Viewpoint(position=(0,0,5),description='Only Viewpoint'),
    Background(skyColor=[(0.4,0.4,0.4)]),
    Transform(DEF='DECLpoint_G1_node',
      children=[
      Shape(
        geometry=Sphere(radius=0.1),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0)))),
      PositionInterpolator(DEF='DECLpoint_G1_PI1',key=[0,1],keyValue=[(0,0,0),(0,5,0)]),
      X3DScript(DEF='DECLpoint_G1_MB1',
        field=[
        field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='old',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='set_location',accessType='inputOnly',type='SFTime'),
        field(name='keyValue',accessType='inputOutput',type='MFVec3f',value=[(0,0,0),(0,5,0)])]),
      TimeSensor(DEF='DECLpoint_G1_CL1',cycleInterval=3,loop=True),
      ROUTE(fromNode='DECLpoint_G1_CL1',fromField='cycleTime',toNode='DECLpoint_G1_MB1',toField='set_location'),
      ROUTE(fromNode='DECLpoint_G1_CL1',fromField='fraction_changed',toNode='DECLpoint_G1_PI1',toField='set_fraction'),
      ROUTE(fromNode='DECLpoint_G1_MB1',fromField='keyValue',toNode='DECLpoint_G1_PI1',toField='keyValue'),
      ROUTE(fromNode='DECLpoint_G1_PI1',fromField='value_changed',toNode='DECLpoint_G1_node',toField='set_translation')]),
    Transform(DEF='DECLpoint_G2_node',
      children=[
      Shape(
        geometry=Sphere(radius=0.1),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0)))),
      PositionInterpolator(DEF='DECLpoint_G2_PI1',key=[0,1],keyValue=[(0,0,0),(0,5,0)]),
      X3DScript(DEF='DECLpoint_G2_MB1',
        field=[
        field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='old',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='set_location',accessType='inputOnly',type='SFTime'),
        field(name='keyValue',accessType='inputOutput',type='MFVec3f',value=[(0,0,0),(0,5,0)])]),
      TimeSensor(DEF='DECLpoint_G2_CL1',cycleInterval=3,loop=True),
      ROUTE(fromNode='DECLpoint_G2_CL1',fromField='cycleTime',toNode='DECLpoint_G2_MB1',toField='set_location'),
      ROUTE(fromNode='DECLpoint_G2_CL1',fromField='fraction_changed',toNode='DECLpoint_G2_PI1',toField='set_fraction'),
      ROUTE(fromNode='DECLpoint_G2_MB1',fromField='keyValue',toNode='DECLpoint_G2_PI1',toField='keyValue'),
      ROUTE(fromNode='DECLpoint_G2_PI1',fromField='value_changed',toNode='DECLpoint_G2_node',toField='set_translation')]),
    Group(
      children=[
      Transform(DEF='DECLx3dconnector_connector1_trans',
        children=[
        Transform(DEF='DECLx3dconnector_connector1_rotscale',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.2,0.7,0.7),transparency=0.5)),
            geometry=Cylinder(radius=0.05))])]),
      X3DScript(DEF='DECLx3dconnector_connector1_S1',
        field=[
        field(name='startnode',accessType='initializeOnly',type='SFNode'),
        field(name='endnode',accessType='initializeOnly',type='SFNode'),
        field(name='position',accessType='inputOutput',type='SFNode',
          children=[
          Transform(USE='DECLx3dconnector_connector1_trans')]),
        field(name='rotscale',accessType='inputOutput',type='SFNode',
          children=[
          Transform(USE='DECLx3dconnector_connector1_rotscale')]),
        field(name='set_startpoint',accessType='inputOnly',type='SFVec3f'),
        field(name='set_endpoint',accessType='inputOnly',type='SFVec3f')])]),
    ROUTE(fromNode='DECLpoint_G1_node',fromField='translation_changed',toNode='DECLx3dconnector_connector1_S1',toField='set_startpoint'),
    ROUTE(fromNode='DECLpoint_G2_node',fromField='translation_changed',toNode='DECLx3dconnector_connector1_S1',toField='set_endpoint')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for arc4.py")
