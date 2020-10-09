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
    meta(name='title',content='arcold.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/arc.x3d'),
    meta(name='description',content='an attempt to implement an arc in a graph')]),
  Scene=Scene(
    children=[
    Viewpoint(position=(0,0,5),description='a moving graph'),
    Background(skyColor=[(0.4,0.4,0.4)]),
    Transform(DEF='trans1',
      children=[
      Transform(DEF='rotscale1',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.7,0.7))),
          geometry=Cylinder(radius=0.1))])]),
    Transform(DEF='trans2',
      children=[
      Transform(DEF='rotscale2',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.7,0.7))),
          geometry=Cylinder(radius=0.1))])]),
    Transform(DEF='trans3',
      children=[
      Transform(DEF='rotscale3',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.7,0.7))),
          geometry=Cylinder(radius=0.1))])]),
    ProtoDeclare(name='point',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='translation',type='SFVec3f',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='node',
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='translation')]),
          children=[
          Shape(
            geometry=Sphere(radius=0.1),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0)))),
          PositionInterpolator(DEF='PI1',key=[0,1],keyValue=[(0,0,0),(0,5,0)]),
          Script(DEF='MB1',
            field=[
            field(name='translation',accessType='inputOutput',type='SFVec3f',value=(50,50,0)),
            field(name='old',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
            field(name='set_location',accessType='inputOnly',type='SFTime'),
            field(name='keyValue',accessType='outputOnly',type='MFVec3f')]),
          TimeSensor(DEF='CL1',cycleInterval=3,loop=True),
          ROUTE(fromNode='CL1',fromField='cycleTime',toNode='MB1',toField='set_location'),
          ROUTE(fromNode='CL1',fromField='fraction_changed',toNode='PI1',toField='set_fraction'),
          ROUTE(fromNode='MB1',fromField='keyValue',toNode='PI1',toField='keyValue'),
          ROUTE(fromNode='PI1',fromField='value_changed',toNode='node',toField='set_translation')])])),
    #  from doug sanden 
    ProtoDeclare(name='x3dconnector',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='startnode',type='SFNode'),
        field(accessType='inputOutput',name='endnode',type='SFNode'),
        field(accessType='inputOutput',name='transnode',type='SFNode'),
        field(accessType='inputOutput',name='rotscalenode',type='SFNode'),
        field(accessType='inputOnly',name='set_startpoint',type='SFVec3f'),
        field(accessType='inputOnly',name='set_endpoint',type='SFVec3f')]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='S1',
          field=[
          field(accessType='inputOutput',name='startnode',type='SFNode'),
          field(accessType='inputOutput',name='endnode',type='SFNode'),
          field(accessType='inputOutput',name='transnode',type='SFNode'),
          field(accessType='inputOutput',name='rotscalenode',type='SFNode'),
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
    ProtoInstance(DEF='G1',name='point'),
    ProtoInstance(DEF='G2',name='point'),
    ProtoInstance(DEF='G3',name='point'),
    ProtoInstance(DEF='G4',name='point'),
    ProtoInstance(name='x3dconnector',DEF='connector1',
      fieldValue=[
      fieldValue(name='startnode',
        children=[
        ProtoInstance(USE='G1')]),
      fieldValue(name='endnode',
        children=[
        ProtoInstance(USE='G2')]),
      fieldValue(name='transnode',
        children=[
        Transform(USE='trans1')]),
      fieldValue(name='rotscalenode',
        children=[
        Transform(USE='rotscale1')])]),
    ProtoInstance(name='x3dconnector',DEF='connector2',
      fieldValue=[
      fieldValue(name='startnode',
        children=[
        ProtoInstance(USE='G1')]),
      fieldValue(name='endnode',
        children=[
        ProtoInstance(USE='G3')]),
      fieldValue(name='transnode',
        children=[
        Transform(USE='trans2')]),
      fieldValue(name='rotscalenode',
        children=[
        Transform(USE='rotscale2')])]),
    ProtoInstance(name='x3dconnector',DEF='connector3',
      fieldValue=[
      fieldValue(name='startnode',
        children=[
        ProtoInstance(USE='G1')]),
      fieldValue(name='endnode',
        children=[
        ProtoInstance(USE='G4')]),
      fieldValue(name='transnode',
        children=[
        Transform(USE='trans3')]),
      fieldValue(name='rotscalenode',
        children=[
        Transform(USE='rotscale3')])]),
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
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for arcold.py")
