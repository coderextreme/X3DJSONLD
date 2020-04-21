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
    meta(name='title',content='x3dconnector'),
    meta(name='creator',content='Lost, Doug Sanden I think'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d'),
    meta(name='description',content='a generic proto to connect two objects')]),
  Scene=Scene(
    children=[
    Viewpoint(position=(0,0,5),description='Only Viewpoint'),
    Background(skyColor=[(0.4,0.4,0.4)]),
    Transform(DEF='G1',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.7,0.2,0.2))),
        geometry=Sphere(radius=.1)),
      PlaneSensor(description='Grab to move',DEF='PS1'),
      ROUTE(fromNode='PS1',fromField='translation_changed',toNode='G1',toField='set_translation')]),
    Transform(DEF='G2',translation=(1,-1,.01),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.7,0.2))),
        geometry=Sphere(radius=.1)),
      PlaneSensor(description='Grab to move',offset=(1,-1,.01),DEF='PS2'),
      ROUTE(fromNode='PS2',fromField='translation_changed',toNode='G2',toField='set_translation')]),
    Transform(DEF='transC1',
      children=[
      Transform(DEF='rotscaleC1',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.7,0.7),transparency=.5)),
          geometry=Cylinder(radius=.05))])]),
    ProtoDeclare(name='x3dconnector',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='startnode',type='SFNode'),
        field(accessType='initializeOnly',name='endnode',type='SFNode'),
        field(accessType='initializeOnly',name='transnode',type='SFNode'),
        field(accessType='initializeOnly',name='rotscalenode',type='SFNode'),
        field(accessType='inputOnly',name='set_startpoint',type='SFVec3f'),
        field(accessType='inputOnly',name='set_endpoint',type='SFVec3f')]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='S1',
          field=[
          field(accessType='initializeOnly',name='startnode',type='SFNode'),
          field(accessType='initializeOnly',name='endnode',type='SFNode'),
          field(accessType='initializeOnly',name='transnode',type='SFNode'),
          field(accessType='initializeOnly',name='rotscalenode',type='SFNode'),
          field(accessType='inputOnly',name='set_startpoint',type='SFVec3f'),
          field(accessType='inputOnly',name='set_endpoint',type='SFVec3f')],
          IS=IS(
            connect=[
            connect(nodeField='startnode',protoField='startnode'),
            connect(nodeField='endnode',protoField='endnode'),
            connect(nodeField='transnode',protoField='transnode'),
            connect(nodeField='rotscalenode',protoField='rotscalenode'),
            connect(nodeField='set_startpoint',protoField='set_startpoint'),
            connect(nodeField='set_endpoint',protoField='set_endpoint')]))])),
    ProtoInstance(name='x3dconnector',DEF='connector1',
      fieldValue=[
      fieldValue(name='startnode',
        children=[
        Transform(USE='G1')]),
      fieldValue(name='endnode',
        children=[
        Transform(USE='G2')]),
      fieldValue(name='transnode',
        children=[
        Transform(USE='transC1')]),
      fieldValue(name='rotscalenode',
        children=[
        Transform(USE='rotscaleC1')]),
      fieldValue(name='set_startpoint'),
      fieldValue(name='set_endpoint')]),
    ROUTE(fromNode='G1',fromField='translation_changed',toNode='connector1',toField='set_startpoint'),
    ROUTE(fromNode='G2',fromField='translation_changed',toNode='connector1',toField='set_endpoint')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if         metaDiagnostics(newModel): # built-in utility method in X3D class
    print (metaDiagnostics(newModel))
print ("python x3d.py load successful for .py")
