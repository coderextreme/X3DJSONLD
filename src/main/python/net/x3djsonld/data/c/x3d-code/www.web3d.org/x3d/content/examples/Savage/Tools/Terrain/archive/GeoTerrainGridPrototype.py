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

newModel=X3D(version='3.0',profile='Immersive',
  head=head(
    children=[
    meta(content='GeoTerrainGridPrototype.x3d',name='title'),
    meta(content='GeoTerrainGrid is a Prototype that extends GeoElevationGrid to determine elevation and orientation at any point in the grid.  Based on GeoVRML 1.1 source by Martin Reddy SRI.',name='description'),
    meta(content='Brian Hittner and Don Brutzman',name='creator'),
    meta(content='14 July 2003',name='created'),
    meta(content='23 July 2003',name='translated'),
    meta(content='25 August 2003',name='modified'),
    meta(content='under development',name='warning'),
    meta(content='http://www.geovrml.org',name='reference'),
    meta(content='3D terrain, GeoElevationGrid extension',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Terrain/GeoTerrainGridPrototype.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(name='license',content='../../license.html')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='GeoTerrainGrid extends GeoElevationGrid to determine elevation and orientation at any point in the grid.',name='GeoTerrainGrid',
      ProtoInterface=ProtoInterface(
        # new fields. still need to expose interfaces to access new functionality.
        # original GeoElevationGrid fields
        field=[
        field(accessType='inputOnly',name='set_yScale',type='SFFloat'),
        field(accessType='initializeOnly',name='yScale',type='SFFloat',value=1.0),
        field(accessType='inputOutput',name='texCoord',type='SFNode',
          children=[
          TextureCoordinate(),]),
        field(accessType='initializeOnly',name='geoOrigin',type='SFNode'),
        field(accessType='outputOnly',name='terrain',type='MFVec3f'),
        field(accessType='initializeOnly',name='xSpacing',type='SFString',value='1.0'),
        field(accessType='initializeOnly',name='creaseAngle',type='SFFloat',value=0.0),
        field(accessType='initializeOnly',name='geoSystem',type='MFString',value=["GD","WE"]),
        field(accessType='initializeOnly',name='zDimension',type='SFInt32',value=0),
        field(accessType='inputOnly',name='set_height',type='MFFloat'),
        field(accessType='initializeOnly',name='xDimension',type='SFInt32',value=0),
        field(accessType='initializeOnly',name='height',type='MFFloat'),
        field(accessType='initializeOnly',name='colorPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='geoGridOrigin',type='SFString',value='0 0 0'),
        field(accessType='inputOutput',name='color',type='SFNode'),
        field(accessType='initializeOnly',name='zSpacing',type='SFString',value='1.0'),
        field(accessType='initializeOnly',name='normalPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=True),
        field(accessType='initializeOnly',name='ccw',type='SFBool',value=True),
        field(accessType='inputOutput',name='normal',type='SFNode')]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='GEOELEVGRID_IFS',
          IS=IS(
            connect=[
            connect(nodeField='texCoord',protoField='texCoord'),
            connect(nodeField='creaseAngle',protoField='creaseAngle'),
            connect(nodeField='colorPerVertex',protoField='colorPerVertex'),
            connect(nodeField='color',protoField='color'),
            connect(nodeField='normalPerVertex',protoField='normalPerVertex'),
            connect(nodeField='solid',protoField='solid'),
            connect(nodeField='ccw',protoField='ccw'),
            connect(nodeField='normal',protoField='normal')]),
          coord=Coordinate(DEF='GEOELEVGRID_COORD'))])),
    # ====================
    Anchor(description='Touch text for example',parameter=["target=_blank"],url=["GeoTerrainGridExample.wrl"
"https://savage.nps.edu/Savage/Tools/Terrain/GeoTerrainGridExample.wrl"
"GeoTerrainGridExample.x3d"
"https://savage.nps.edu/Savage/Tools/Terrain/GeoTerrainGridExample.x3d"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["GeoTerrainGridPrototype"
"is a Prototype (PROTO) definition file."
""
"To see an example scene using this new node,"
"click this text and view"
"GeoTerrainGridExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GeoTerrainGridPrototype.py")
