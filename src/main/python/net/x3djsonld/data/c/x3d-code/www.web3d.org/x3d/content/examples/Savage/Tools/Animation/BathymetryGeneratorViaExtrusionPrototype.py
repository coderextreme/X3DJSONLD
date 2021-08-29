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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='BathymetryGeneratorViaExtrusionPrototype.x3d',name='title'),
    meta(content='This prototype generates bathymetry based on the input data, and uses Extrusion as the output geometry (with some problems as a result).',name='description'),
    meta(content='Jane Wu',name='creator'),
    meta(content='8 January 2002',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='bathymetry',name='subject'),
    meta(content='http://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Extrusion',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/BathymetryGeneratorViaExtrusionPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='BathymetryGenerator',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='positionArray',type='MFVec3f',value=[(0,0,0),(10,-4,0),(25,-6,0),(30,-8,5),(38,-15,5),(45,-18,5),(55,-22,5),(60,-25,15),(60,-27,22),(55,-30,35),(48,-35,35),(35,-35,35),(25,-45,35),(20,-55,35),(15,-70,35),(3,-70,35),(-5,-72,40),(-5,-75,50),(0,-80,55),(15,-75,55),(30,-70,55),(35,-60,55),(40,-50,55),(50,-34,55),(65,-23,70)]),
        field(accessType='initializeOnly',appinfo='for future development',name='timeArray',type='MFTime',value=[1,3,6,8,10,12,14,15,17,18,23,28,35,37,39,43,45,47,48,53,58,60,61,65,70]),
        field(accessType='initializeOnly',name='colorSchemeDepthRangeArray',type='MFVec2f',value=[(0,-10),(-10,-20),(-20,-30),(-30,-40),(-40,-50),(-50,-60),(-60,-70),(-70,-999999)]),
        field(accessType='initializeOnly',name='colorSchemeColorArray',type='MFColor',value=[(1,1,0.2),(0.6,1,1),(0,1,1),(0.2,0.6,0.2),(1,0,1),(0.56,0,0.32),(0.2,0.3,0.7),(0,0,1)]),
        field(accessType='initializeOnly',name='beamWidth',type='SFFloat',value=2),
        field(accessType='initializeOnly',name='surfaceTransparency',type='SFFloat',value=0.25),
        field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Transform(DEF='Bathymetry'),
          Script(DEF='BathymetryScript',directOutput=True,
            field=[
            field(accessType='initializeOnly',name='positionArray',type='MFVec3f'),
            field(accessType='initializeOnly',name='timeArray',type='MFTime'),
            field(accessType='initializeOnly',name='colorSchemeDepthRangeArray',type='MFVec2f'),
            field(accessType='initializeOnly',name='colorSchemeColorArray',type='MFColor'),
            field(accessType='initializeOnly',name='beamWidth',type='SFFloat'),
            field(accessType='initializeOnly',name='transparency',type='SFFloat'),
            field(accessType='initializeOnly',name='spine',type='MFVec3f',value=[(0,0,0),(0,1,0)]),
            field(accessType='initializeOnly',name='scale',type='MFVec2f',value=[(1,1)]),
            field(accessType='initializeOnly',name='orientation',type='MFRotation',value=[(0,0,1,0)]),
            field(accessType='initializeOnly',name='bathyColor',type='SFColor',value=(1,1,1)),
            field(accessType='outputOnly',name='bathyNodes',type='MFNode'),
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
            field(accessType='initializeOnly',name='coordinate',type='SFVec3f',value=(0,0,0)),
            field(accessType='initializeOnly',name='previousPosition',type='SFVec3f',value=(0,0,0)),
            field(accessType='initializeOnly',name='position',type='SFVec3f',value=(0,0,0)),
            field(accessType='initializeOnly',name='bathyNodeIndex',type='SFInt32',value=0)],
            IS=IS(
              connect=[
              connect(nodeField='positionArray',protoField='positionArray'),
              connect(nodeField='timeArray',protoField='timeArray'),
              connect(nodeField='colorSchemeDepthRangeArray',protoField='colorSchemeDepthRangeArray'),
              connect(nodeField='colorSchemeColorArray',protoField='colorSchemeColorArray'),
              connect(nodeField='beamWidth',protoField='beamWidth'),
              connect(nodeField='transparency',protoField='surfaceTransparency'),
              connect(nodeField='traceEnabled',protoField='traceEnabled')])),
          ROUTE(fromField='bathyNodes',fromNode='BathymetryScript',toField='addChildren',toNode='Bathymetry'),
          Shape(
            geometry=Extrusion(),)])])),
    Viewpoint(description='MainView',position=(0,-50,200)),
    ProtoInstance(name='BathymetryGenerator',
      fieldValue=[
      fieldValue(name='positionArray',value=[(0,0,0),(10,-4,0),(25,-6,0),(30,-8,5),(38,-15,5),(45,-18,5),(55,-22,5),(60,-25,15),(60,-27,22),(55,-30,35),(48,-35,35),(35,-35,35),(25,-45,35),(20,-55,35),(15,-70,35),(3,-70,35),(-5,-72,40),(-5,-75,50),(0,-80,55),(15,-75,55),(30,-70,55),(35,-60,55),(40,-50,55),(50,-34,55),(65,-23,70)]),
      fieldValue(name='surfaceTransparency',value=0.25),
      fieldValue(name='traceEnabled',value=True)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BathymetryGeneratorViaExtrusionPrototype.py")
