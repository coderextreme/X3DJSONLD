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
    meta(name='title',content='x3dconnectorProto'),
    meta(name='creator',content='Lost, Doug Sanden I think'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d'),
    meta(name='description',content='a generic proto to connect two objects'),
    meta(content='https://www.web3d.org/x3d/content/examples/license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Connector Proto'),
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
    Transform(DEF='G3',translation=(1,1,.01),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.7,0.2))),
        geometry=Sphere(radius=.1)),
      PlaneSensor(description='Grab to move',offset=(1,1,.01),DEF='PS3'),
      ROUTE(fromNode='PS3',fromField='translation_changed',toNode='G3',toField='set_translation')]),
    Transform(DEF='G4',translation=(-1,1,.01),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.7,0.2))),
        geometry=Sphere(radius=.1)),
      PlaneSensor(description='Grab to move',offset=(-1,1,.01),DEF='PS4'),
      ROUTE(fromNode='PS4',fromField='translation_changed',toNode='G4',toField='set_translation')]),
    Transform(DEF='transC1',
      children=[
      Transform(DEF='rotscaleC1',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.7,0.7),transparency=.5)),
          geometry=Cylinder(radius=.05))])]),
    Transform(DEF='transC2',
      children=[
      Transform(DEF='rotscaleC2',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.7,0.7),transparency=.5)),
          geometry=Cylinder(radius=.05))])]),
    Transform(DEF='transC3',
      children=[
      Transform(DEF='rotscaleC3',
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
            connect(nodeField='set_endpoint',protoField='set_endpoint')])
*** TODO x3d.py and X3dToJson.xslt need to handle embedded CDATA source code for Script
)])),
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
      fieldValue(name='set_startpoint',value=(0,0,0)),
      fieldValue(name='set_endpoint',value=(0,0,0))]),
    ProtoInstance(name='x3dconnector',DEF='connector2',
      fieldValue=[
      fieldValue(name='startnode',
        children=[
        Transform(USE='G1')]),
      fieldValue(name='endnode',
        children=[
        Transform(USE='G3')]),
      fieldValue(name='transnode',
        children=[
        Transform(USE='transC2')]),
      fieldValue(name='rotscalenode',
        children=[
        Transform(USE='rotscaleC2')]),
      fieldValue(name='set_startpoint',value=(0,0,0)),
      fieldValue(name='set_endpoint',value=(0,0,0))]),
    ProtoInstance(name='x3dconnector',DEF='connector3',
      fieldValue=[
      fieldValue(name='startnode',
        children=[
        Transform(USE='G1')]),
      fieldValue(name='endnode',
        children=[
        Transform(USE='G4')]),
      fieldValue(name='transnode',
        children=[
        Transform(USE='transC3')]),
      fieldValue(name='rotscalenode',
        children=[
        Transform(USE='rotscaleC3')]),
      fieldValue(name='set_startpoint',value=(0,0,0)),
      fieldValue(name='set_endpoint',value=(0,0,0))]),
    ROUTE(fromNode='G1',fromField='translation_changed',toNode='connector1',toField='set_startpoint'),
    ROUTE(fromNode='G2',fromField='translation_changed',toNode='connector1',toField='set_endpoint'),
    ROUTE(fromNode='G1',fromField='translation_changed',toNode='connector2',toField='set_startpoint'),
    ROUTE(fromNode='G3',fromField='translation_changed',toNode='connector2',toField='set_endpoint'),
    ROUTE(fromNode='G1',fromField='translation_changed',toNode='connector3',toField='set_startpoint'),
    ROUTE(fromNode='G4',fromField='translation_changed',toNode='connector3',toField='set_endpoint')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful (still testing)")
except BaseException as err:
    print("*** Python-to-VRML export of VRML output failed:", err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (still testing)")
except SyntaxError as err:
    print("*** Python-to-JSON export of JSON output failed:", err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python x3d.py load and self-test complete for .py")
