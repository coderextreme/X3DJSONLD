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
    meta(content='SavageTerrainMetadataTemplate.x3d',name='title'),
    meta(content='This scene defines the exemplar template for Savage terrain metadata, allowing further interoperability via SMAL constructs. Savage Modeling Analysis Language (SMAL) authoring capabilities for X3D assume proper metadata within a scene to identify an object properly. A corresponding native-XML .xsd schema for SMAL will also be developed to facilitate conversion and use of vehicle metadata.',name='description'),
    meta(content='Travis Rauch, Don Brutzman',name='creator'),
    meta(content='16 February 2006',name='created'),
    meta(content='28 February 2016',name='modified'),
    meta(content='add corresponding XML versions of metadata',name='TODO'),
    meta(content='http://x3dgraphics.com/chapters/Chapter15-MetadataInformation.html',name='reference'),
    meta(content='SMAL terrain metadata',name='subject'),
    meta(content='SMAL.html',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/SMAL/SMAL.html',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/SMAL/SavageTerrainMetadataTemplate.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0,0.439216,0.760784)]),
    Viewpoint(description='View scene source to see metadata examples',position=(0,0,9)),
    Anchor(description='View source in browser',parameter=["target=_blank"],url=["SavageTerrainMetadataTemplate.html","https://savage.nps.edu/Savage/Tools/SMAL/SavageTerrainMetadataTemplate.html"],
      children=[
      Shape(
        geometry=Text(string=["View scene source","to see","metadata examples"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],style_='BOLD')),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.99,0.6)))),
      Shape(
        geometry=Box(size=(7,3,.001)),
        appearance=Appearance(
          material=Material(transparency=1))),
      TouchSensor(description='Select this text to view pretty-print documentation')]),
    WorldInfo(info=["https://savage.nps.edu/Savage/Tools/SMAL/SavageTerrainMetadataTemplate.x3d"],title='SavageTerrainMetadataTemplate',
      #  This initial MetadataSet is itself metadata for the parent WorldInfo, thus it has (omitted) default containerField='metadata' 
      metadata=MetadataSet(name='SMAL',reference='https://savage.nps.edu/Savage/Tools/SMAL/SMAL.html',
        #  All other SMAL Metadata nodes serve as values for their parent MetadataSet nodes, and thus have containerField='value' 
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
              metadata=MetadataString(name='appinfo',value=["The published cruise speed for this vehicle in mph or kph."])),
            MetadataString(name='rotateYUp',value=["true"],
              metadata=MetadataString(name='appinfo',value=["The axis orientation is positive Y up."])),
            MetadataString(name='geoOriginIdentifier',value=["ExampleGeoOriginInstance"],
              metadata=MetadataString(name='appinfo',value=["GeoOrigin elements must have a unique ID so that they can be referenced."]))]),
          MetadataSet(name='GeographicExtent',
            metadata=MetadataString(name='appinfo',value=["Describes the size and shape of the terrain model in two and a half dimensions; vertical extent and a polygonal shape defined by a minimum of three LatLongCoordinates."]),
            value=[
            MetadataFloat(name='area',value=[0],
              metadata=MetadataString(name='appinfo')),
            MetadataFloat(name='verticalExtent',value=[0],
              metadata=MetadataString(name='appinfo',value=["Vertical depth of the model in meters from the lowest to the highest point on the model."])),
            MetadataSet(name='LatLongCoordinateNorthwest',
              metadata=MetadataString(name='appinfo',value=["A latitude and longitude coordinate pair."]),
              value=[
              MetadataString(name='latitude',value=["N00 0.0"]),
              MetadataString(name='longitude',value=["W00 0.0"]),
              MetadataString(name='geoOriginReference',value=["ExampleGeoOriginInstance"])]),
            MetadataSet(name='LatLongCoordinateNortheast',
              metadata=MetadataString(name='appinfo',value=["A latitude and longitude coordinate pair."]),
              value=[
              MetadataString(name='latitude',value=["N00 0.0"]),
              MetadataString(name='longitude',value=["W00 0.0"]),
              MetadataString(name='geoOriginReference',value=["ExampleGeoOriginInstance"])]),
            MetadataSet(name='LatLongCoordinateSoutheast',
              metadata=MetadataString(name='appinfo',value=["A latitude and longitude coordinate pair."]),
              value=[
              MetadataString(name='latitude',value=["N00 0.0"]),
              MetadataString(name='longitude',value=["W00 0.0"]),
              MetadataString(name='geoOriginReference',value=["ExampleGeoOriginInstance"])]),
            MetadataSet(name='LatLongCoordinateSouthwest',
              metadata=MetadataString(name='appinfo',value=["A latitude and longitude coordinate pair."]),
              value=[
              MetadataString(name='latitude',value=["N00 0.0"]),
              MetadataString(name='longitude',value=["W00 0.0"]),
              MetadataString(name='geoOriginReference',value=["ExampleGeoOriginInstance"])])]),
          MetadataSet(name='OverlaySet',
            metadata=MetadataString(name='appinfo',value=["The collection point for all image file locators that are associated with this terrain."]),
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
              metadata=MetadataString(name='appinfo',value=["A map image."]),
              value=[
              MetadataSet(name='Classification',
                value=[
                MetadataString(name='level',value=["UNCLASSIFIED"],
                  metadata=MetadataString(name='appinfo',value=["UNCLASSIFIED","FOUO","CONFIDENTIAL","SECRET"])),
                MetadataString(name='reference',
                  metadata=MetadataString(name='appinfo',value=["The published source of classified information, if any, contained in the Metadata."])),
                MetadataString(name='rationale',
                  metadata=MetadataString(name='appinfo',value=["The specific element which contains the information classifying this document."]))]),
              MetadataString(name='fileLocationURL',value=["https://savage.nps.edu/Savage/"],
                metadata=MetadataString(name='appinfo',value=["The url array for the image file."])),
              MetadataString(name='centerPointLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The latitude of the center point of the image."])),
              MetadataString(name='centerPointLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The longitude of the center point of the image."])),
              MetadataString(name='northBoundLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The northernmost latitude found on the image."])),
              MetadataString(name='southBoundLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The southernmost latitude found on the image."])),
              MetadataString(name='eastBoundLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The easternmost longitude found on the image."])),
              MetadataString(name='westBoundLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The westernmost longitude found on the image."]))]),
            MetadataSet(name='OverlaySetChart',
              metadata=MetadataString(name='appinfo',value=["A Chart image."]),
              value=[
              MetadataSet(name='Classification',
                value=[
                MetadataString(name='level',value=["UNCLASSIFIED"],
                  metadata=MetadataString(name='appinfo',value=["UNCLASSIFIED","FOUO","CONFIDENTIAL","SECRET"])),
                MetadataString(name='reference',
                  metadata=MetadataString(name='appinfo',value=["The published source of classified information, if any, contained in the Metadata."])),
                MetadataString(name='rationale',
                  metadata=MetadataString(name='appinfo',value=["The specific element which contains the information classifying this document."]))]),
              MetadataString(name='fileLocationURL',value=["https://savage.nps.edu/Savage/"],
                metadata=MetadataString(name='appinfo',value=["The url array for the image file."])),
              MetadataString(name='centerPointLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The latitude of the center point of the image."])),
              MetadataString(name='centerPointLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The longitude of the center point of the image."])),
              MetadataString(name='northBoundLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The northernmost latitude found on the image."])),
              MetadataString(name='southBoundLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The southernmost latitude found on the image."])),
              MetadataString(name='eastBoundLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The easternmost longitude found on the image."])),
              MetadataString(name='westBoundLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The westernmost longitude found on the image."]))]),
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
              MetadataString(name='fileLocationURL',value=["https://savage.nps.edu/Savage/"],
                metadata=MetadataString(name='appinfo',value=["The url array for the image file."])),
              MetadataString(name='centerPointLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The latitude of the center point of the image."])),
              MetadataString(name='centerPointLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The longitude of the center point of the image."])),
              MetadataString(name='northBoundLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The northernmost latitude found on the image."])),
              MetadataString(name='southBoundLatitude',value=["N00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The southernmost latitude found on the image."])),
              MetadataString(name='eastBoundLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The easternmost longitude found on the image."])),
              MetadataString(name='westBoundLongitude',value=["W00 0.0"],
                metadata=MetadataString(name='appinfo',value=["The westernmost longitude found on the image."]))])]),
          MetadataSet(name='X3DArchiveModel',
            metadata=MetadataString(name='appinfo',value=["This is a placeholder element which ensures the proper validation of autogenerated SMAL code."]))])]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SavageTerrainMetadataTemplate.py")
