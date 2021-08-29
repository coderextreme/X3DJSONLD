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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA14-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.333749968948524,-77.99299999208,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[66,68,77,88,94,82,88,91,92,75,75,77,66,62,65,68,74,74,53,45,56,55,70,83,81,79,90,88,78,95,83,75,75,69,65,58,63,66,76,70,61,52,59,60,63,84,70,82,88,87,72,70,88,68,65,72,66,61,66,69,79,70,61,67,71,64,66,81,62,73,84,83,64,69,68,72,59,58,64,64,68,72,73,67,67,68,67,57,53,71,57,82,79,80,66,68,61,69,62,50,57,61,72,67,65,62,62,70,54,51,52,56,73,75,76,66,73,52,72,66,61,56,57,60,61,58,59,67,69,72,51,49,56,49,57,71,71,52,67,49,54,55,58,58,52,60,52,63,62,54,72,55,48,47,54,50,52,55,68,53,53,58,48,46,45,51,44,52,61,48,55,48,61,66,54,47,57,63,58,50,63,50,65,48,53,47,47,48,43,41,67,60,48,60,56,59,45,48,79,68,59,48,50,47,62,60,53,61,68,58,51,47,63,70,51,49,62,55,41,52,74,65,59,53,53,65,76,74,77,55,70,61,50,41,54,61,58,46,47,44,46,55,71,63,51,64,70,67,73,84,70,56,72,67,54,42,47,52,62,44,39,44,62,66,58,70,76,84,76,84,81,81,65,68,74,72,58,41,39,43,56,48,47,39,62,65,70,72,75,83,80,81,85,83,69,78,72,68,55,48,47,43,46,60,48,42,64,60,75,72,92,82,77,70,85,84,84,82,66,62,68,65,63,49,47,52,48,42,59,53,88,87,86,73,71,65,84,90,88,84,73,72,72,67,64,51,57,44,44,40,47,44,105,84,83,72,75,64,76,74,86,77,74,76,62,66,63,66,57,49,43,47,36,35,86,79,75,73,70,65,68,76,90,85,78,80,67,57,62,64,65,59,40,50,47,44,92,78,70,72,61,66,67,69,64,69,77,74,66,58,58,65,64,67,61,59,48,47,83,74,71,73,74,63,56,70,64,63,72,71,69,66,63,52,57,63,64,54,51,58,90,82,68,71,68,69,62,60,53,68,65,67,66,68,68,61,57,54,59,50,59,65,85,76,68,56,64,66,64,48,56,52,60,58,63,70,67,62,65,55,44,44,66,61,85,77,66,58,64,64,63,47,56,52,61,60,62,70,67,64,65,55,45,44,66,60],
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
