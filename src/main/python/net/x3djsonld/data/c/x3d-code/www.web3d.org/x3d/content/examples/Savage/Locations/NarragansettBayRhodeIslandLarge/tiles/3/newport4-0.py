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
    GeoLOD(center=(41.54892011792395,-71.74725013871318,0.0),range=12301.135,child1Url=['../../tiles/4/newport8-0.x3d'],child2Url=['../../tiles/4/newport8-1.x3d'],child3Url=['../../tiles/4/newport9-0.x3d'],child4Url=['../../tiles/4/newport9-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport4-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[110,109,121,116,116,86,65,58,65,38,27,28,50,47,61,46,27,19,31,42,29,27,108,121,129,117,81,64,78,70,54,32,37,52,72,71,74,52,28,22,24,43,30,24,92,109,111,95,77,76,65,58,50,45,47,75,93,94,94,62,45,23,20,39,31,30,110,115,119,103,106,97,83,67,65,58,53,87,113,108,95,72,57,27,30,32,34,37,117,98,104,106,101,105,112,96,80,69,63,101,116,115,87,70,56,33,25,44,47,46,109,113,108,92,94,97,124,107,71,63,63,91,112,106,81,59,40,28,38,33,35,36,109,97,97,102,96,92,102,103,89,75,85,87,107,88,64,39,28,39,43,32,41,38,100,97,97,104,111,103,92,88,78,78,67,57,72,65,49,28,36,57,46,36,40,37,103,107,108,112,113,104,100,89,78,71,71,67,50,43,37,43,57,68,45,43,47,43,123,117,120,120,115,117,104,90,96,91,74,49,47,55,60,49,68,68,52,49,39,41,126,128,120,110,111,113,104,107,100,63,50,57,59,86,73,86,93,70,56,45,58,58,117,128,113,110,108,107,113,94,66,61,67,83,84,117,93,100,96,64,48,52,48,44,127,126,129,111,112,120,95,75,77,86,82,99,126,122,91,104,78,51,46,47,59,61,123,130,121,119,124,113,77,81,92,105,116,135,122,87,92,74,48,47,46,56,35,35,127,125,116,119,132,84,74,102,108,112,130,116,84,85,74,45,46,44,40,45,61,55,143,141,139,107,92,92,107,104,115,122,108,87,62,77,55,60,50,53,40,57,81,88,146,153,138,120,103,107,101,99,87,86,85,69,91,64,55,47,42,47,42,79,123,128,133,111,99,116,125,106,105,107,94,78,76,70,67,60,70,47,38,41,44,92,129,133,89,89,91,107,114,119,115,112,92,74,64,64,72,109,67,54,44,41,57,83,116,113,89,89,116,137,125,117,112,100,83,76,82,92,129,133,112,59,47,54,60,73,81,81,95,99,133,147,136,129,106,90,86,77,89,133,124,98,71,43,43,46,68,74,78,88,99,100,135,148,136,128,106,90,86,78,91,134,122,94,68,43,44,47,66,75,78,88],
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
