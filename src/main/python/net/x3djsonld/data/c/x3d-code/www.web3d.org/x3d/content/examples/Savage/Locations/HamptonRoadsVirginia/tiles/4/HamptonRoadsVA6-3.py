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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA6-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.083749987109314,-77.6179999829996,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[85,89,73,69,63,58,52,72,63,63,60,67,66,63,56,55,50,48,44,43,41,44,88,104,84,70,70,58,67,74,58,71,66,73,66,64,57,56,50,50,53,50,43,42,85,102,78,70,58,63,77,73,64,66,68,65,70,57,54,56,53,52,53,51,42,39,91,104,77,71,70,70,81,74,66,67,64,67,70,65,58,64,55,48,54,49,47,45,88,102,79,84,70,76,86,80,66,68,69,68,65,63,67,60,55,57,57,50,51,54,80,100,87,71,64,89,81,81,72,71,69,69,63,63,62,62,58,54,51,52,54,51,77,79,89,92,68,88,90,82,77,71,70,66,59,68,59,67,55,63,61,51,46,47,68,83,81,79,79,82,86,83,79,75,66,66,61,52,64,62,60,55,59,57,43,47,79,77,94,84,79,87,89,88,78,76,64,61,54,59,47,56,58,56,55,59,58,53,73,97,89,86,74,81,88,78,75,80,69,62,61,63,59,54,57,55,56,53,54,54,74,83,86,82,71,75,81,77,83,77,72,57,55,60,52,55,60,62,58,52,49,48,63,84,72,76,77,69,71,63,79,75,71,66,58,57,49,54,55,58,55,50,47,56,64,68,64,67,74,73,68,66,80,78,75,67,59,56,53,47,55,54,54,49,52,52,67,66,73,70,74,69,68,68,79,70,64,58,52,53,58,52,52,59,53,52,52,56,59,53,67,76,70,63,67,73,81,81,73,67,62,51,54,50,53,54,59,54,58,53,54,56,80,77,78,70,61,69,84,75,80,68,65,58,53,49,59,49,58,53,55,50,49,55,65,68,72,71,74,69,77,86,76,71,72,58,56,52,49,39,49,45,50,48,65,51,48,49,69,55,68,55,68,88,79,62,58,57,60,51,52,51,47,40,41,43,61,64,53,60,42,44,64,71,55,68,79,76,70,64,53,56,47,46,43,42,39,41,61,65,73,54,66,52,61,67,55,61,82,73,70,65,64,52,51,46,50,45,35,46,63,62,74,69,70,66,48,53,67,62,76,67,76,67,65,50,44,46,45,49,40,37,64,62,73,69,72,67,48,53,68,62,74,67,79,69,63,51,44,46,44,48,39,38],
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
