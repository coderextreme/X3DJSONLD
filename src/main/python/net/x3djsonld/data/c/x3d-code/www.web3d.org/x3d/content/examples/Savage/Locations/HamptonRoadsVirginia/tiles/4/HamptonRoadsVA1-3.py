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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA1-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.55249999845981,-77.6179999829996,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[66,57,53,76,68,70,69,70,78,87,83,78,66,66,64,70,69,69,66,64,65,65,78,59,57,74,71,61,66,64,81,85,89,86,75,62,64,70,75,62,66,65,60,63,85,72,68,71,69,69,51,68,83,83,82,87,80,75,75,68,66,58,61,65,64,59,76,78,72,60,50,54,60,59,65,74,76,79,85,73,63,67,70,65,61,66,63,68,86,60,58,70,74,66,48,55,43,57,80,66,74,75,72,67,65,71,65,65,67,63,75,76,65,73,79,79,76,72,59,58,72,61,66,66,66,68,69,66,64,70,58,62,85,84,79,78,76,62,43,55,68,54,60,46,46,46,42,67,50,68,68,64,65,65,84,85,79,80,78,67,58,78,70,71,76,72,69,76,65,68,60,64,63,63,62,63,77,73,71,77,71,63,71,79,80,76,80,77,81,78,74,69,60,58,54,62,67,65,89,75,76,69,64,73,69,85,93,86,92,80,73,67,70,69,63,59,57,58,65,60,79,80,81,80,74,78,81,80,86,93,83,69,70,68,66,82,64,55,58,48,70,70,82,87,82,76,75,77,81,87,96,87,85,74,65,68,68,68,62,55,65,56,56,59,91,86,84,82,72,82,85,88,87,91,82,71,66,59,68,65,66,63,62,46,38,68,92,94,87,92,87,84,82,83,83,94,82,73,60,57,58,67,67,66,58,39,63,65,89,89,90,92,84,88,80,67,80,80,82,80,72,66,62,60,65,68,58,53,97,70,88,81,88,80,87,87,81,72,72,61,77,80,64,62,66,56,63,63,61,57,52,57,76,81,75,77,76,86,77,83,81,81,70,55,61,61,48,48,45,53,57,49,59,59,81,71,66,63,77,79,92,90,94,81,73,77,73,61,61,67,60,41,61,54,48,57,92,83,83,81,72,71,91,88,94,85,81,79,66,68,69,62,71,63,51,54,54,55,95,87,84,81,73,75,67,79,78,73,70,72,64,61,69,66,50,44,50,33,51,58,92,76,73,66,68,61,57,66,76,69,56,55,59,61,62,61,57,63,65,35,39,51,96,82,88,69,75,69,74,63,59,62,64,75,64,52,55,45,43,59,61,51,53,36,96,84,89,70,76,68,73,63,58,55,64,75,65,52,53,48,48,59,62,54,56,36],
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
