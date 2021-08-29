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
    GeoLOD(center=(41.62149034642794,-71.50541124423569,0.0),range=6150.5674,child1Url=['../../tiles/5/newport20-12.x3d'],child2Url=['../../tiles/5/newport20-13.x3d'],child3Url=['../../tiles/5/newport21-12.x3d'],child4Url=['../../tiles/5/newport21-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[73,76,86,86,87,79,75,70,69,66,61,51,42,39,36,28,25,25,31,32,32,30,79,88,96,98,94,85,79,80,82,78,67,55,43,41,39,30,24,25,31,28,27,24,82,92,98,96,90,90,81,80,80,74,62,50,39,33,36,33,29,26,25,22,20,20,83,93,103,100,97,88,84,78,76,69,60,47,40,28,29,32,29,28,25,21,24,21,95,100,97,103,105,99,92,84,72,65,58,50,38,35,23,27,26,27,26,27,17,18,106,105,101,103,105,100,92,81,74,62,53,44,38,35,33,25,20,19,23,23,22,20,103,103,102,99,99,96,85,75,64,53,48,42,38,28,29,24,20,23,23,26,21,19,104,104,105,104,98,95,89,80,64,53,49,38,37,37,25,23,18,21,26,26,21,21,107,105,105,103,101,96,89,79,67,59,53,45,43,38,31,29,20,24,24,25,21,21,102,102,100,101,101,95,83,75,71,64,50,47,40,36,33,23,21,16,18,23,25,25,103,100,100,102,97,90,83,79,71,63,50,44,42,43,39,24,19,16,16,15,25,24,105,104,104,97,88,87,86,85,81,65,52,48,49,52,48,32,25,15,17,19,22,26,109,114,109,94,80,81,83,87,79,71,57,50,56,63,52,35,24,21,23,19,23,25,104,105,95,76,74,74,78,73,72,68,59,57,59,57,49,41,33,30,21,22,24,22,99,91,84,80,80,76,75,75,72,67,64,70,70,61,50,43,41,29,18,16,27,26,92,91,92,92,87,85,87,83,72,66,70,77,75,60,50,44,37,34,28,17,29,31,83,84,91,90,91,85,85,86,74,70,70,71,66,55,45,39,34,31,31,25,15,19,82,82,80,86,85,84,81,78,71,70,70,68,60,49,44,38,35,35,33,27,23,18,86,84,86,80,83,80,76,71,67,65,62,65,56,52,46,42,38,34,31,27,25,25,88,88,84,82,78,75,68,63,61,53,49,52,51,44,45,47,47,38,39,34,25,23,86,83,82,75,66,62,62,55,54,60,56,50,46,57,58,54,51,51,47,30,24,23,86,83,81,74,66,61,59,55,55,60,56,51,49,58,58,56,52,53,46,30,24,22],
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
