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

newModel=X3D(profile='Interchange',version='4.0',
  head=head(
    children=[
    meta(name='generator',content='view3dscene, https://castle-engine.io/view3dscene.php'),
    meta(name='source',content='LOA2ExampleSourceWithDiamonds.wrl')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='Humanoid',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',type='SFVec3f',name='center',value=(0,0,0)),
        field(accessType='inputOutput',type='MFNode',name='humanoidBody'),
        field(accessType='inputOutput',type='MFString',name='info',value=['']),
        field(accessType='inputOutput',type='MFNode',name='joints'),
        field(accessType='inputOutput',type='SFString',name='name',value=''),
        field(accessType='inputOutput',type='SFRotation',name='rotation',value=(0,0,1,0)),
        field(accessType='inputOutput',type='SFVec3f',name='scale',value=(1,1,1)),
        field(accessType='inputOutput',type='SFRotation',name='scaleOrientation',value=(0,0,1,0)),
        field(accessType='inputOutput',type='MFNode',name='segments'),
        field(accessType='inputOutput',type='MFNode',name='sites'),
        field(accessType='inputOutput',type='SFVec3f',name='translation',value=(0,0,0)),
        field(accessType='inputOutput',type='SFString',name='version',value='200x'),
        field(accessType='inputOutput',type='MFNode',name='viewpoints'),
        field(accessType='initializeOnly',type='SFVec3f',name='bboxCenter',value=(0,0,0)),
        field(accessType='initializeOnly',type='SFVec3f',name='bboxSize',value=(-1,-1,-1))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          Group(
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='humanoidBody')])),
          Group(
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='viewpoints')]))],
          IS=IS(
            connect=[
            connect(nodeField='center',protoField='center'),
            connect(nodeField='rotation',protoField='rotation'),
            connect(nodeField='scale',protoField='scale'),
            connect(nodeField='scaleOrientation',protoField='scaleOrientation'),
            connect(nodeField='translation',protoField='translation')]))])),
    ProtoDeclare(name='Joint',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',type='SFVec3f',name='center',value=(0,0,0)),
        field(accessType='inputOutput',type='MFNode',name='children'),
        field(accessType='inputOutput',type='SFRotation',name='limitOrientation',value=(0,0,1,0)),
        field(accessType='inputOutput',type='MFFloat',name='llimit',value=[]),
        field(accessType='inputOutput',type='SFString',name='name',value=''),
        field(accessType='inputOutput',type='SFRotation',name='rotation',value=(0,0,1,0)),
        field(accessType='inputOutput',type='SFVec3f',name='scale',value=(1,1,1)),
        field(accessType='inputOutput',type='SFRotation',name='scaleOrientation',value=(0,0,1,0)),
        field(accessType='inputOutput',type='MFFloat',name='stiffness',value=[1,1,1]),
        field(accessType='inputOutput',type='SFVec3f',name='translation',value=(0,0,0)),
        field(accessType='inputOutput',type='MFFloat',name='ulimit',value=[])]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Transform(
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='children'),
              connect(nodeField='center',protoField='center'),
              connect(nodeField='rotation',protoField='rotation'),
              connect(nodeField='scale',protoField='scale'),
              connect(nodeField='scaleOrientation',protoField='scaleOrientation'),
              connect(nodeField='translation',protoField='translation')])),
          Transform(
            children=[
            Shape(
              geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1],creaseAngle=0.5,
                coord=Coordinate(point=[(0,0.00999999977648258,0),(-0.00999999977648258,0,0),(0,0,0.00999999977648258),(0.00999999977648258,0,0),(0,0,-0.00999999977648258),(0,-0.00999999977648258,0)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,0))))],
            IS=IS(
              connect=[
              connect(nodeField='translation',protoField='center')]))])])),
    ProtoDeclare(name='Segment',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',type='MFNode',name='addChildren'),
        field(accessType='inputOnly',type='MFNode',name='removeChildren'),
        field(accessType='inputOutput',type='SFVec3f',name='centerOfMass',value=(0,0,0)),
        field(accessType='inputOutput',type='MFNode',name='children'),
        field(accessType='inputOutput',type='SFNode',name='coord',value=None),
        field(accessType='inputOutput',type='MFNode',name='displacers'),
        field(accessType='inputOutput',type='SFString',name='name',value=''),
        field(accessType='inputOutput',type='SFFloat',name='mass',value=0),
        field(accessType='inputOutput',type='SFVec3f',name='momentsOfInertia',value=(1,1,1)),
        field(accessType='initializeOnly',type='SFVec3f',name='bboxCenter',value=(0,0,0)),
        field(accessType='initializeOnly',type='SFVec3f',name='bboxSize',value=(-1,-1,-1))]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          IS=IS(
            connect=[
            connect(nodeField='children',protoField='children'),
            connect(nodeField='bboxCenter',protoField='bboxCenter'),
            connect(nodeField='bboxSize',protoField='bboxSize'),
            connect(nodeField='addChildren',protoField='addChildren'),
            connect(nodeField='removeChildren',protoField='removeChildren')]))])),
    ProtoDeclare(name='Site',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',type='MFNode',name='addChildren'),
        field(accessType='inputOnly',type='MFNode',name='removeChildren'),
        field(accessType='inputOutput',type='SFVec3f',name='center',value=(0,0,0)),
        field(accessType='inputOutput',type='MFNode',name='children'),
        field(accessType='inputOutput',type='SFString',name='name',value=''),
        field(accessType='inputOutput',type='SFRotation',name='rotation',value=(0,0,1,0)),
        field(accessType='inputOutput',type='SFVec3f',name='scale',value=(1,1,1)),
        field(accessType='inputOutput',type='SFRotation',name='scaleOrientation',value=(0,0,1,0)),
        field(accessType='inputOutput',type='SFVec3f',name='translation',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          IS=IS(
            connect=[
            connect(nodeField='children',protoField='children'),
            connect(nodeField='center',protoField='center'),
            connect(nodeField='rotation',protoField='rotation'),
            connect(nodeField='scale',protoField='scale'),
            connect(nodeField='scaleOrientation',protoField='scaleOrientation'),
            connect(nodeField='translation',protoField='translation'),
            connect(nodeField='addChildren',protoField='addChildren'),
            connect(nodeField='removeChildren',protoField='removeChildren')]))]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
