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
    GeoLOD(center=(41.672143386647825,-71.18466700459715,0.0),range=2150.0764,child1Url=['../../tiles/5/newport28-30.x3d'],child2Url=['../../tiles/5/newport28-31.x3d'],child3Url=['../../tiles/5/newport29-30.x3d'],child4Url=['../../tiles/5/newport29-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport14-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[58,61,62,64,66,69,72,74,75,76,79,83,84,84,83,81,79,75,73,74,72,67,63,57,59,62,63,66,70,72,74,74,76,81,84,84,83,82,81,78,73,70,70,69,67,66,55,59,61,62,65,70,71,72,74,77,83,84,83,82,81,80,77,71,67,64,64,65,66,51,56,59,61,62,65,68,70,73,78,84,84,83,82,81,77,74,69,65,62,62,62,65,51,57,60,61,62,61,63,67,71,82,85,83,82,81,80,76,73,68,64,61,61,61,64,53,59,61,61,60,59,59,65,70,82,83,82,80,79,77,74,72,69,65,62,61,61,61,53,59,60,60,59,58,59,65,70,77,78,79,77,76,74,71,70,69,66,64,63,62,61,51,59,60,61,58,57,58,64,67,71,73,74,74,74,71,70,69,69,67,65,67,64,61,45,51,56,56,54,54,57,61,63,65,69,71,72,71,69,68,67,67,69,65,70,66,60,37,43,47,49,50,50,53,56,58,61,64,67,70,70,68,67,66,65,63,64,68,62,57,27,33,38,40,42,45,48,52,56,59,63,66,68,68,69,68,66,65,62,62,63,59,57,18,22,27,31,36,42,46,50,55,60,63,67,68,67,67,67,67,65,61,61,59,58,57,12,15,18,24,32,39,44,48,54,59,64,68,69,68,67,66,67,65,61,60,59,56,56,10,12,16,21,27,35,41,47,53,59,63,67,69,69,67,66,65,62,61,60,58,56,56,8,10,12,15,20,28,38,45,53,58,63,67,69,69,68,66,64,61,59,58,56,56,56,5,7,9,12,15,23,34,43,52,58,63,67,69,70,69,67,65,61,58,57,56,55,55,4,5,8,10,13,21,33,41,49,58,63,67,70,72,71,69,67,63,59,57,56,55,55,3,5,7,9,12,18,30,40,46,58,63,67,70,73,75,72,70,66,63,59,56,55,54,2,5,6,8,10,14,27,38,42,56,62,66,69,72,75,75,72,70,68,61,56,55,54,2,4,6,7,9,12,24,34,40,49,58,63,67,70,74,76,74,72,69,64,60,56,54,2,4,5,7,9,11,14,23,31,46,54,59,63,67,72,76,76,75,72,67,64,60,55,1,3,5,7,9,10,11,16,26,39,47,54,58,63,69,74,77,78,76,71,61,58,55,3,4,5,8,9,10,11,15,20,28,41,48,52,59,65,70,74,74,72,72,62,57,55,2,4,5,7,9,10,11,15,19,27,38,46,51,58,65,68,73,73,71,70,61,57,55],
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
