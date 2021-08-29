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
    GeoLOD(center=(41.599505666650224,-71.27344644014977,0.0),range=8600.306,child1Url=['../../tiles/3/newport4-4.x3d'],child2Url=['../../tiles/3/newport4-5.x3d'],child3Url=['../../tiles/3/newport5-4.x3d'],child4Url=['../../tiles/3/newport5-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport2-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=0.0029348573,zDimension=23,zSpacing=0.0029348573,height=[0,0,0,4,8,27,44,40,28,32,32,42,48,62,84,82,79,75,64,54,49,47,47,0,0,0,0,8,23,28,11,40,39,44,45,49,57,74,81,84,72,68,58,53,46,46,0,0,0,0,0,0,5,25,51,52,56,62,56,57,68,89,86,86,79,63,51,42,41,0,0,0,0,0,0,0,13,47,56,57,68,62,66,78,94,89,86,77,65,52,37,36,0,0,0,0,0,0,0,1,45,56,53,54,68,71,84,91,80,77,67,61,49,27,26,0,0,3,0,0,0,0,0,28,48,43,43,55,63,78,84,88,88,75,64,37,6,5,0,0,0,0,0,0,0,3,23,59,55,46,63,65,72,79,83,87,77,62,23,0,0,0,0,0,0,0,0,0,4,26,41,42,40,54,70,64,57,79,82,71,51,18,0,0,0,0,0,0,0,0,0,0,3,13,26,36,48,54,67,57,65,80,66,44,17,0,0,0,0,0,0,0,0,0,0,0,10,21,37,47,49,67,62,52,60,52,41,12,0,0,0,0,0,0,0,0,0,0,0,7,23,35,53,58,52,47,37,37,39,35,9,0,0,0,0,0,0,0,0,0,0,0,0,17,40,42,43,28,24,30,34,32,37,15,0,0,15,0,0,0,0,0,0,0,0,0,1,25,21,17,15,28,47,47,49,37,22,0,0,25,0,0,0,0,0,0,0,0,0,0,13,10,12,19,36,51,51,46,37,27,5,3,19,0,0,0,0,0,0,0,0,0,0,6,13,13,28,49,43,40,43,41,32,7,6,20,0,0,0,0,0,0,0,0,0,0,0,12,14,19,35,42,53,50,42,26,3,2,19,0,0,0,0,0,0,0,0,0,0,7,17,8,10,25,39,50,53,39,22,6,6,10,0,0,0,0,0,0,0,0,0,0,9,17,10,6,22,37,35,26,31,21,6,5,0,0,0,0,0,0,0,0,0,0,0,6,11,5,4,15,31,26,26,25,22,7,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,6,26,31,19,16,17,4,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,21,32,24,11,7,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,25,22,10,2,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,25,22,10,2,4,4],
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
