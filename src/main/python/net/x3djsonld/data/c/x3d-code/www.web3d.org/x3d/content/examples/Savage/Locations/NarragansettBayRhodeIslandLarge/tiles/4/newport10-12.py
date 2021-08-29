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
    GeoLOD(center=(41.62149034642794,-71.24158699571478,0.0),range=6150.5674,child1Url=['../../tiles/5/newport20-24.x3d'],child2Url=['../../tiles/5/newport20-25.x3d'],child3Url=['../../tiles/5/newport21-24.x3d'],child4Url=['../../tiles/5/newport21-25.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-12.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[68,76,82,86,87,91,83,79,68,49,26,2,0,0,0,0,0,0,0,0,0,0,67,74,75,72,81,86,83,76,65,43,14,0,0,0,0,0,0,0,0,0,0,0,70,65,63,61,74,84,82,70,57,37,11,0,0,0,0,0,0,0,0,0,0,0,61,67,58,59,65,81,80,66,50,32,12,0,0,0,0,0,0,0,0,0,0,0,52,66,62,60,59,71,72,58,45,28,8,0,0,0,0,0,0,0,0,0,0,0,52,64,64,59,49,60,54,50,43,25,7,0,0,0,0,0,0,0,0,0,0,0,54,55,52,47,38,41,39,41,37,22,7,0,0,0,0,0,0,0,0,0,0,0,44,37,35,27,30,28,29,32,33,23,9,0,0,0,0,0,0,0,0,0,0,0,30,18,18,29,40,40,39,40,41,27,13,0,0,0,0,0,0,0,0,0,0,0,11,17,25,35,47,47,50,50,39,28,20,1,0,0,0,0,0,0,0,0,0,0,12,16,29,38,51,50,49,44,40,29,24,6,0,0,0,0,0,0,0,0,0,0,17,26,40,50,42,51,45,42,43,34,29,8,0,0,0,0,0,0,0,0,0,0,12,21,40,47,44,42,43,48,43,34,23,7,0,0,0,0,0,0,0,0,0,0,12,14,25,34,43,45,52,54,44,32,21,5,0,0,0,0,0,0,0,0,0,0,6,7,18,30,39,48,55,52,41,29,19,7,0,0,0,0,0,0,0,0,0,0,8,5,17,29,38,42,43,26,32,29,17,5,0,0,0,0,0,0,0,0,0,0,3,6,3,25,34,32,24,20,26,28,19,7,1,0,0,0,0,0,0,0,0,0,2,0,3,20,32,24,22,18,22,24,18,8,0,1,1,1,2,2,3,3,1,1,0,2,9,10,25,34,26,19,14,16,14,4,0,1,2,4,4,4,0,0,0,1,0,1,1,5,22,33,28,22,15,7,7,2,1,1,1,1,1,2,1,0,1,1,0,0,0,1,15,28,28,23,13,4,2,5,2,1,1,1,1,1,1,1,1,1,0,0,0,1,15,28,28,23,13,4,2,5,2,1,1,1,1,1,1,1,1,1],
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
