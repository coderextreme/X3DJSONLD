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
    GeoLOD(center=(41.742440727267926,-71.57136730636591,0.0),range=12301.135,child1Url=['../../tiles/4/newport12-4.x3d'],child2Url=['../../tiles/4/newport12-5.x3d'],child3Url=['../../tiles/4/newport13-4.x3d'],child4Url=['../../tiles/4/newport13-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport6-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[85,84,75,81,78,80,82,74,76,84,82,73,76,70,70,69,69,81,65,51,50,48,91,78,75,75,75,92,84,75,73,74,75,75,72,73,69,69,70,85,58,45,45,46,81,75,75,76,87,87,83,74,73,75,75,75,71,66,66,67,85,82,48,54,48,47,76,76,75,92,94,94,74,75,75,73,72,72,67,70,71,68,80,67,53,63,60,52,75,79,75,82,76,74,72,72,73,72,76,76,83,86,80,71,70,57,65,60,53,44,79,80,76,76,78,78,76,74,74,83,88,94,102,94,80,77,65,77,84,64,48,47,83,79,80,86,93,78,77,78,82,87,106,102,108,100,84,87,76,72,65,59,56,54,80,83,91,106,120,100,88,99,102,91,102,116,106,94,85,82,79,68,79,85,74,66,89,98,113,128,133,126,112,115,109,99,107,103,95,89,87,79,75,70,78,76,53,47,112,106,121,139,154,147,121,104,101,91,91,91,92,101,70,70,59,71,72,61,36,31,114,124,118,138,151,134,115,102,103,84,87,85,96,76,68,71,63,47,40,37,48,37,121,126,129,122,134,126,110,96,90,89,79,84,79,63,60,53,52,39,49,45,64,66,116,120,114,105,105,99,96,90,88,74,67,67,73,55,51,47,48,47,47,64,78,83,116,109,114,108,103,94,89,84,79,69,59,63,86,60,57,55,75,79,71,90,97,94,93,123,130,116,103,109,96,82,73,61,58,86,75,78,80,82,85,91,110,110,101,99,129,102,104,108,114,126,108,74,66,61,79,82,78,78,81,98,91,113,123,116,110,108,154,132,99,88,99,124,86,76,68,75,79,80,83,86,96,92,110,125,128,124,122,117,163,164,132,86,86,86,86,86,86,85,75,78,98,101,113,106,113,131,131,128,129,123,149,129,123,106,86,86,86,86,86,88,94,111,146,132,119,112,129,141,138,140,124,118,142,110,112,109,86,86,86,96,86,86,86,125,145,141,136,141,144,142,140,134,107,104,102,89,86,87,86,100,93,103,102,98,96,101,137,151,155,151,148,146,131,120,122,119,101,89,86,86,86,100,96,103,101,98,97,103,138,151,155,152,148,148,131,119,122,118],
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
