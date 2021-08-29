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
    GeoLOD(center=(41.47634988941996,-71.7692354927566,0.0),range=6150.5674,child1Url=['../../tiles/5/newport14-0.x3d'],child2Url=['../../tiles/5/newport14-1.x3d'],child3Url=['../../tiles/5/newport15-0.x3d'],child4Url=['../../tiles/5/newport15-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[19,24,34,42,51,56,60,58,54,45,41,35,31,28,25,30,36,49,59,67,73,74,24,41,44,44,50,58,63,64,58,51,41,37,30,34,35,28,34,49,61,71,75,74,25,35,43,46,53,68,71,70,63,60,51,38,36,40,36,36,35,50,64,66,64,64,42,40,43,46,47,55,67,68,66,56,48,37,38,34,38,37,43,53,62,64,63,65,56,45,43,45,47,52,55,58,55,48,37,37,37,39,40,42,46,53,61,68,68,67,64,53,44,45,47,51,54,54,48,41,42,44,42,44,43,47,48,62,68,66,63,61,63,55,44,44,46,52,52,50,43,47,53,50,46,41,41,41,54,65,66,62,61,59,67,56,49,48,48,53,53,51,51,54,60,56,44,39,41,44,54,64,67,65,65,65,62,56,52,48,50,53,52,47,55,59,56,51,45,49,46,51,54,54,65,74,73,71,61,58,51,46,48,51,48,46,54,52,52,56,63,57,57,61,54,58,66,74,79,79,63,64,56,50,49,52,57,56,64,68,66,65,65,71,63,60,61,67,72,74,78,79,62,59,53,60,63,71,73,77,85,87,83,82,79,76,65,60,59,70,74,71,74,77,66,66,61,63,71,80,85,97,93,99,101,96,84,78,64,61,67,75,74,77,82,83,68,65,62,68,77,80,93,101,107,115,117,101,91,74,64,66,70,72,73,71,79,83,76,69,68,73,80,93,101,105,115,123,120,111,97,88,83,77,76,75,63,58,66,73,91,77,80,84,88,98,109,111,116,116,114,110,102,95,91,84,74,61,46,44,48,47,98,87,85,92,100,104,106,114,115,115,111,110,102,91,78,68,55,44,36,36,30,30,101,99,99,100,106,109,112,115,115,115,115,109,92,76,62,50,40,33,37,34,29,27,104,106,106,112,116,119,123,116,110,114,110,98,78,58,52,44,41,47,40,35,30,26,109,114,113,119,121,127,125,117,116,116,99,83,71,70,54,55,61,47,38,35,32,31,112,112,112,119,119,126,115,114,116,101,83,75,63,57,59,66,61,50,42,32,27,27,112,112,113,119,119,126,116,113,116,99,83,75,63,58,60,65,59,50,43,32,27,27],
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
