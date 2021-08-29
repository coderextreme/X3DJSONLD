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
    GeoLOD(center=(41.543009662207645,-71.26537558237226,0.0),range=2150.0764,child1Url=['../../tiles/5/newport12-20.x3d'],child2Url=['../../tiles/5/newport12-21.x3d'],child3Url=['../../tiles/5/newport13-20.x3d'],child4Url=['../../tiles/5/newport13-21.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport6-10.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[59,54,60,65,68,69,70,70,69,68,68,67,67,69,66,65,64,63,62,63,62,62,63,63,63,62,67,69,68,71,72,71,73,73,71,70,70,68,64,64,67,69,68,65,62,63,62,62,59,64,66,66,71,72,75,76,77,76,73,72,69,72,72,70,69,68,65,64,64,62,62,62,62,66,65,67,69,73,75,75,79,79,79,77,77,76,75,73,74,71,71,66,63,63,62,62,60,63,67,67,70,69,76,80,82,80,82,83,80,78,79,77,74,71,69,66,65,64,63,62,58,61,66,68,72,74,79,83,83,83,85,85,86,84,82,77,75,72,67,68,66,65,66,65,56,60,65,73,73,77,79,83,82,84,85,87,86,84,81,79,76,73,72,69,68,66,65,64,58,64,63,69,70,74,76,79,82,83,85,85,88,90,87,82,77,74,72,73,68,64,64,65,59,61,63,65,70,72,74,77,82,82,85,86,90,91,86,83,79,78,72,71,68,67,65,67,53,57,63,66,67,67,73,77,78,81,82,85,85,86,85,86,84,80,77,73,72,70,68,66,55,54,58,64,63,69,70,73,75,80,83,84,86,87,86,85,84,81,79,75,71,69,69,68,54,54,58,61,66,70,70,70,70,76,80,84,89,85,86,84,85,84,79,76,74,71,70,69,55,59,54,58,64,66,69,72,71,76,82,81,83,82,86,88,85,84,82,78,76,72,71,71,52,51,56,59,66,69,69,74,74,75,77,81,82,85,85,87,88,83,82,79,77,74,71,71,54,56,57,57,61,71,70,69,73,75,78,81,82,82,85,87,86,85,82,82,79,75,71,70,54,56,57,60,63,64,70,73,74,75,78,80,82,83,84,85,87,85,83,83,79,78,73,73,57,56,58,60,65,65,71,71,75,76,79,79,83,82,84,91,90,87,85,82,82,77,75,75,58,57,59,63,65,66,69,74,76,80,77,81,85,81,81,85,88,90,90,84,79,80,76,76,60,61,58,63,65,69,69,75,81,81,79,81,83,80,80,84,90,96,88,84,78,78,77,76,64,61,65,63,66,70,72,74,77,79,88,85,84,79,81,91,88,86,87,85,83,78,74,75,57,59,61,63,66,71,74,74,75,80,85,84,81,79,81,85,86,88,86,86,83,80,77,76,56,57,59,63,66,68,68,76,83,84,83,80,78,80,81,86,82,83,85,88,83,81,77,76,56,58,61,60,65,67,70,75,76,76,78,78,80,82,82,85,85,86,83,82,80,82,80,78,56,58,59,60,65,67,70,74,75,76,78,77,79,81,81,84,86,85,83,81,79,83,80,79],
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
