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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA0-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.64625000072991,-77.6179999829996,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[88,106,101,110,107,103,97,98,97,95,81,75,83,96,90,87,79,82,75,66,66,69,87,92,99,117,113,102,107,80,90,89,90,95,91,85,89,80,76,79,77,70,69,68,76,87,106,104,113,106,103,91,75,78,81,86,93,95,92,85,81,75,68,73,65,67,74,95,96,94,101,105,100,93,98,82,74,85,94,100,98,93,81,77,71,68,63,61,77,88,88,97,91,92,91,92,90,85,75,69,83,81,94,86,77,71,71,69,55,63,78,88,94,91,89,85,85,89,78,82,87,73,76,82,81,87,77,65,65,61,68,66,85,81,90,84,77,90,87,84,82,85,88,82,60,74,76,79,70,69,65,58,61,68,76,79,88,91,72,83,73,78,86,75,82,89,75,58,68,67,67,65,67,67,63,64,71,75,84,87,66,74,75,75,73,66,71,84,79,75,65,53,64,60,61,53,52,50,80,59,86,67,77,71,68,69,74,71,67,82,87,85,67,68,62,60,57,66,66,59,81,78,75,63,66,81,68,59,59,72,72,76,76,71,81,74,66,67,70,67,64,55,93,75,86,85,72,58,76,72,61,62,58,61,69,68,73,69,71,70,52,52,54,47,88,86,92,88,81,67,82,80,72,63,69,55,51,59,47,61,58,65,57,62,61,58,75,84,92,92,91,67,84,70,67,75,56,68,58,65,70,62,51,54,56,65,67,61,69,79,85,94,85,85,79,87,74,71,66,76,77,77,67,53,62,69,69,67,69,72,24,75,86,82,85,83,85,87,80,78,65,87,76,70,57,71,66,67,71,69,68,71,71,78,86,77,79,78,87,85,82,79,79,85,67,61,62,71,67,64,69,70,62,67,56,79,81,80,73,80,89,91,81,84,85,86,66,69,61,70,77,67,61,63,68,68,66,62,74,83,66,80,78,87,88,94,92,88,67,73,63,69,77,64,67,59,65,64,66,54,76,73,69,76,78,85,76,91,89,77,78,71,70,73,75,63,64,65,61,63,67,56,55,72,70,70,68,70,79,87,83,76,63,66,66,69,71,69,66,65,65,65,66,57,53,76,68,70,69,70,78,87,83,78,66,66,64,70,69,69,66,64,65,65],
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
