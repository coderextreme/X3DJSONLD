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
    GeoLOD(center=(41.6560016710928,-71.18466700459715,0.0),range=2150.0764,child1Url=['../../tiles/5/newport26-30.x3d'],child2Url=['../../tiles/5/newport26-31.x3d'],child3Url=['../../tiles/5/newport27-30.x3d'],child4Url=['../../tiles/5/newport27-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64793081331529,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[66,66,65,65,63,65,63,61,61,59,58,57,55,55,55,57,57,57,55,53,53,56,56,65,64,64,64,64,62,61,61,62,63,62,60,59,58,60,61,62,61,59,54,52,53,56,63,63,63,63,64,62,62,63,64,66,67,65,64,64,65,64,66,63,62,56,52,52,52,62,62,63,64,65,65,65,66,65,63,63,70,67,64,64,64,69,67,63,57,53,56,54,63,63,64,64,66,64,66,68,66,63,63,68,69,65,65,70,73,71,65,60,57,57,59,67,67,64,65,66,66,67,69,71,70,69,72,71,71,74,78,78,74,66,62,59,58,59,70,68,66,67,70,68,68,70,71,73,72,72,72,72,72,77,80,76,67,62,61,59,58,73,70,69,70,75,74,70,69,70,73,72,70,70,71,74,74,77,74,68,62,62,60,59,76,74,73,76,77,76,75,70,69,70,70,71,71,71,73,74,76,74,68,62,61,60,59,78,77,76,80,81,80,79,74,70,70,70,71,71,73,74,76,73,73,67,62,61,60,60,80,82,79,81,84,84,82,79,73,71,72,74,75,74,74,75,72,70,66,62,61,59,59,82,84,83,86,88,87,84,83,79,75,74,77,76,74,75,77,74,71,67,63,61,62,58,81,84,87,91,93,92,88,86,82,79,78,78,77,75,77,78,75,73,69,66,62,64,59,80,83,87,91,95,95,93,90,85,83,84,79,77,76,77,78,76,74,71,67,64,63,59,79,81,84,88,91,93,94,92,86,86,85,82,77,77,78,78,76,74,70,66,65,65,59,74,77,81,84,84,86,89,88,85,86,85,82,79,79,79,79,77,74,71,66,63,62,59,68,71,77,79,81,81,81,81,82,84,84,82,80,80,81,80,77,74,71,68,63,59,58,64,67,73,76,77,78,79,77,79,81,82,82,82,82,83,82,78,76,73,70,66,60,59,61,65,68,68,69,69,76,76,78,79,80,81,83,84,86,83,79,76,74,70,68,64,62,59,63,65,67,67,69,73,76,77,78,79,82,84,86,86,82,79,77,75,72,68,63,61,58,61,64,66,68,70,74,75,76,77,80,83,85,86,84,82,80,78,76,73,69,63,59,58,60,62,65,67,70,72,73,75,77,79,83,85,85,84,82,80,77,75,73,71,65,60,59,61,62,64,67,69,72,74,75,76,79,82,84,84,83,81,79,76,73,74,72,67,62,58,61,62,64,66,69,72,74,75,76,79,83,84,84,83,81,79,75,73,74,72,67,63],
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
