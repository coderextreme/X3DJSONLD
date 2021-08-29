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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/5/newport30-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[107,106,106,101,96,89,80,75,75,76,79,69,66,60,58,56,53,50,57,71,78,79,108,103,99,91,89,87,85,78,73,75,74,65,69,67,68,61,52,53,60,71,81,83,97,94,86,84,87,87,85,78,74,72,71,69,71,72,67,70,67,61,60,69,88,91,83,79,79,82,82,88,86,80,73,70,69,70,67,73,77,82,77,73,69,74,90,92,80,85,79,77,82,85,79,72,72,71,77,85,86,77,81,74,75,77,80,81,95,98,80,83,91,94,90,82,73,76,76,74,81,83,86,81,87,80,81,85,81,84,91,94,90,86,96,99,85,76,74,76,78,82,85,86,85,86,79,78,79,81,82,89,89,89,92,96,98,97,84,76,75,79,79,85,92,85,82,88,77,81,82,90,95,95,94,94,93,98,94,86,87,75,77,81,90,101,100,95,88,77,76,77,81,91,94,99,97,97,96,98,90,81,77,79,89,92,99,104,99,96,90,81,75,75,80,84,88,93,98,98,86,90,90,83,79,95,97,101,108,109,100,90,82,81,75,72,78,79,88,89,91,93,89,87,79,79,98,98,107,109,115,107,106,95,93,86,84,72,72,77,83,86,87,87,88,85,83,101,103,105,113,106,108,114,105,105,96,85,73,76,73,83,83,86,83,83,79,82,96,117,112,113,117,106,104,103,103,100,100,95,88,77,81,85,81,88,83,83,88,92,109,117,117,116,110,98,102,97,101,107,99,88,89,90,83,82,84,85,90,90,84,95,112,115,118,118,101,99,99,101,99,100,92,88,93,85,83,83,86,88,88,87,87,100,114,117,116,108,91,98,99,98,97,92,89,89,86,89,83,84,85,87,86,85,92,93,104,113,107,103,92,96,97,100,98,89,87,85,84,82,84,85,84,85,81,81,88,91,107,108,108,97,91,96,97,104,90,86,86,82,82,84,88,94,84,87,86,86,85,92,100,108,107,100,96,92,97,91,88,89,86,84,82,85,96,95,89,84,90,90,86,99,97,104,104,96,94,95,95,89,88,90,87,84,85,84,92,89,90,90,90,90,90,103,94,95,98,96,92,89,86,91,94,91,92,85,84,89,87,84,90,87,92,92,91,96,91,92,94,92,93,89,94,97,97,90,89,82,80,83,84,88,85,87,85,85,91,93,92,91,94,90,91,89,95,99,97,90,89,82,80,84,84,87,85,85,84,84],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
