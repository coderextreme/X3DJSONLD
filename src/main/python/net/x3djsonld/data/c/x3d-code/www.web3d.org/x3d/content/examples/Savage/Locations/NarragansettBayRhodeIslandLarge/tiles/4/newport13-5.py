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
    GeoLOD(center=(41.76663080343592,-71.5493819523225,0.0),range=6150.5674,child1Url=['../../tiles/5/newport26-10.x3d'],child2Url=['../../tiles/5/newport26-11.x3d'],child3Url=['../../tiles/5/newport27-10.x3d'],child4Url=['../../tiles/5/newport27-11.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[79,81,82,85,92,81,71,74,68,65,70,59,66,63,60,43,33,32,43,49,42,43,77,78,86,95,90,68,71,67,57,56,56,53,54,53,44,40,46,38,40,39,57,59,77,73,79,82,61,54,68,67,56,53,50,49,43,43,40,45,46,56,50,60,69,66,69,62,70,60,71,56,63,60,53,51,45,45,45,44,41,39,45,58,62,70,78,78,64,58,59,65,74,63,53,51,50,48,48,50,51,54,55,55,52,65,72,78,90,88,59,61,60,70,85,77,64,55,54,54,53,61,71,74,74,69,67,75,87,93,95,94,58,62,66,79,80,67,65,67,64,64,65,75,79,78,82,81,83,88,98,101,99,96,58,65,81,79,73,75,83,79,81,72,76,83,84,82,88,96,105,106,107,105,100,99,66,83,86,79,81,77,77,78,80,78,89,88,85,87,97,112,115,114,112,106,103,102,81,86,81,85,79,77,77,78,81,87,96,88,89,91,110,120,121,120,115,110,108,106,72,76,82,82,79,78,77,78,82,98,98,95,93,102,117,123,125,124,117,116,112,111,73,77,81,85,80,80,80,81,92,103,100,97,101,116,123,126,129,122,123,118,119,117,74,76,78,77,83,90,88,90,100,108,96,97,112,124,126,129,126,126,126,127,119,119,76,75,78,78,89,98,104,101,111,113,104,101,114,124,131,134,130,124,124,130,127,121,71,75,87,105,117,111,103,105,109,109,110,106,110,125,136,136,133,132,137,135,128,123,87,87,106,133,139,136,125,113,114,111,110,111,119,133,140,136,138,140,143,139,130,125,94,102,120,143,149,142,132,123,124,119,120,125,131,137,143,141,145,142,137,131,126,121,89,106,130,145,149,147,140,137,128,133,136,139,145,145,140,142,145,137,136,126,118,109,86,96,115,133,143,146,141,141,142,148,145,145,146,144,145,144,134,130,125,115,108,108,93,98,101,115,135,143,148,145,151,152,152,147,146,145,144,135,125,126,118,117,121,116,97,99,112,132,145,150,156,156,158,154,152,152,150,150,141,141,133,125,120,128,126,124,98,100,114,133,145,150,157,157,159,154,152,151,150,149,141,139,133,125,121,127,129,127],
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
