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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA5-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.17749998937941,-77.6179999829996,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[75,73,79,64,65,80,69,67,69,71,65,50,47,72,70,56,57,47,42,43,49,53,80,86,83,68,74,78,61,72,71,68,60,45,63,67,66,55,52,50,47,39,43,46,84,92,78,78,90,93,85,81,68,64,52,49,66,69,64,53,53,51,48,47,36,35,96,87,87,87,92,96,79,69,63,59,55,78,69,65,62,53,53,53,44,39,32,36,97,94,87,86,90,93,83,73,64,62,72,70,75,63,54,52,54,53,55,42,39,36,95,90,85,84,79,80,80,71,66,71,72,75,69,58,54,52,57,50,49,41,41,47,89,96,94,88,85,72,66,72,72,68,72,67,62,60,64,61,54,55,46,54,43,44,92,95,97,94,94,90,83,84,71,65,65,67,64,62,57,55,52,55,47,48,48,45,82,90,93,88,89,89,85,82,74,73,70,76,69,67,64,53,55,56,43,51,49,49,74,88,90,90,93,73,74,76,81,70,58,70,70,63,62,50,47,43,44,42,42,44,71,74,76,95,91,73,73,71,82,76,69,68,64,59,56,55,49,60,56,53,33,36,64,74,74,84,81,85,70,76,77,73,68,64,70,64,55,49,46,43,52,50,45,39,63,70,69,76,74,78,63,73,78,64,63,59,63,67,58,56,52,46,48,51,48,47,60,59,70,70,72,67,59,73,74,67,63,53,65,58,57,56,52,47,52,51,56,56,66,59,66,74,66,69,58,77,78,76,57,48,55,46,53,51,50,53,50,60,44,46,73,65,59,61,65,71,55,72,74,65,52,45,51,53,52,52,50,51,58,49,41,38,61,62,54,53,53,57,61,65,68,59,52,63,64,67,65,54,48,42,49,48,46,50,56,61,73,52,51,49,46,58,60,54,56,67,65,65,60,54,47,44,45,53,46,47,76,69,69,56,54,66,53,56,60,56,64,70,77,65,56,51,58,51,46,43,55,50,69,77,69,65,57,70,67,63,55,58,67,71,67,62,60,58,48,53,44,40,43,44,81,83,73,76,67,63,57,53,60,63,64,67,68,63,59,54,49,48,50,50,41,46,84,91,72,68,60,60,53,71,62,62,60,66,67,63,57,54,51,47,46,42,41,45,85,89,73,69,63,58,52,72,63,63,60,67,66,63,56,55,50,48,44,43,41,44],
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
