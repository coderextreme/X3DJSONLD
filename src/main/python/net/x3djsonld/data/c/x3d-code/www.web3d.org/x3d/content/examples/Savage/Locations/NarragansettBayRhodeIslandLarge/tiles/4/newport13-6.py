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
    GeoLOD(center=(41.76663080343592,-71.50541124423569,0.0),range=6150.5674,child1Url=['../../tiles/5/newport26-12.x3d'],child2Url=['../../tiles/5/newport26-13.x3d'],child3Url=['../../tiles/5/newport27-12.x3d'],child4Url=['../../tiles/5/newport27-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[43,40,60,64,61,61,67,70,77,79,79,78,69,63,63,55,25,15,9,4,6,7,59,51,56,65,70,72,77,79,81,75,76,67,58,65,45,23,22,23,9,10,9,9,66,62,77,74,75,79,81,83,72,72,69,58,51,60,39,20,19,21,27,20,17,16,78,76,80,82,80,85,84,77,80,80,69,53,45,47,43,30,19,22,26,21,23,19,88,85,86,83,87,88,81,80,81,75,61,53,50,51,44,39,25,21,20,26,24,24,94,89,87,88,92,87,82,82,73,70,70,65,68,62,54,42,28,19,18,23,24,23,96,92,91,93,94,85,76,79,79,82,91,84,86,69,60,46,27,18,15,17,19,20,99,95,95,94,87,81,78,80,81,89,88,82,73,63,53,47,30,17,12,15,13,15,102,99,98,90,84,79,78,80,86,92,93,84,74,63,54,43,39,24,19,11,12,13,106,104,98,90,85,80,80,85,90,92,91,84,77,68,62,57,54,43,21,15,12,11,111,108,99,93,88,83,86,91,92,89,80,77,73,71,67,66,66,56,39,18,18,17,117,109,100,96,90,89,95,94,91,85,81,77,72,71,66,65,61,56,43,19,15,14,119,109,99,98,91,95,99,95,88,83,80,76,67,66,60,58,52,43,34,24,16,15,121,110,104,97,97,105,101,93,87,86,79,68,61,49,52,50,48,35,32,23,15,15,123,112,103,100,105,101,95,95,91,91,93,85,75,69,50,46,51,57,44,19,21,23,125,107,102,104,103,102,95,97,95,98,99,101,86,68,67,68,62,59,57,24,20,20,121,113,102,101,100,100,101,104,100,99,99,92,78,69,75,73,63,52,30,28,22,24,109,102,101,107,111,108,107,105,94,93,91,86,80,77,73,63,49,48,52,36,35,35,108,105,106,112,115,119,109,99,92,89,84,86,85,84,67,65,65,61,71,55,52,49,116,115,110,114,119,118,110,104,94,93,87,87,81,77,83,76,72,71,69,62,57,54,124,120,116,118,111,111,112,107,107,99,92,84,74,72,75,79,81,89,80,71,81,78,127,122,117,118,110,112,111,108,108,100,92,84,75,73,74,77,81,89,81,69,82,79],
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
