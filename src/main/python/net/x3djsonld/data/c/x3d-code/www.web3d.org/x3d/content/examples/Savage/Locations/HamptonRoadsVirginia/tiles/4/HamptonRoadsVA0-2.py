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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA0-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.64625000072991,-77.7429999860264,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[93,94,97,95,101,92,121,102,92,105,115,121,118,127,124,119,109,105,108,91,78,88,86,84,94,89,85,93,93,108,99,95,102,101,118,111,121,112,112,109,94,90,85,87,93,81,89,79,86,79,91,103,103,92,103,90,108,84,106,108,106,98,88,88,73,76,76,82,98,87,84,76,92,91,100,88,94,83,93,81,85,118,88,94,81,76,80,74,73,78,78,92,92,90,80,90,106,94,83,84,91,80,96,112,96,81,74,76,83,77,89,68,73,65,80,82,76,83,102,100,89,74,87,86,83,109,111,85,85,66,74,78,99,94,68,71,57,79,82,96,84,100,93,85,94,74,90,102,113,98,80,85,76,85,75,78,83,79,77,60,79,71,97,94,85,69,76,75,81,96,102,83,89,80,68,76,88,84,78,75,88,80,61,90,90,85,84,68,73,72,84,98,86,95,81,74,79,71,96,94,80,79,74,78,68,64,81,87,69,64,73,65,67,84,91,89,76,85,76,80,93,87,88,87,80,92,75,60,71,77,76,66,75,68,82,80,89,87,88,89,82,81,88,80,83,86,93,78,82,80,58,64,71,69,74,68,83,75,76,81,87,92,93,93,79,83,73,72,74,83,87,82,67,52,72,77,63,75,81,76,76,89,95,94,93,88,95,88,86,82,77,72,67,64,76,67,52,52,57,59,74,82,76,77,85,76,82,75,94,93,94,87,81,89,82,71,55,52,52,52,52,52,52,72,73,77,76,90,76,69,86,90,96,88,80,82,77,66,53,63,73,77,52,52,52,52,68,81,67,75,71,24,69,80,82,76,79,74,59,63,61,79,70,82,76,74,52,52,70,80,83,60,61,71,80,78,80,71,73,62,71,71,75,86,85,77,82,74,68,52,52,64,75,82,61,56,94,86,85,76,67,74,80,83,81,87,83,68,82,71,68,52,52,68,83,66,75,66,86,83,85,79,63,86,85,81,75,76,74,75,78,60,52,66,52,48,79,73,78,66,82,75,72,72,80,98,80,77,68,66,67,59,52,52,70,76,84,73,69,68,66,67,82,75,73,73,78,95,80,78,68,65,66,56,52,52,72,77,84,72,62,70,63,66],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.989999984839216,-76.99299996786561,0))))])
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
