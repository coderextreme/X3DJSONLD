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
    GeoLOD(center=(41.573110194091946,-71.63732336849614,0.0),range=6150.5674,child1Url=['../../tiles/5/newport18-6.x3d'],child2Url=['../../tiles/5/newport18-7.x3d'],child3Url=['../../tiles/5/newport19-6.x3d'],child4Url=['../../tiles/5/newport19-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[126,122,129,137,138,131,113,92,83,75,86,104,101,99,95,93,89,82,83,98,117,117,126,129,131,136,140,126,111,84,84,79,90,104,112,113,109,99,101,95,88,96,112,115,135,133,130,128,122,103,91,86,80,82,91,111,113,118,113,107,104,101,94,102,121,125,137,135,126,123,111,108,92,87,88,92,97,111,117,118,117,114,108,104,102,113,127,129,136,130,127,117,102,103,92,88,99,100,109,109,123,127,129,125,121,116,116,119,132,133,129,125,116,104,101,96,95,91,97,108,110,114,123,135,136,131,124,121,122,126,130,128,124,115,101,97,97,96,93,94,100,107,115,122,133,141,137,132,129,128,121,124,121,118,128,117,99,93,96,98,97,97,98,106,120,133,143,148,143,135,128,123,121,116,114,115,147,129,115,102,94,99,99,98,106,105,118,137,154,156,147,136,129,122,116,112,112,112,145,130,121,123,110,100,100,96,99,113,126,145,157,157,147,139,131,124,114,104,102,101,139,125,123,107,102,101,98,102,101,108,132,153,159,163,153,148,139,127,116,104,99,99,143,138,125,121,111,102,101,101,108,116,134,156,159,165,162,147,140,127,114,105,105,105,151,143,136,126,116,111,105,103,110,118,138,159,161,162,162,149,135,125,117,109,107,107,143,140,139,132,118,114,103,102,108,111,139,157,167,166,156,144,136,129,120,113,108,108,140,142,139,146,148,125,106,98,104,106,132,157,173,168,165,154,143,134,128,120,116,115,145,146,150,148,150,135,128,107,101,106,122,152,175,177,163,160,149,139,135,124,113,113,146,150,157,158,152,138,127,122,105,104,120,149,164,171,160,159,155,147,134,121,114,113,147,158,165,163,145,141,129,119,105,104,113,134,159,165,169,165,170,166,157,139,122,122,146,162,170,165,154,140,131,119,116,110,110,117,141,158,172,173,172,174,169,155,132,128,149,171,174,171,162,155,140,133,121,116,116,125,123,149,167,174,170,170,167,159,138,129,150,169,176,172,171,160,145,139,143,134,128,130,117,120,143,156,157,153,151,149,137,134,151,170,177,173,171,159,145,140,142,138,130,130,115,117,143,154,156,151,149,147,136,134],
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
