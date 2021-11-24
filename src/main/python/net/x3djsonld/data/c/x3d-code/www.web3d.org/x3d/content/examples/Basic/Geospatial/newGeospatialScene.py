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
    meta(content='newGeospatialScene.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='23 May 2000',name='created'),
    meta(content='14 March 2021',name='modified'),
    meta(content='Sample default scene which shows syntax and provides default relationships among Geospatial nodes.',name='description'),
    meta(content='Empty nodes are provided as informational exampls and fail various diagnostic tests',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Geospatial/newGeospatialScene.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ExternProtoDeclare statements for Geospatial nodes are no longer needed for backwards compatibility for VRML 97, since X3dToVrml97.xsl now handles that task. 
    #  This scene shows example Geospatial node relationships in a scene graph. 
    children=[
    WorldInfo(info=["WorldInfo contains generic information or metadata about a model, not about the georeferenced information."],title='newGeospatialScene.x3d'),
    GeoMetadata(url=["https://exampleResource.com/ExternalMetadataDescription.x3d"],
      #  original GeoMetadata summary='"title" "example title" "description" "example description"' 
      metadata=MetadataSet(name='GeoMetadata.summary',reference='https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-CD/Part01/components/geospatial.html#GeoMetadata',
        value=[
        MetadataString(name='title',value=['TODO']),
        MetadataString(name='description',value=['TODO']),
        MetadataString(name='coordinateSystem',value=['TODO']),
        MetadataString(name='horizontalDatum',value=['TODO']),
        MetadataString(name='verticalDatum',value=['TODO']),
        MetadataString(name='ellipsoid',value=['TODO']),
        MetadataString(name='extent',value=['0']),
        MetadataFloat(name='resolution',value=[0]),
        MetadataString(name='originator',value=['TODO']),
        MetadataString(name='copyright',value=['TODO']),
        MetadataString(name='date',value=['TODO']),
        MetadataString(name='metadataFormat',value=['TODO']),
        MetadataString(name='dataUrl',value=['TODO']),
        MetadataString(name='dataFormat',value=['TODO'])])),
    GeoViewpoint(
      geoOrigin=GeoOrigin(DEF='DefaultGeoOrigin')),
    #  GeoInline replaced by Inline 
    Inline(DEF='GeoInlineReplacedByInline'),
    GeoLocation(
      geoOrigin=GeoOrigin(USE='DefaultGeoOrigin')),
    GeoLOD(center=(10,10,1),child1Url=["https://b"],child2Url=["https://c"],child3Url=["https://d"],child4Url=["https://e"],range=1000,rootUrl=["https://a"],
      rootNode=[
      GeoOrigin(USE='DefaultGeoOrigin'),
      #  Nodes loaded via the 'rootUrl' field appear under 'rootNode' for current GeoLOD level. 
      #  Defining both 'rootUrl' and 'rootNode' is erroneous, use either one or the other. 
      #  rootNode nodes are the default geometry to be shown at this level of detail 
      WorldInfo(),
      Shape(),]),
    Shape(DEF='ExampleGeoSnippet1',
      geometry=GeoElevationGrid(DEF='EmptyGeoElevationGrid',height=[0,0],
        geoOrigin=GeoOrigin(USE='DefaultGeoOrigin'),
        color=Color(),
        normal=Normal(),
        texCoord=TextureCoordinate(),)),
    Shape(DEF='ExampleGeoSnippet2',
      geometry=IndexedFaceSet(
        coord=GeoCoordinate(
          geoOrigin=GeoOrigin(USE='DefaultGeoOrigin'))))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for newGeospatialScene.py")
