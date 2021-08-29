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
    meta(content='SideScanSonarPrototype.x3d',name='title'),
    meta(content='Produce wireframe or transparent sidescan sonar beams.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='15 March 2001',name='created'),
    meta(content='26 December 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonar/SideScanSonarPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(DEF='LockedDownInterface2D',type=["NONE"]),
    Background(skyColor=[(0,0.3,0.5)]),
    WorldInfo(info=["Produce wireframe or transparent beam cones."],title='BeamCone Prototyupe'),
    Viewpoint(description='SideScanSonar Prototype',position=(0,0,15)),
    ProtoDeclare(appinfo='Produce wireframe or semi-transparent sonar sidescan beams',name='SideScanSonar',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='vertical distance above bottom in meters along y axis',name='altitude',type='SFFloat'),
        field(accessType='initializeOnly',appinfo='default vertical distance above bottom in meters along y axis',name='defaultAltitude',type='SFFloat',value=3),
        field(accessType='initializeOnly',appinfo='maximum effective altitude of sidescan sonar above bottom',name='maxAltitude',type='SFFloat',value=3),
        field(accessType='initializeOnly',appinfo='distance in meters from nadir to rightmost/leftmost edge when operating at defaultAltitude above the bottom',name='defaultCrossTrackHalfRange',type='SFFloat',value=30),
        field(accessType='initializeOnly',appinfo='longitudinal width of a single return',name='defaultTrackWidthMeters',type='SFFloat',value=0.30),
        field(accessType='initializeOnly',appinfo='width (or diameter) of vehicle carrying port/starboard sidescan sonar transducers',name='vehicleWidthMeters',type='SFFloat',value=0.178),
        field(accessType='inputOnly',appinfo='(communications) whether transmitted signal is in contact with receiver or (sensor) is a target return detected?',name='contact',type='SFBool'),
        field(accessType='initializeOnly',appinfo='draw lines for tracking shape?',name='wireframe',type='SFBool',value=True),
        field(accessType='initializeOnly',appinfo='draw solid tracking shape?',name='solid',type='SFBool',value=True),
        field(accessType='initializeOnly',appinfo='rendering color when contact=true',name='contactColor',type='SFColor',value=(.8,.1,.1)),
        field(accessType='initializeOnly',appinfo='rendering color when contact=false',name='noContactColor',type='SFColor',value=(.3,.5,.5)),
        field(accessType='inputOutput',appinfo='1 = fully transparent wireframe only',name='transparency',type='SFFloat',value=0)]),
      ProtoBody=ProtoBody(
        #  BEAM_CONTROL beam scaling is controlled by range/beamHeightDegrees/beamWidthDegrees/direction inputs 
        children=[
        Transform(DEF='BEAM_CONTROL',
          children=[
          Switch(DEF='WIREFRAME_SWITCH',whichChoice=1,
            #  TODO refactor index values starting from -1, remove WorldInfo 
            children=[
            WorldInfo(info=["initial choice is null node (WorldInfo), meaning no wireframe beam"]),
            Shape(
              appearance=Appearance(
                material=Material(DEF='WireMaterial',diffuseColor=(.1,.1,.1),
                  IS=IS(
                    connect=[
                    connect(nodeField='transparency',protoField='transparency')]))),
              geometry=IndexedLineSet(DEF='ILS',coordIndex=[1,2,3,1,-1,5,3,4,5,-1,6,8,7,6,-1,10,9,8,10,-1,6,7,2,1,6,-1,10,5,4,9,10,-1],
                coord=Coordinate(DEF='BeamPatternCoordinatePoints',point=[(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0),(0,0,0)])))]),
          Switch(DEF='SOLID_SWITCH',whichChoice=0,
            #  TODO refactor index values starting from -1, remove WorldInfo 
            children=[
            WorldInfo(info=["initial choice is null node (WorldInfo), meaning no solid beam"]),
            Shape(
              appearance=Appearance(
                material=Material(DEF='FaceMaterial',diffuseColor=(.1,.1,.1),
                  IS=IS(
                    connect=[
                    connect(nodeField='transparency',protoField='transparency')]))),
              geometry=IndexedFaceSet(DEF='IFS',coordIndex=[1,2,3,1,-1,5,3,4,5,-1,6,8,7,6,-1,10,9,8,10,-1,6,7,2,1,6,-1,10,5,4,9,10,-1],solid=False,
                coord=Coordinate(USE='BeamPatternCoordinatePoints')))])]),
        #  Non-renderable animation controls 
        Script(DEF='BEAM_CALCULATE',
          field=[
          field(accessType='inputOnly',name='altitude',type='SFFloat'),
          field(accessType='initializeOnly',name='defaultAltitude',type='SFFloat'),
          field(accessType='initializeOnly',name='maxAltitude',type='SFFloat'),
          field(accessType='initializeOnly',name='defaultCrossTrackHalfRange',type='SFFloat'),
          field(accessType='initializeOnly',name='defaultTrackWidthMeters',type='SFFloat'),
          field(accessType='initializeOnly',name='vehicleWidthMeters',type='SFFloat'),
          field(accessType='outputOnly',name='beamScale',type='SFVec3f'),
          field(accessType='outputOnly',name='coordinatePoints',type='MFVec3f'),
          field(accessType='initializeOnly',appinfo='internal flag to turn on Script tracing',name='traceEnabled',type='SFBool',value=False)],
          IS=IS(
            connect=[
            connect(nodeField='altitude',protoField='altitude'),
            connect(nodeField='defaultAltitude',protoField='defaultAltitude'),
            connect(nodeField='maxAltitude',protoField='maxAltitude'),
            connect(nodeField='defaultCrossTrackHalfRange',protoField='defaultCrossTrackHalfRange'),
            connect(nodeField='defaultTrackWidthMeters',protoField='defaultTrackWidthMeters'),
            connect(nodeField='vehicleWidthMeters',protoField='vehicleWidthMeters')])),
        Script(DEF='DETECTION',directOutput=True,
          field=[
          field(accessType='inputOnly',name='contact',type='SFBool'),
          field(accessType='initializeOnly',name='wireframe',type='SFBool'),
          field(accessType='initializeOnly',name='solid',type='SFBool'),
          field(accessType='initializeOnly',name='contactColor',type='SFColor'),
          field(accessType='initializeOnly',name='noContactColor',type='SFColor'),
          field(accessType='outputOnly',name='beamColor',type='SFColor'),
          field(accessType='outputOnly',name='wireframeChoice',type='SFInt32'),
          field(accessType='outputOnly',name='solidChoice',type='SFInt32'),
          field(accessType='initializeOnly',name='MaterialNodeHolder',type='SFNode',
            children=[
            Material(USE='FaceMaterial')]),
          field(accessType='initializeOnly',appinfo='internal flag to turn on Script tracing',name='traceEnabled',type='SFBool',value=False)],
          IS=IS(
            connect=[
            connect(nodeField='contact',protoField='contact'),
            connect(nodeField='wireframe',protoField='wireframe'),
            connect(nodeField='solid',protoField='solid'),
            connect(nodeField='contactColor',protoField='contactColor'),
            connect(nodeField='noContactColor',protoField='noContactColor')])),
        ROUTE(fromField='beamScale',fromNode='BEAM_CALCULATE',toField='scale',toNode='BEAM_CONTROL'),
        ROUTE(fromField='coordinatePoints',fromNode='BEAM_CALCULATE',toField='point',toNode='BeamPatternCoordinatePoints'),
        ROUTE(fromField='beamColor',fromNode='DETECTION',toField='emissiveColor',toNode='WireMaterial'),
        ROUTE(fromField='beamColor',fromNode='DETECTION',toField='emissiveColor',toNode='FaceMaterial'),
        ROUTE(fromField='wireframeChoice',fromNode='DETECTION',toField='whichChoice',toNode='WIREFRAME_SWITCH'),
        ROUTE(fromField='solidChoice',fromNode='DETECTION',toField='whichChoice',toNode='SOLID_SWITCH')])),
    #  Viewable geometry for this scene is anchored text that links to an example showing ExternProtoDeclare usage of BeamCone 
    Anchor(description='SideScanSonar Example',parameter=["target=_blank"],url=["SideScanSonarExample.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonar/SideScanSonarExample.x3d","SideScanSonarExample.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonar/SideScanSonarExample.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["SideScanSonarPrototype","is a Prototype definition file.","","To see an example scene","click this text and view","SideScanSonarExample."],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
      Shape(
        #  transparent Box as text-selection assist 
        geometry=Box(size=(10.5,6,.001)),
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

print ("python x3d.py load successful for SideScanSonarPrototype.py")
