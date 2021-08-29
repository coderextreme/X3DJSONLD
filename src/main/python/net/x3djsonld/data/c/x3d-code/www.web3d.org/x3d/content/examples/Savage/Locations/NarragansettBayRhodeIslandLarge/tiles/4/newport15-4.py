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
    GeoLOD(center=(41.86339110810791,-71.59335266040932,0.0),range=6150.5674,child1Url=['../../tiles/5/newport30-8.x3d'],child2Url=['../../tiles/5/newport30-9.x3d'],child3Url=['../../tiles/5/newport31-8.x3d'],child4Url=['../../tiles/5/newport31-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[150,140,125,124,112,100,92,86,86,90,86,87,86,86,88,118,115,119,119,120,116,115,146,134,119,117,104,104,96,101,100,98,86,86,86,86,98,117,112,115,118,115,116,116,143,135,122,109,108,103,105,116,115,112,102,86,86,88,99,109,107,105,115,122,128,126,131,117,118,106,110,118,118,122,120,107,90,86,86,101,103,107,105,105,121,136,134,133,120,113,102,102,109,123,117,117,107,99,86,86,86,89,105,110,111,115,119,138,144,142,114,109,99,98,122,110,112,109,107,100,92,86,98,95,98,104,117,133,126,141,146,148,116,104,102,100,99,109,107,106,106,102,92,96,94,97,98,102,113,117,127,131,149,149,103,101,101,97,99,100,101,107,87,87,87,87,94,95,96,104,105,107,104,105,112,115,100,102,98,101,86,87,87,87,87,87,87,87,87,88,96,101,107,94,92,103,101,104,105,95,92,88,87,87,87,91,93,93,96,95,99,93,100,107,98,92,92,92,92,93,113,111,104,95,87,87,87,87,99,105,109,110,104,101,105,103,92,92,92,92,92,97,126,114,104,93,90,87,86,97,108,110,115,112,108,107,104,102,92,92,92,92,92,94,114,108,103,97,93,99,106,105,102,109,110,110,111,110,110,103,102,94,92,92,92,92,111,101,105,114,118,105,102,103,106,104,108,114,115,115,111,111,110,107,92,92,92,92,137,125,114,107,103,108,107,109,107,110,113,121,123,113,107,112,117,117,98,93,92,92,152,136,102,104,105,95,106,105,108,109,112,121,119,113,111,114,116,111,103,93,100,102,133,112,104,95,102,107,115,118,115,111,119,125,119,105,106,111,111,110,112,107,100,106,119,109,102,104,110,115,122,125,124,120,128,127,118,109,106,108,105,114,108,115,111,114,124,124,103,110,127,124,116,118,126,129,122,123,115,114,105,101,106,110,117,122,119,117,124,113,104,110,121,124,123,117,123,125,121,114,107,109,114,103,111,112,119,121,123,117,114,102,104,111,121,124,123,135,125,126,118,109,106,118,124,136,114,106,121,118,107,105,113,101,105,112,121,124,124,137,126,126,117,110,105,118,125,139,114,108,118,117,105,102],
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
