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
    meta(content='GeoTerrainGrid.x3d',name='title'),
    meta(content='New version of GeoElevationGrid that places objects on terrian',name='description'),
    meta(content='Brian Hittner, CPT, U.S.A.',name='creator'),
    meta(content='Manual translation by Brian Hittner',name='translator'),
    meta(content='10 October 2003',name='created'),
    meta(content='10 October 2003',name='translated'),
    meta(content='1 October 2018',name='modified'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/Tools/Terrain/GeoTerrainGrid.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='GeoTerrainGrid',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='geoOrigin',type='SFNode',
          #  NULL node 
          ),
        field(accessType='initializeOnly',name='geoSystem',type='MFString',value=["GD","WE"]),
        field(accessType='initializeOnly',name='geoGridOrigin',type='SFString',value='0 0 0'),
        field(accessType='initializeOnly',name='xDimension',type='SFInt32',value=0),
        field(accessType='initializeOnly',name='xSpacing',type='SFString',value='1.0'),
        field(accessType='initializeOnly',name='zDimension',type='SFInt32',value=0),
        field(accessType='initializeOnly',name='zSpacing',type='SFString',value='1.0'),
        field(accessType='initializeOnly',name='height',type='MFFloat'),
        field(accessType='initializeOnly',name='debug',type='SFBool',value=False),
        field(accessType='inputOnly',name='set_height',type='MFFloat'),
        field(accessType='initializeOnly',name='yScale',type='SFFloat',value=1.0),
        field(accessType='inputOnly',name='set_yScale',type='SFFloat'),
        field(accessType='inputOutput',name='color',type='SFNode',
          #  NULL node 
          ),
        field(accessType='inputOutput',name='texCoord',type='SFNode',
          children=[
          TextureCoordinate(),]),
        field(accessType='inputOutput',name='normal',type='SFNode',
          #  NULL node 
          ),
        field(accessType='initializeOnly',name='normalPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='ccw',type='SFBool',value=True),
        field(accessType='initializeOnly',name='colorPerVertex',type='SFBool',value=True),
        field(accessType='initializeOnly',name='creaseAngle',type='SFFloat',value=0),
        field(accessType='initializeOnly',name='solid',type='SFBool',value=True)]),
      ProtoBody=ProtoBody(
        children=[
        IndexedFaceSet(DEF='GEOELEVGRID_IFS',
          IS=IS(
            connect=[
            connect(nodeField='color',protoField='color'),
            connect(nodeField='texCoord',protoField='texCoord'),
            connect(nodeField='ccw',protoField='ccw'),
            connect(nodeField='colorPerVertex',protoField='colorPerVertex'),
            connect(nodeField='creaseAngle',protoField='creaseAngle'),
            connect(nodeField='solid',protoField='solid'),
            connect(nodeField='normal',protoField='normal'),
            connect(nodeField='normalPerVertex',protoField='normalPerVertex')]),
          coord=Coordinate(DEF='GEOELEVGRID_COORD')),
        Script(DEF='GEOELEVGRID_SCRIPT',directOutput=True,url=["GeoTerrainGrid.class","https://savage.nps.edu/Savage/Tools/Terrain/GeoTerrainGrid.class"],
          field=[
          field(accessType='initializeOnly',name='geoOrigin',type='SFNode'),
          field(accessType='initializeOnly',name='geoSystem',type='MFString'),
          field(accessType='initializeOnly',name='geoGridOrigin',type='SFString'),
          field(accessType='initializeOnly',name='xDimension',type='SFInt32'),
          field(accessType='initializeOnly',name='xSpacing',type='SFString'),
          field(accessType='initializeOnly',name='zDimension',type='SFInt32'),
          field(accessType='initializeOnly',name='zSpacing',type='SFString'),
          field(accessType='initializeOnly',name='height',type='MFFloat'),
          field(accessType='inputOnly',name='set_height',type='MFFloat'),
          field(accessType='initializeOnly',name='yScale',type='SFFloat'),
          field(accessType='inputOnly',name='set_yScale',type='SFFloat'),
          field(accessType='initializeOnly',name='coord',type='SFNode',
            children=[
            Coordinate(USE='GEOELEVGRID_COORD')]),
          field(accessType='initializeOnly',name='ifs',type='SFNode',
            children=[
            IndexedFaceSet(USE='GEOELEVGRID_IFS')]),
          field(accessType='initializeOnly',name='debug',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='geoOrigin',protoField='geoOrigin'),
            connect(nodeField='geoSystem',protoField='geoSystem'),
            connect(nodeField='geoGridOrigin',protoField='geoGridOrigin'),
            connect(nodeField='xDimension',protoField='xDimension'),
            connect(nodeField='xSpacing',protoField='xSpacing'),
            connect(nodeField='zDimension',protoField='zDimension'),
            connect(nodeField='zSpacing',protoField='zSpacing'),
            connect(nodeField='height',protoField='height'),
            connect(nodeField='set_height',protoField='set_height'),
            connect(nodeField='yScale',protoField='yScale'),
            connect(nodeField='set_yScale',protoField='set_yScale'),
            connect(nodeField='debug',protoField='debug')]))]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GeoTerrainGrid.py")
