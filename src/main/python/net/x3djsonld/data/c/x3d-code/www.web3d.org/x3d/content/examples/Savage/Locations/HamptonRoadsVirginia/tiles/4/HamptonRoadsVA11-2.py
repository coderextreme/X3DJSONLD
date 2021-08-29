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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA11-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.61499997575882,-77.7429999860264,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[74,76,85,62,56,77,62,72,63,70,67,50,59,57,59,52,33,40,32,43,36,39,43,51,59,43,43,43,43,43,43,74,58,43,54,53,41,46,34,26,26,20,45,41,43,43,43,43,43,43,43,43,43,43,43,43,43,25,30,22,20,22,20,20,33,36,43,43,43,43,43,43,43,43,43,43,43,43,43,28,30,26,32,31,21,20,26,41,43,51,48,43,43,43,56,60,65,68,65,51,47,52,47,42,44,23,27,20,34,41,44,58,69,58,60,80,71,66,67,63,64,55,53,60,56,44,48,38,37,25,43,44,49,62,76,68,68,76,71,67,63,64,63,67,58,57,57,54,53,40,27,20,46,43,54,78,85,74,72,68,71,66,57,68,63,62,52,59,61,55,52,41,38,27,44,40,67,73,84,74,74,79,72,63,62,63,57,56,52,49,59,56,56,45,43,24,28,33,84,87,83,82,82,73,68,74,66,69,61,60,60,60,50,55,50,48,44,37,21,24,91,84,88,88,88,78,72,77,74,66,70,63,58,52,45,54,46,45,42,34,16,30,92,80,82,81,96,88,77,76,77,70,64,63,61,56,50,47,45,47,46,43,43,29,80,77,73,81,90,85,80,71,70,73,64,71,53,53,42,42,48,45,46,45,41,31,84,81,75,63,78,85,72,67,70,62,62,59,51,53,57,45,39,44,42,45,42,39,87,73,88,77,68,93,77,71,65,64,59,60,47,49,49,51,45,37,41,45,42,41,88,77,79,71,71,82,77,72,71,61,59,52,49,54,52,42,46,41,30,39,39,36,83,84,77,71,55,72,76,74,63,62,60,55,53,55,54,47,45,40,35,26,33,35,90,84,76,77,70,55,73,67,67,63,59,54,50,50,59,53,45,40,38,33,24,27,85,82,82,76,69,58,61,64,64,61,58,52,50,49,57,53,44,51,38,39,36,33,81,72,75,84,75,56,57,62,62,60,57,54,49,47,46,52,52,48,45,38,43,43,83,78,73,82,81,62,52,58,56,57,56,53,49,47,50,50,54,50,46,44,41,40,83,80,71,82,80,64,51,59,54,58,58,54,49,46,50,49,52,50,45,45,42,39],
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
