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
    GeoLOD(center=(41.62149034642794,-71.59335266040932,0.0),range=6150.5674,child1Url=['../../tiles/5/newport20-8.x3d'],child2Url=['../../tiles/5/newport20-9.x3d'],child3Url=['../../tiles/5/newport21-8.x3d'],child4Url=['../../tiles/5/newport21-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[134,118,129,128,133,138,131,131,140,135,123,122,108,101,96,106,111,103,82,71,75,75,120,121,118,121,126,143,139,141,145,143,127,113,106,105,107,108,104,93,85,72,62,62,120,117,118,119,132,140,146,144,145,136,125,122,113,112,105,105,99,90,71,68,68,68,123,119,119,118,126,142,149,149,150,142,127,119,120,116,115,104,93,81,68,70,71,75,118,114,110,118,128,139,146,152,155,144,137,123,119,115,98,85,81,73,77,76,81,82,121,123,116,118,126,135,146,149,147,134,124,116,110,99,90,82,77,76,76,80,89,91,121,119,122,122,126,132,137,143,138,129,113,104,88,85,81,75,69,71,77,85,99,102,118,117,120,123,128,126,128,130,133,125,117,88,83,74,76,73,71,77,80,93,113,118,109,115,118,121,124,116,122,125,124,110,107,94,88,82,74,74,78,86,92,108,125,128,106,117,115,114,112,118,114,127,118,103,97,89,87,82,76,80,84,94,104,122,133,133,107,108,111,117,118,110,112,117,125,106,95,85,79,75,79,82,95,108,121,125,130,134,108,117,120,124,119,119,116,118,113,108,102,86,83,81,86,89,88,103,117,123,125,122,104,109,118,117,114,119,118,117,118,116,103,89,86,87,91,93,96,92,95,108,118,119,96,108,113,111,118,116,121,123,123,114,101,96,92,94,91,89,89,90,94,107,114,117,95,110,119,117,119,113,116,118,107,106,109,106,97,107,100,95,92,101,128,128,125,127,104,113,114,121,115,109,103,103,99,104,105,114,120,124,110,107,117,140,152,148,142,137,101,110,114,117,107,101,97,90,93,96,103,112,116,108,104,105,116,138,145,154,152,150,93,102,111,108,103,100,94,92,90,90,97,97,100,102,101,101,106,125,135,138,142,143,88,100,107,105,98,94,88,92,89,91,93,95,95,104,106,106,104,114,112,123,135,135,89,104,105,101,88,95,87,87,87,91,97,93,96,94,98,102,97,90,103,114,127,130,91,100,98,89,91,85,82,89,93,97,95,90,89,90,92,96,95,81,91,103,119,123,92,99,97,90,90,84,82,90,93,97,95,90,89,90,91,95,94,81,89,102,119,123],
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
