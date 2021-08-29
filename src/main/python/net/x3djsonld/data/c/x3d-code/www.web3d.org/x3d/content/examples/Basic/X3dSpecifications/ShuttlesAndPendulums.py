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
    meta(content='ShuttlesAndPendulums.x3d',name='title'),
    meta(content='X3D encodings example: animation of shuttle and pendulum prototype nodes.',name='description'),
    meta(content='Don Brutzman and Joe Williams',name='creator'),
    meta(content='1 June 2002',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, Annex C.14 Shuttles and pendulums',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/examples.html#ShuttlesAndPendulums',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/ShuttlesAndPendulums.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ShuttlesAndPendulums.x3d'),
    ProtoDeclare(name='Shuttle',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='rate',type='SFTime',value=1),
        field(accessType='initializeOnly',name='distance',type='SFFloat',value=1),
        field(accessType='initializeOnly',name='children',type='MFNode',
          #  initial value is empty node array 
          ),
        field(accessType='inputOutput',name='startTime',type='SFTime',value=0),
        field(accessType='inputOutput',name='stopTime',type='SFTime',value=0),
        field(accessType='initializeOnly',name='loop',type='SFBool',value=True)]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='F',
          IS=IS(
            connect=[
            connect(nodeField='children',protoField='children')])),
        #  after first node in ProtoDeclare, remainder of nodes do not render 
        TimeSensor(DEF='T',
          IS=IS(
            connect=[
            connect(nodeField='cycleInterval',protoField='rate'),
            connect(nodeField='startTime',protoField='startTime'),
            connect(nodeField='stopTime',protoField='stopTime'),
            connect(nodeField='loop',protoField='loop')])),
        Script(DEF='S',
          field=[
          field(accessType='initializeOnly',name='distance',type='SFFloat'),
          field(accessType='outputOnly',name='position',type='MFVec3f')],
          IS=IS(
            connect=[
            connect(nodeField='distance',protoField='distance')])),
        PositionInterpolator(DEF='I',key=[0,0.5,1],keyValue=[(-1,0,0),(1,0,0),(-1,0,0)]),
        ROUTE(fromField='fraction_changed',fromNode='T',toField='set_fraction',toNode='I'),
        ROUTE(fromField='value_changed',fromNode='I',toField='translation',toNode='F'),
        ROUTE(fromField='position',fromNode='S',toField='keyValue',toNode='I')])),
    ProtoDeclare(name='Pendulum',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='rate',type='SFTime',value=1),
        field(accessType='initializeOnly',name='maxAngle',type='SFFloat',value=3.14159),
        field(accessType='initializeOnly',name='children',type='MFNode',
          #  initial value is empty node array 
          ),
        field(accessType='inputOutput',name='startTime',type='SFTime',value=0),
        field(accessType='inputOutput',name='stopTime',type='SFTime',value=0),
        field(accessType='initializeOnly',name='loop',type='SFBool',value=True)]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='FF',
          IS=IS(
            connect=[
            connect(nodeField='children',protoField='children')])),
        #  after first node in ProtoDeclare, remainder of nodes do not render 
        TimeSensor(DEF='TT',
          IS=IS(
            connect=[
            connect(nodeField='cycleInterval',protoField='rate'),
            connect(nodeField='startTime',protoField='startTime'),
            connect(nodeField='stopTime',protoField='stopTime'),
            connect(nodeField='loop',protoField='loop')])),
        Script(DEF='SS',
          field=[
          field(accessType='initializeOnly',name='maxAngle',type='SFFloat'),
          field(accessType='outputOnly',name='rotation',type='MFRotation')],
          IS=IS(
            connect=[
            connect(nodeField='maxAngle',protoField='maxAngle')])),
        OrientationInterpolator(DEF='II',key=[0,0.25,0.5,0.75,1],keyValue=[(0,0,1,0),(0,0,1,1.57),(0,0,1,3.14),(0,0,1,1.57),(0,0,1,0)]),
        ROUTE(fromField='fraction_changed',fromNode='TT',toField='set_fraction',toNode='II'),
        ROUTE(fromField='value_changed',fromNode='II',toField='rotation',toNode='FF'),
        ROUTE(fromField='rotation',fromNode='SS',toField='keyValue',toNode='II')])),
    Transform(translation=(-3,0,0),
      children=[
      ProtoInstance(name='Pendulum',
        fieldValue=[
        fieldValue(name='rate',value=3),
        fieldValue(name='maxAngle',value=6.28),
        fieldValue(name='children',
          children=[
          Shape(
            geometry=Cylinder(height=5),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.1,0))))])])]),
    Transform(
      children=[
      ProtoInstance(name='Shuttle',
        fieldValue=[
        fieldValue(name='rate',value=2),
        fieldValue(name='children',
          children=[
          Shape(
            geometry=Sphere(),
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.8,0))))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ShuttlesAndPendulums.py")
