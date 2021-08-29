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
    GeoLOD(center=(41.669870498763935,-71.59335266040932,0.0),range=6150.5674,child1Url=['../../tiles/5/newport22-8.x3d'],child2Url=['../../tiles/5/newport22-9.x3d'],child3Url=['../../tiles/5/newport23-8.x3d'],child4Url=['../../tiles/5/newport23-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[92,99,97,90,90,84,82,90,93,97,95,90,89,90,91,95,94,81,89,102,119,123,80,81,86,82,81,83,83,98,103,100,91,88,92,93,90,86,82,80,81,91,114,116,75,90,88,80,82,85,87,99,100,98,90,87,94,96,89,79,79,82,89,89,95,94,75,90,87,80,81,81,83,95,100,101,89,88,96,87,78,78,82,82,84,98,99,95,76,75,82,82,78,80,84,91,96,91,83,89,80,78,80,82,83,81,83,84,94,97,78,76,76,77,79,83,86,86,87,78,81,79,79,81,83,86,91,97,99,98,88,90,82,76,77,80,79,78,78,78,78,78,78,78,79,79,84,94,100,101,104,104,96,100,81,75,81,90,92,83,79,81,82,81,80,81,82,86,86,85,83,86,93,103,102,103,78,78,92,98,95,88,84,96,101,99,96,87,93,97,93,98,89,91,87,90,93,95,77,92,106,111,106,90,81,83,87,88,96,87,79,76,86,91,102,100,102,96,93,93,86,113,118,118,102,88,78,78,81,79,76,76,76,76,82,88,98,104,105,103,98,96,108,124,122,115,101,90,82,78,78,78,77,76,76,78,79,82,99,99,99,99,102,103,117,120,115,107,92,91,82,78,77,77,77,75,76,77,77,79,96,100,96,98,98,99,113,105,107,92,82,80,79,77,77,76,76,76,75,75,75,77,80,94,99,100,100,100,84,89,83,80,78,78,77,77,75,75,76,76,75,75,75,75,78,93,94,96,99,100,81,80,80,79,78,75,76,76,75,75,75,75,75,75,75,75,76,79,89,96,98,99,77,79,79,78,77,77,76,77,76,75,75,75,75,75,75,75,75,80,90,93,94,94,75,76,76,75,78,78,78,78,77,76,75,75,75,75,75,75,75,81,86,90,94,95,81,79,79,76,75,80,78,78,77,77,76,77,75,75,75,75,75,78,84,92,91,90,86,82,88,79,75,75,79,78,78,77,78,81,81,74,74,74,75,82,87,86,82,83,85,87,83,78,75,75,79,78,78,78,78,90,87,74,74,74,75,80,80,75,72,73,84,87,82,78,75,75,77,78,78,78,79,90,87,75,74,74,75,79,78,75,72,72],
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
