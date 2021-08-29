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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA4-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.27124999164951,-77.6179999829996,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[92,86,80,88,94,87,82,94,93,78,70,70,72,63,62,64,69,66,56,59,50,49,86,84,75,81,90,78,82,91,87,78,75,71,52,48,69,66,67,63,56,55,50,47,86,76,76,90,94,87,81,82,82,85,70,56,64,52,66,66,66,64,57,58,60,56,74,69,85,85,89,84,87,77,75,70,68,67,72,48,56,61,70,66,54,54,66,56,67,70,72,75,82,88,89,84,80,66,74,73,81,69,49,66,61,58,59,51,59,61,61,78,63,74,70,85,90,86,80,73,79,73,72,66,54,48,56,60,57,58,52,54,62,69,52,71,77,73,89,92,93,85,80,79,64,57,64,46,41,62,54,60,47,58,75,60,56,69,75,80,93,84,87,86,75,79,74,68,75,69,61,57,47,58,48,43,73,72,63,50,72,74,90,87,74,78,66,71,69,77,77,63,64,55,51,53,49,51,60,59,72,57,67,80,83,90,85,74,71,71,74,78,62,65,56,55,56,52,46,57,63,54,64,45,67,77,85,93,84,72,66,58,71,72,70,65,60,68,54,62,57,54,68,60,53,49,68,75,84,92,75,66,70,72,60,53,68,63,56,56,64,55,53,55,74,71,68,62,66,67,85,86,81,78,89,80,68,63,69,62,59,61,55,56,59,52,77,78,73,58,56,75,77,89,76,72,88,80,69,70,69,64,58,53,47,46,41,49,78,72,67,66,46,64,67,80,71,71,70,69,55,68,59,64,53,59,58,55,61,49,74,59,48,53,46,59,59,67,67,58,63,65,60,73,57,54,53,55,59,59,58,54,70,58,63,65,59,52,46,58,61,53,60,63,52,62,62,57,64,54,52,60,59,56,70,71,64,62,44,53,60,59,53,60,42,53,57,54,55,62,53,61,60,60,52,51,74,68,62,46,68,56,49,51,45,46,50,43,46,41,44,47,57,53,62,49,45,46,67,62,63,71,76,78,50,55,51,62,60,48,40,58,56,54,39,44,55,51,43,41,75,74,75,64,64,78,67,67,69,73,65,49,45,70,69,55,58,45,41,43,50,54,75,73,79,64,65,80,69,67,69,71,65,50,47,72,70,56,57,47,42,43,49,53],
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
