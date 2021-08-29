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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoLOD(center=(41.76663080343592,-71.63732336849614,0.0),range=6150.5674,child1Url=['../../tiles/5/newport26-6.x3d'],child2Url=['../../tiles/5/newport26-7.x3d'],child3Url=['../../tiles/5/newport27-6.x3d'],child4Url=['../../tiles/5/newport27-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[99,100,96,95,94,92,81,82,86,90,102,118,112,105,94,95,95,102,106,108,112,114,110,104,109,105,98,98,90,81,88,89,95,104,113,104,101,101,101,105,111,110,116,117,158,143,130,123,121,103,84,88,100,103,101,98,99,97,94,96,103,109,108,109,115,118,174,174,152,142,126,103,93,99,111,118,111,105,102,101,95,98,95,97,109,109,113,112,170,164,148,139,122,102,94,98,111,118,124,117,108,106,101,92,96,98,106,109,115,115,162,161,148,133,123,118,113,104,107,113,128,132,126,112,100,99,97,97,103,107,114,116,152,157,157,160,141,131,116,103,115,122,123,129,133,122,107,104,100,103,100,101,104,108,137,146,157,148,130,116,108,104,118,131,133,140,131,124,127,128,118,106,97,97,95,96,130,133,135,132,139,134,120,119,116,142,149,144,137,129,139,144,140,133,115,104,96,98,129,131,130,130,127,128,119,113,124,150,159,152,138,135,142,148,149,147,136,128,121,119,125,124,124,122,123,117,115,114,115,142,157,149,146,147,145,153,155,154,151,145,136,137,123,126,120,120,114,111,108,112,115,130,150,137,136,149,154,155,160,159,160,156,150,152,121,123,122,119,111,106,105,106,111,116,130,123,121,143,140,155,163,163,165,164,158,157,120,117,114,112,112,112,105,104,104,106,111,110,109,123,130,149,157,165,172,167,159,159,116,123,122,115,118,118,113,102,101,102,107,106,105,113,126,136,154,161,168,166,160,159,124,126,121,118,119,119,117,116,108,102,102,101,105,116,127,134,143,152,162,155,154,154,152,138,127,125,124,121,120,116,110,103,103,102,105,111,123,133,130,138,147,157,155,155,159,143,150,143,142,132,127,118,109,106,106,102,107,113,123,122,125,125,122,140,146,142,157,154,157,165,161,154,140,127,117,118,110,101,108,115,112,114,113,102,99,109,127,127,142,151,158,168,171,164,150,137,129,121,111,106,102,87,100,97,96,86,86,86,102,105,136,143,141,157,165,161,158,147,134,121,118,114,109,95,85,85,85,86,86,86,86,86,136,142,140,156,164,160,157,148,134,122,118,114,108,95,85,85,85,86,86,86,86,86],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
