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
    meta(name='title',content='arc2.x3d'),
    meta(name='creator',content='Lost, Doug Sanden I think'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d'),
    meta(name='description',content='a generic proto to connect two objects')]),
  Scene=Scene(
    children=[
    Viewpoint(position=(0,0,5),description='Only Viewpoint'),
    Background(skyColor=[(0.4,0.4,0.4)]),
    Transform(DEF='G1',
      children=[
      Transform(DEF='DECLpoint_INSTANCE_node',
        children=[
        Shape(
          geometry=Sphere(radius=0.1),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0)))),
        PositionInterpolator(DEF='DECLpoint_INSTANCE_PI1',key=[0,1],keyValue=[(0,0,0),(0,5,0)]),
        Script(DEF='DECLpoint_INSTANCE_MB1',
          field=[
          field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
          field(name='old',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
          field(name='set_location',accessType='inputOnly',type='SFTime'),
          field(name='keyValue',accessType='inputOutput',type='MFVec3f',value=[(0,0,0),(0,5,0)])]),
        TimeSensor(DEF='DECLpoint_INSTANCE_CL1',cycleInterval=3,loop=True),
        ROUTE(fromNode='DECLpoint_INSTANCE_CL1',fromField='cycleTime',toNode='DECLpoint_INSTANCE_MB1',toField='set_location'),
        ROUTE(fromNode='DECLpoint_INSTANCE_CL1',fromField='fraction_changed',toNode='DECLpoint_INSTANCE_PI1',toField='set_fraction'),
        ROUTE(fromNode='DECLpoint_INSTANCE_MB1',fromField='keyValue',toNode='DECLpoint_INSTANCE_PI1',toField='keyValue'),
        ROUTE(fromNode='DECLpoint_INSTANCE_PI1',fromField='value_changed',toNode='DECLpoint_INSTANCE_node',toField='set_translation'),
        ROUTE(fromNode='DECLpoint_INSTANCE_MB1',fromField='translation_changed',toNode='DECLpoint_INSTANCE_node',toField='set_translation')])]),
    Transform(DEF='G2',
      children=[
      Transform(DEF='DECLpoint_INSTANCE1000_node',
        children=[
        Shape(
          geometry=Sphere(radius=0.1),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0)))),
        PositionInterpolator(DEF='DECLpoint_INSTANCE1000_PI1',key=[0,1],keyValue=[(0,0,0),(0,5,0)]),
        Script(DEF='DECLpoint_INSTANCE1000_MB1',
          field=[
          field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
          field(name='old',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
          field(name='set_location',accessType='inputOnly',type='SFTime'),
          field(name='keyValue',accessType='inputOutput',type='MFVec3f',value=[(0,0,0),(0,5,0)])]),
        TimeSensor(DEF='DECLpoint_INSTANCE1000_CL1',cycleInterval=3,loop=True),
        ROUTE(fromNode='DECLpoint_INSTANCE1000_CL1',fromField='cycleTime',toNode='DECLpoint_INSTANCE1000_MB1',toField='set_location'),
        ROUTE(fromNode='DECLpoint_INSTANCE1000_CL1',fromField='fraction_changed',toNode='DECLpoint_INSTANCE1000_PI1',toField='set_fraction'),
        ROUTE(fromNode='DECLpoint_INSTANCE1000_MB1',fromField='keyValue',toNode='DECLpoint_INSTANCE1000_PI1',toField='keyValue'),
        ROUTE(fromNode='DECLpoint_INSTANCE1000_PI1',fromField='value_changed',toNode='DECLpoint_INSTANCE1000_node',toField='set_translation'),
        ROUTE(fromNode='DECLpoint_INSTANCE1000_MB1',fromField='translation_changed',toNode='DECLpoint_INSTANCE1000_node',toField='set_translation')])]),
    Transform(DEF='transC1',
      children=[
      Transform(DEF='rotscaleC1',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.7,0.7),transparency=0.5)),
          geometry=Cylinder(radius=0.05))])]),
    Script(DEF='DECLx3dconnector_connector1_S1',
      field=[
      field(name='startnode',accessType='initializeOnly',type='SFNode',
        children=[
        Transform(USE='G1')]),
      field(name='endnode',accessType='initializeOnly',type='SFNode',
        children=[
        Transform(USE='G2')]),
      field(name='transC1',accessType='initializeOnly',type='SFNode',
        children=[
        Transform(USE='transC1')]),
      field(name='rotscaleC1',accessType='initializeOnly',type='SFNode',
        children=[
        Transform(USE='rotscaleC1')]),
      field(name='set_startpoint',accessType='inputOnly',type='SFVec3f'),
      field(name='set_endpoint',accessType='inputOnly',type='SFVec3f')]),
    ROUTE(fromNode='G1',fromField='translation_changed',toNode='DECLx3dconnector_connector1_S1',toField='set_startpoint'),
    ROUTE(fromNode='G2',fromField='translation_changed',toNode='DECLx3dconnector_connector1_S1',toField='set_endpoint')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if         metaDiagnostics(newModel): # built-in utility method in X3D class
    print (metaDiagnostics(newModel))
print ("python x3d.py load successful for arc2.py")
