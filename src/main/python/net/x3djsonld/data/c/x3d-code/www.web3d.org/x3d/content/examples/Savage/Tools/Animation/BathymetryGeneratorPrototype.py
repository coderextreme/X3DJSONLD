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
    meta(content='BathymetryGeneratorPrototype.x3d',name='title'),
    meta(content='This prototype generates bathymetry based on the input data using IndexedFaceSet.',name='description'),
    meta(content='Don Brutzman, Jane Wu',name='creator'),
    meta(content='8 February 2002',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='bathymetry',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/BathymetryGeneratorPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='BathymetryGenerator creates bottom topography',name='BathymetryGenerator',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='positionArray',type='MFVec3f',value=[(0.0,0,0),(10,-4,0),(25,-6,0),(30,-8,5),(38,-15,5),(45,-18,5),(55,-22,5),(60,-25,15),(60,-27,22),(55,-30,35),(48,-35,35),(35,-35,35),(25,-45,35),(20,-55,35),(15,-70,35),(3,-70,35),(-5,-72,40),(-5,-75,50),(0,-80,55),(15,-75,55),(30,-70,55),(35,-60,55),(40,-50,55),(50,-34,55),(65,-23,70)]),
        field(accessType='initializeOnly',name='colorSchemeDepthRangeArray',type='MFVec2f',value=[(0,-10),(-10,-20),(-20,-30),(-30,-40),(-40,-50),(-50,-60),(-60,-70),(-70,-999999)]),
        field(accessType='initializeOnly',name='colorSchemeColorArray',type='MFColor',value=[(1,1,0.2),(0.6,1,1),(0,1,1),(0.2,0.6,0.2),(1,0,1),(0.56,0,0.32),(0.2,0.3,0.7),(0,0,1)]),
        field(accessType='initializeOnly',name='beamWidth',type='SFFloat',value=2),
        field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Transform(DEF='Bathymetry',
            children=[
            Shape(
              geometry=IndexedFaceSet(DEF='BathymetryFaceSet',ccw=False,
                color=Color(DEF='BathymetryFaceColor'),
                coord=Coordinate(DEF='BathymetryFaceCoord'))),
            Script(DEF='BathymetryScript',
              field=[
              field(accessType='initializeOnly',name='positionArray',type='MFVec3f'),
              field(accessType='initializeOnly',name='depthRangeArray',type='MFVec2f'),
              field(accessType='initializeOnly',name='depthColorArray',type='MFColor'),
              field(accessType='initializeOnly',name='beamWidth',type='SFFloat'),
              field(accessType='outputOnly',name='bathyFaceCoordPoints',type='MFVec3f'),
              field(accessType='outputOnly',name='bathyCoordIndex',type='MFInt32'),
              field(accessType='outputOnly',name='bathyFaceColorArray',type='MFColor'),
              field(accessType='outputOnly',name='bathyColorIndex',type='MFInt32'),
              field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
              field(accessType='initializeOnly',appinfo='local variable',name='dataValid',type='SFBool',value=False),
              field(accessType='initializeOnly',appinfo='local variable',name='color',type='SFColor',value=(1,1,1)),
              field(accessType='initializeOnly',appinfo='local variable',name='leftPoint',type='SFVec3f',value=(0,0,0)),
              field(accessType='initializeOnly',appinfo='local variable',name='rightPoint',type='SFVec3f',value=(0,0,0))],
              IS=IS(
                connect=[
                connect(nodeField='positionArray',protoField='positionArray'),
                connect(nodeField='depthRangeArray',protoField='colorSchemeDepthRangeArray'),
                connect(nodeField='depthColorArray',protoField='colorSchemeColorArray'),
                connect(nodeField='beamWidth',protoField='beamWidth'),
                connect(nodeField='traceEnabled',protoField='traceEnabled')])),
            ROUTE(fromField='bathyFaceCoordPoints',fromNode='BathymetryScript',toField='point',toNode='BathymetryFaceCoord'),
            ROUTE(fromField='bathyCoordIndex',fromNode='BathymetryScript',toField='set_coordIndex',toNode='BathymetryFaceSet'),
            ROUTE(fromField='bathyFaceColorArray',fromNode='BathymetryScript',toField='color',toNode='BathymetryFaceColor'),
            ROUTE(fromField='bathyColorIndex',fromNode='BathymetryScript',toField='set_colorIndex',toNode='BathymetryFaceSet')])])])),
    #  ==================== 
    #  Example scene starts here, in case this prototype is examined. 
    Anchor(description='BathymetryGeneratorExample',parameter=["target=_blank"],url=["BathymetryGeneratorExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/BathymetryGeneratorExample.x3d","BathymetryGeneratorExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/BathymetryGeneratorExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["BathymetryGeneratorPrototype","is a prototype definition file","","Click this text to see","BathymetryGeneratorExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(0.6,0.8,0.4))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BathymetryGeneratorPrototype.py")
