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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA12-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.52124997348872,-77.7429999860264,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[83,80,71,82,80,64,51,59,54,58,58,54,49,46,50,49,52,50,45,45,42,39,85,81,66,70,71,57,51,53,53,52,55,52,53,50,54,50,50,49,50,45,42,38,78,75,73,73,67,53,59,47,48,50,50,53,50,52,50,47,59,52,57,46,47,45,67,68,71,71,67,62,61,58,48,47,47,49,55,53,50,51,50,52,51,42,41,49,74,52,70,71,61,65,62,63,52,51,45,50,46,56,50,47,48,49,47,42,50,46,84,71,55,63,60,61,59,63,61,56,56,42,54,50,50,48,45,47,49,43,45,42,79,76,60,55,52,60,63,59,60,58,52,53,49,44,47,49,43,38,44,42,44,41,89,77,67,66,54,50,57,60,60,56,52,49,48,42,47,45,47,43,42,42,45,48,75,68,69,61,57,43,48,47,58,48,54,48,50,44,44,51,46,44,46,40,38,41,66,68,63,60,49,63,43,39,49,40,50,40,49,50,48,39,40,42,47,44,40,47,67,61,60,64,62,63,52,60,53,45,40,40,52,52,44,45,43,42,47,46,40,47,67,72,59,52,55,67,58,57,56,45,48,40,47,50,48,46,46,38,41,51,52,56,68,64,62,60,48,59,46,51,55,55,54,47,49,50,44,44,50,40,38,45,48,45,68,61,60,47,62,46,54,45,60,55,53,52,48,48,47,46,46,42,39,34,36,39,57,51,59,49,60,55,54,54,43,42,42,43,43,42,49,48,47,48,51,31,42,37,69,56,48,64,62,60,55,50,47,43,44,44,41,52,47,42,47,46,48,38,31,35,62,61,59,60,64,58,58,50,49,53,52,49,39,44,36,47,43,47,46,44,37,41,68,67,62,58,58,60,51,51,52,47,51,47,52,43,38,42,44,45,47,45,38,40,63,66,62,61,58,57,59,51,43,46,53,47,42,40,33,35,47,41,40,45,41,41,68,67,61,60,60,55,53,43,52,49,45,46,54,45,35,31,47,42,41,42,47,44,72,68,65,62,51,53,51,48,46,52,53,44,38,41,36,34,47,47,40,44,44,44,68,70,68,64,63,56,47,44,44,43,43,43,43,40,32,40,42,45,47,46,43,43,70,70,67,64,63,56,47,42,42,43,42,42,44,39,32,43,41,44,46,45,43,43],
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
