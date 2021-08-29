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
    meta(content='BeamCylinderPrototype.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='25 February 2001',name='created'),
    meta(content='26 December 2014',name='modified'),
    meta(content='Produce wireframe or transparent beam cylinders.',name='description'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamCylinderPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(DEF='LockedDownInterface2D',type=["NONE"]),
    Background(skyColor=[(0,0.3,0.5)]),
    WorldInfo(info=["Produce wireframe or transparent beam cylinders."],title='BeamCylinderProto'),
    Viewpoint(description='Beam Cylinder',position=(0,0,15)),
    ProtoDeclare(appinfo='Produce wireframe or transparent beam cylinders. Typical uses include propeller/thruster water flow or line-of-sight sonar/radar/light beams. Negative range values invert base and apex at same relative location. Default: beam with apex at (0 0 0) and base of radius 1 in x-z plane at (1 0 0).',name='BeamCylinder',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Assigning a name to a BeamCylinder aids tracing',name='name',type='SFString',value='(unnamed)'),
        field(accessType='inputOnly',appinfo='(communications) is transmitted signal in contact with receiver or (sensor) is a target return detected?',name='contact',type='SFBool'),
        field(accessType='inputOnly',appinfo='distance in meters along x axis',name='range',type='SFFloat'),
        field(accessType='initializeOnly',appinfo='distance in meters used until eventIn range sent',name='defaultRange',type='SFFloat',value=1),
        field(accessType='initializeOnly',appinfo='whether wireframe beam is drawn',name='wireframe',type='SFBool',value=True),
        field(accessType='initializeOnly',appinfo='whether solid beam is drawn',name='solid',type='SFBool',value=True),
        field(accessType='initializeOnly',appinfo='meters across vertical y axis',name='beamHeight',type='SFFloat',value=1),
        field(accessType='initializeOnly',appinfo='meters across horizontal z axis',name='beamWidth',type='SFFloat',value=1),
        field(accessType='initializeOnly',appinfo='rendering color when contact=true',name='contactColor',type='SFColor',value=(.8,.1,.1)),
        field(accessType='initializeOnly',appinfo='rendering color when contact=false',name='noContactColor',type='SFColor',value=(.3,.5,.5)),
        field(accessType='inputOutput',appinfo='1 = fully transparent wireframe only',name='transparency',type='SFFloat',value=0)]
        #  BEAM_CONTROL beam scaling is controlled by range/beamHeightDegrees/beamWidthDegrees/direction inputs 
        ),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='BEAM_CONTROL',
          children=[
          Switch(DEF='WIREFRAME_SWITCH',whichChoice=0,
            children=[
            WorldInfo(info=["initial choice is null node (WorldInfo), meaning no wireframe beam"]),
            Shape(
              appearance=Appearance(
                material=Material(DEF='WIRE_COLOR',diffuseColor=(.1,.1,.1),
                  IS=IS(
                    connect=[
                    connect(nodeField='transparency',protoField='transparency')]))),
              geometry=IndexedLineSet(coordIndex=[0,13,-1,1,14,-1,2,15,-1,3,16,-1,4,17,-1,5,18,-1,6,19,-1,7,20,-1,8,21,-1,9,22,-1,10,23,-1,11,24,-1,12,25,-1,13,14,15,16,17,18,19,20,21,22,23,24,13,-1,0,1,2,3,4,5,6,7,8,9,10,11,0,-1],
                coord=Coordinate(point=[(0,1,0),(0,0.86,0.50),(0,0.50,0.86),(0,0,1.0),(0,-0.50,0.86),(0,-0.86,0.50),(0,-1,0),(0,-0.86,-0.50),(0,-0.50,-0.86),(0,0,-1.0),(0,0.50,-0.86),(0,0.86,-0.50),(0,0,0),(1,1,0),(1,0.86,0.50),(1,0.50,0.86),(1,0,1.0),(1,-0.50,0.86),(1,-0.86,0.50),(1,-1,0),(1,-0.86,-0.50),(1,-0.50,-0.86),(1,0,-1.0),(1,0.50,-0.86),(1,0.86,-0.50),(1,0,0)])))]),
          Switch(DEF='SOLID_SWITCH',whichChoice=0,
            children=[
            WorldInfo(info=["initial choice is null node (WorldInfo), meaning no solid beam"]),
            Transform(rotation=(0,0,1,1.57079),translation=(.5,0,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(DEF='CYLINDER_COLOR',diffuseColor=(.1,.1,.1),
                    IS=IS(
                      connect=[
                      connect(nodeField='transparency',protoField='transparency')]))),
                #  solid='false' is harder to recognize properly, use default solid='true' 
                geometry=Cylinder(height=1))])])]),
        #  Non-rendered animation controls 
        Script(DEF='DETECTION',
          field=[
          field(accessType='initializeOnly',name='name',type='SFString'),
          field(accessType='inputOnly',name='contact',type='SFBool'),
          field(accessType='initializeOnly',name='wireframe',type='SFBool'),
          field(accessType='initializeOnly',name='solid',type='SFBool'),
          field(accessType='initializeOnly',name='contactColor',type='SFColor'),
          field(accessType='initializeOnly',name='noContactColor',type='SFColor'),
          field(accessType='outputOnly',name='beamColor',type='SFColor'),
          field(accessType='outputOnly',name='wireframeChoice',type='SFInt32'),
          field(accessType='outputOnly',name='solidChoice',type='SFInt32'),
          field(accessType='initializeOnly',appinfo='internal flag to turn on Script tracing',name='traceEnabled',type='SFBool',value=True)],
          IS=IS(
            connect=[
            connect(nodeField='name',protoField='name'),
            connect(nodeField='contact',protoField='contact'),
            connect(nodeField='wireframe',protoField='wireframe'),
            connect(nodeField='solid',protoField='solid'),
            connect(nodeField='contactColor',protoField='contactColor'),
            connect(nodeField='noContactColor',protoField='noContactColor')])),
        Script(DEF='BEAM_CALCULATE',
          field=[
          field(accessType='initializeOnly',name='name',type='SFString'),
          field(accessType='inputOnly',name='range',type='SFFloat'),
          field(accessType='initializeOnly',name='defaultRange',type='SFFloat'),
          field(accessType='initializeOnly',name='beamHeight',type='SFFloat'),
          field(accessType='initializeOnly',name='beamWidth',type='SFFloat'),
          field(accessType='outputOnly',name='beamScale',type='SFVec3f'),
          field(accessType='outputOnly',name='direction',type='SFRotation'),
          field(accessType='outputOnly',name='reverseOffset',type='SFVec3f'),
          field(accessType='initializeOnly',appinfo='internal flag to turn on Script tracing',name='traceEnabled',type='SFBool',value=True)],
          IS=IS(
            connect=[
            connect(nodeField='name',protoField='name'),
            connect(nodeField='range',protoField='range'),
            connect(nodeField='defaultRange',protoField='defaultRange'),
            connect(nodeField='beamHeight',protoField='beamHeight'),
            connect(nodeField='beamWidth',protoField='beamWidth')])),
        ROUTE(fromField='beamColor',fromNode='DETECTION',toField='emissiveColor',toNode='WIRE_COLOR'),
        ROUTE(fromField='beamColor',fromNode='DETECTION',toField='emissiveColor',toNode='CYLINDER_COLOR'),
        ROUTE(fromField='wireframeChoice',fromNode='DETECTION',toField='whichChoice',toNode='WIREFRAME_SWITCH'),
        ROUTE(fromField='solidChoice',fromNode='DETECTION',toField='whichChoice',toNode='SOLID_SWITCH'),
        ROUTE(fromField='beamScale',fromNode='BEAM_CALCULATE',toField='scale',toNode='BEAM_CONTROL'),
        ROUTE(fromField='direction',fromNode='BEAM_CALCULATE',toField='rotation',toNode='BEAM_CONTROL'),
        ROUTE(fromField='reverseOffset',fromNode='BEAM_CALCULATE',toField='translation',toNode='BEAM_CONTROL')])),
    #  Viewable geometry for this scene is anchored text that links to an example showing ExternProtoDeclare usage of BeamCylinder 
    Anchor(description='Beam Cylinder Example',url=["BeamCylinderExample.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamCylinderExample.x3d","BeamCylinderExample.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamCylinderExample.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["BeamCylinderPrototype","is a Prototype definition file.","","To see an example scene","click this text and view","BeamCylinderExample."],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
      Shape(
        #  transparent Box as text-selection assist 
        geometry=Box(size=(11,6,.001)),
        appearance=Appearance(
          material=Material(transparency=1)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BeamCylinderPrototype.py")
