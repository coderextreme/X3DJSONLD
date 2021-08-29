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
    GeoLOD(center=(41.573110194091946,-71.59335266040932,0.0),range=6150.5674,child1Url=['../../tiles/5/newport18-8.x3d'],child2Url=['../../tiles/5/newport18-9.x3d'],child3Url=['../../tiles/5/newport19-8.x3d'],child4Url=['../../tiles/5/newport19-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[117,118,109,99,95,99,109,113,107,93,77,63,55,47,49,60,52,47,46,43,45,48,115,120,114,107,103,110,114,109,100,86,72,63,54,48,51,51,55,51,53,45,51,50,125,126,117,106,105,111,109,108,92,74,66,60,54,54,51,54,52,64,67,61,50,51,129,129,119,110,110,110,111,94,83,70,67,62,58,58,54,55,61,77,76,72,57,55,133,127,114,114,115,108,101,86,76,77,75,73,75,71,67,51,66,77,79,60,53,54,128,121,117,116,110,101,90,81,76,78,81,82,80,80,61,57,66,71,66,54,55,57,118,117,122,114,102,94,85,77,73,81,87,87,83,75,60,59,55,60,54,59,63,65,115,116,117,109,101,89,84,78,83,86,91,89,88,73,63,57,60,54,61,63,69,69,112,112,113,107,97,90,83,85,90,90,92,91,96,103,98,83,74,73,78,72,69,71,101,101,100,100,97,88,89,98,100,99,100,101,106,115,113,100,85,79,83,74,72,73,99,100,105,104,94,89,99,112,117,113,108,108,111,119,114,95,76,82,82,78,68,68,105,111,112,108,99,97,112,121,126,123,121,117,109,107,100,82,78,76,83,82,75,75,107,108,115,108,101,106,118,131,132,128,130,117,101,91,85,81,73,66,74,72,73,74,108,106,102,99,103,118,129,140,133,142,132,102,90,89,96,77,75,73,77,71,63,61,115,107,103,102,100,120,137,146,144,140,114,93,84,96,91,87,84,81,80,74,67,67,113,111,102,99,103,116,134,144,144,130,102,90,91,94,98,96,88,88,77,71,67,66,113,113,107,105,112,119,137,141,131,107,101,98,98,101,103,96,87,80,84,80,71,69,122,121,121,122,121,125,131,124,116,108,109,109,114,116,110,102,91,86,95,89,76,71,128,121,127,125,126,120,117,113,111,114,114,113,118,111,101,98,86,95,96,93,73,65,129,125,125,126,133,129,117,113,116,114,115,119,117,109,95,86,96,100,96,91,71,69,134,119,129,129,134,138,130,131,138,133,123,122,108,100,96,106,112,103,85,70,75,75,134,118,129,128,133,138,131,131,140,135,123,122,108,101,96,106,111,103,82,71,75,75],
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
