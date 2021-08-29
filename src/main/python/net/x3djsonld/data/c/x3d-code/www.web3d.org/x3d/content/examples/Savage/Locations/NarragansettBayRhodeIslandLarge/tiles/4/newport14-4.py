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
    GeoLOD(center=(41.81501095577192,-71.59335266040932,0.0),range=6150.5674,child1Url=['../../tiles/5/newport28-8.x3d'],child2Url=['../../tiles/5/newport28-9.x3d'],child3Url=['../../tiles/5/newport29-8.x3d'],child4Url=['../../tiles/5/newport29-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[86,106,86,86,86,86,86,86,86,86,86,111,111,104,107,109,104,94,93,104,102,98,86,86,86,86,86,86,86,86,86,86,101,115,123,119,117,117,115,103,101,93,105,108,86,86,86,86,86,86,86,86,86,98,108,123,122,127,127,132,120,107,95,94,93,93,86,96,86,86,86,86,86,86,86,100,119,130,124,125,130,135,124,115,116,98,91,93,86,108,103,86,86,86,86,86,86,102,121,121,125,127,129,136,130,126,127,128,111,110,89,112,125,116,109,86,86,86,86,110,120,125,128,138,132,136,135,137,130,127,132,129,115,126,121,111,102,86,86,86,86,99,114,134,141,137,131,126,128,135,132,127,128,125,110,125,120,113,98,94,86,86,86,86,119,137,148,145,131,120,133,143,135,120,110,111,116,120,126,121,101,91,86,86,86,86,106,133,134,132,117,120,135,145,130,108,103,102,127,137,124,114,103,87,86,86,86,86,86,107,122,115,103,108,125,121,110,103,99,102,137,138,127,118,106,91,87,93,86,86,86,104,109,108,100,107,116,100,103,107,104,102,139,133,125,120,111,106,100,88,86,88,86,92,112,106,113,111,113,109,105,104,116,121,139,130,123,117,113,101,87,86,86,86,86,86,87,110,111,112,108,110,114,123,116,116,142,136,138,125,111,98,86,86,86,86,86,86,98,105,108,108,115,126,134,130,121,119,136,144,136,124,115,107,86,86,86,86,86,86,91,110,115,111,125,135,140,142,137,136,145,131,118,109,113,102,86,86,86,86,86,86,96,112,116,116,121,134,141,150,144,139,148,134,119,108,103,101,89,86,86,86,86,86,91,101,107,111,118,126,136,142,136,134,148,147,136,116,107,105,100,86,86,86,86,86,86,96,103,109,113,120,135,131,123,122,150,151,133,121,110,120,113,99,90,86,86,86,86,98,104,107,121,128,129,119,121,121,157,141,128,113,116,118,113,88,86,86,86,86,86,91,89,106,117,125,111,118,124,123,150,140,125,122,114,100,94,86,86,90,86,86,86,86,88,117,111,117,119,118,116,115,150,140,125,124,112,100,92,86,86,90,86,87,86,86,88,118,115,119,119,120,116,115],
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
