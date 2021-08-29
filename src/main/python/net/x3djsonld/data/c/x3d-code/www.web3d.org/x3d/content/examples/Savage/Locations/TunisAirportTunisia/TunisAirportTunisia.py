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
    component(level=1,name='Geospatial'),
    component(level=3,name='Navigation'),
    meta(content='TunisAirportTunisia.x3d',name='title'),
    meta(content='Tunis Airport, Tunis, Tunisia',name='description'),
    meta(content='Byounghyun Yoo',name='creator'),
    meta(content='17 March 2008',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='https://savage.nps.edu/Savage/Locations/TunisAirportTunisia/TunisAirportTunisia.x3d',name='identifier'),
    meta(content='../../license.html',name='license'),
    meta(content='Nextview_license.txt',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SavageTerrainMetadataTemplate',
      metadata=MetadataSet(name='SMAL',reference='https://savage.nps.edu/Savage/Tools/SMAL/SMAL.html',
        value=[
        MetadataString(name='version',value=["1.0"],
          metadata=MetadataString(name='appinfo',value=["This is the version of SMAL employed, not of the model."])),
        MetadataSet(name='TerrainTile',
          value=[
          MetadataString(name='tileCategory',value=["landTerrain"],
            metadata=MetadataString(name='appinfo',value=["landTerrain","bathymetry","planetarySurface"])),
          MetadataSet(name='Classification',
            metadata=MetadataString(name='appinfo'),
            value=[
            MetadataString(name='level',value=["UNCLASSIFIED"],
              metadata=MetadataString(name='appinfo',value=["UNCLASSIFIED","FOUO","CONFIDENTIAL","SECRET"])),
            MetadataString(name='reference',
              metadata=MetadataString(name='appinfo',value=["The published source of classified information, if any, contained in the Metadata."])),
            MetadataString(name='rationale',
              metadata=MetadataString(name='appinfo',value=["The specific element which contains the information classifying this document."]))]),
          MetadataSet(name='GeoOrigin',
            value=[
            MetadataString(name='geoCoords',value=["N00 0.0 W00 0.0"],
              metadata=MetadataString(name='appinfo',value=["The latitude and longitude of the origin point of the model."])),
            MetadataString(name='geoSystem',value=["GD","WE"],
              metadata=MetadataString(name='appinfo',value=["Two enumerations, one for spatial reference frame, the other for earth ellipsoid e.g. [GD WE]. See X3D specification 25.2.3."])),
            MetadataString(name='rotateYUp',value=["true"],
              metadata=MetadataString(name='appinfo',value=["The axis orientation is positive Y up."])),
            MetadataString(name='geoOriginIdentifier',value=["GeoOriginTunis"],
              metadata=MetadataString(name='appinfo',value=["GeoOrigin elements must have a unique ID so that they can be referenced."]))]),
          MetadataSet(name='GeographicExtent',
            value=[
            MetadataFloat(name='area',value=[0],
              metadata=MetadataString(name='appinfo')),
            MetadataFloat(name='verticalExtent',value=[0],
              metadata=MetadataString(name='appinfo')),
            MetadataSet(name='LatLongCoordinate',
              metadata=MetadataString(name='appinfo'),
              value=[
              MetadataString(name='latitude'),
              MetadataString(name='longitude'),
              MetadataString(name='geoOriginReference',value=["GeoOriginTunis"])])]),
          MetadataSet(name='OverlaySet',
            metadata=MetadataString(name='appinfo'),
            value=[
            MetadataSet(name='Classification',
              value=[
              MetadataString(name='level',value=["UNCLASSIFIED"],
                metadata=MetadataString(name='appinfo',value=["UNCLASSIFIED","FOUO","CONFIDENTIAL","SECRET"])),
              MetadataString(name='reference',
                metadata=MetadataString(name='appinfo',value=["The published source of classified information, if any, contained in the Metadata."])),
              MetadataString(name='rationale',
                metadata=MetadataString(name='appinfo',value=["The specific element which contains the information classifying this document."]))]),
            MetadataSet(name='OverlaySetMap',
              metadata=MetadataString(name='appinfo'),
              value=[
              MetadataString(name='fileLocationURL',value=["http://www.web3d.org/x3d/content/examples/Savage/Locations/TunisAirportTunisia/TunisAirportTunisia.x3d"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='centerPointLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='centerPointLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='northBoundLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='southBoundLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='eastBoundLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='westBoundLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo'))]),
            MetadataSet(name='OverlaySetChart',
              metadata=MetadataString(name='appinfo'),
              value=[
              MetadataSet(name='Classification',
                value=[
                MetadataString(name='level',value=["UNCLASSIFIED"],
                  metadata=MetadataString(name='appinfo',value=["UNCLASSIFIED","FOUO","CONFIDENTIAL","SECRET"])),
                MetadataString(name='reference',
                  metadata=MetadataString(name='appinfo',value=["The published source of classified information, if any, contained in the Metadata."])),
                MetadataString(name='rationale',
                  metadata=MetadataString(name='appinfo',value=["The specific element which contains the information classifying this document."]))]),
              MetadataString(name='fileLocationURL',value=["http://www.web3d.org/x3d/content/examples/Savage/Locations/TunisAirportTunisia/TunisAirportTunisia.x3d"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='centerPointLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='centerPointLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='northBoundLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='southBoundLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='eastBoundLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='westBoundLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo'))]),
            MetadataSet(name='OverlaySetImagery',
              metadata=MetadataString(name='appinfo'),
              value=[
              MetadataSet(name='Classification',
                value=[
                MetadataString(name='level',value=["UNCLASSIFIED"],
                  metadata=MetadataString(name='appinfo',value=["UNCLASSIFIED","FOUO","CONFIDENTIAL","SECRET"])),
                MetadataString(name='reference',
                  metadata=MetadataString(name='appinfo',value=["The published source of classified information, if any, contained in the Metadata."])),
                MetadataString(name='rationale',
                  metadata=MetadataString(name='appinfo',value=["The specific element which contains the information classifying this document."]))]),
              MetadataString(name='fileLocationURL',value=["http://www.web3d.org/x3d/content/examples/Savage/Locations/TunisAirportTunisia/TunisAirportTunisia.x3d"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='centerPointLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='centerPointLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='northBoundLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='southBoundLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='eastBoundLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo')),
              MetadataString(name='westBoundLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo'))])]),
          MetadataSet(name='X3DArchiveModel',
            metadata=MetadataString(name='appinfo',value=["This is a placeholder element which ensures the proper validation of autogenerated SMAL code."]))])])),
    Group(
      children=[
      PointLight(location=(10000000000,0,0),radius=100000000000000),
      PointLight(location=(-10000000000,0,0),radius=100000000000000),
      PointLight(location=(0,10000000000,0),radius=100000000000000),
      PointLight(location=(0,-10000000000,0),radius=100000000000000),
      PointLight(location=(0,0,10000000000),radius=100000000000000),
      PointLight(location=(0,0,-10000000000),radius=100000000000000),
      GeoViewpoint(description='Default Viewpoint',orientation=(-1,0,0,1.57),position=(36.85232285848162,10.229842500002526,4719.680360140046),
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.85232285848162,10.229842500002526,0),geoSystem=["GD"])),
      #  This axis tool helps align to world coordinates 
      #  Transform scale='700 700 700'> <Inline url="../../../Basic/course/CoordinateAxesNSEW.x3d"/> </Transform 
      Transform(rotation=(1,0,0,0.15),translation=(0,2.5,0),
        children=[
        Transform(rotation=(0,-1,0,0.075),
          children=[
          Transform(rotation=(0,0,1,0.92),
            children=[
            Inline(url=["./tiles/0/airport0-0.x3d","https://savage.nps.edu/Savage/Locations/TunisAirportTunisia/./tiles/0/airport0-0.x3d","tiles/0/airport0-0.wrl","https://savage.nps.edu/Savage/Locations/TunisAirportTunisia/tiles/0/airport0-0.wrl"])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TunisAirportTunisia.py")
