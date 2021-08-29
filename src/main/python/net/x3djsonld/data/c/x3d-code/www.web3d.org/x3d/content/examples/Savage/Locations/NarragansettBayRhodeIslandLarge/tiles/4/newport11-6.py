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
    GeoLOD(center=(41.669870498763935,-71.50541124423569,0.0),range=6150.5674,child1Url=['../../tiles/5/newport22-12.x3d'],child2Url=['../../tiles/5/newport22-13.x3d'],child3Url=['../../tiles/5/newport23-12.x3d'],child4Url=['../../tiles/5/newport23-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[86,83,81,74,66,61,59,55,55,60,56,51,49,58,58,56,52,53,46,30,24,22,85,78,73,69,62,59,63,67,69,68,63,63,62,58,57,58,50,46,34,29,23,23,80,75,72,67,69,71,77,79,77,72,63,63,62,58,55,48,41,35,32,31,32,32,76,76,73,75,81,81,81,77,75,74,72,65,64,61,56,45,38,36,32,34,30,31,76,72,72,78,87,88,76,71,76,73,64,66,65,51,48,45,40,34,36,36,38,39,74,75,78,81,89,89,80,73,71,68,64,64,65,61,50,45,43,37,35,41,45,45,74,79,81,82,85,88,80,78,72,67,66,64,65,58,49,49,46,49,50,58,60,59,77,77,78,81,82,84,76,72,70,69,68,66,64,63,62,55,58,65,68,69,68,66,78,79,81,83,85,81,80,75,66,66,66,67,67,66,63,65,65,64,70,69,66,64,81,81,87,86,87,81,77,75,68,66,65,67,66,67,64,64,65,60,62,59,55,56,83,86,96,99,87,81,84,72,69,66,65,64,66,69,77,72,67,64,59,56,54,53,88,92,101,97,92,83,77,75,70,66,67,70,75,76,76,76,70,62,56,53,49,49,86,97,104,108,93,85,85,84,73,73,79,77,79,81,76,70,63,61,56,46,47,48,93,93,104,109,105,96,88,78,78,79,82,82,84,84,80,74,73,65,61,50,50,50,88,87,101,114,104,97,87,82,79,81,82,82,80,79,79,77,76,72,64,60,59,57,82,80,90,100,98,88,84,79,78,78,79,77,76,74,74,70,68,66,64,59,53,53,82,78,79,79,81,83,80,78,77,76,76,74,72,71,70,72,72,70,66,59,53,50,78,80,67,75,82,81,82,85,85,79,79,76,75,77,76,77,81,84,86,76,58,56,77,60,64,70,79,90,91,88,88,80,74,75,80,80,83,85,94,95,81,71,63,59,57,57,66,77,82,89,91,84,77,75,72,74,81,88,98,105,106,88,82,72,66,61,48,54,62,81,86,95,92,79,79,78,74,73,83,98,105,108,109,95,83,85,71,65,48,55,61,81,86,94,92,79,79,78,76,74,82,97,104,109,109,95,84,86,71,65],
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
