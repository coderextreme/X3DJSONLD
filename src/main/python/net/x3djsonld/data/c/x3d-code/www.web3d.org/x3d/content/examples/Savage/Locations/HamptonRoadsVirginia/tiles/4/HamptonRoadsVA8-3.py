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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA8-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.89624998256912,-77.6179999829996,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[84,82,83,79,67,69,69,71,66,60,63,61,61,52,48,41,40,41,51,50,51,48,79,78,71,81,65,69,73,65,69,73,62,62,48,52,51,46,40,49,49,50,54,54,80,82,73,74,76,69,73,66,72,63,58,57,60,56,51,57,44,47,48,49,50,53,66,61,71,65,65,61,68,64,66,63,56,56,56,55,52,47,41,44,47,45,54,45,69,68,67,64,59,53,68,74,60,66,54,53,52,55,55,43,46,49,47,46,47,46,66,62,67,68,69,52,71,70,71,55,56,55,46,49,53,39,39,59,43,51,47,44,59,54,63,69,56,50,57,66,65,51,54,59,48,41,45,38,42,45,37,47,48,42,64,55,61,57,64,48,58,50,57,54,55,49,48,45,45,44,41,51,43,44,43,38,59,64,49,54,51,52,57,61,42,51,54,44,48,48,41,52,44,40,44,41,44,41,69,60,69,59,52,68,64,68,58,60,54,42,42,49,48,42,55,36,34,34,35,30,70,65,62,64,66,68,75,61,58,58,59,47,43,62,51,50,41,33,35,32,35,30,67,72,73,71,72,72,65,67,59,57,53,51,49,49,52,50,42,38,41,41,35,36,67,64,77,63,49,64,58,62,53,51,52,52,48,49,49,48,41,49,54,39,36,32,53,54,58,44,42,51,49,63,57,52,55,49,52,43,49,42,46,50,55,42,42,42,53,38,45,43,44,51,40,63,46,51,51,45,49,40,40,38,44,44,46,46,40,41,59,50,43,43,56,60,51,47,49,48,45,42,47,45,39,39,36,34,40,44,31,34,61,64,60,58,57,62,57,44,44,37,37,40,42,42,36,34,33,34,37,38,32,33,68,69,71,67,65,60,64,52,45,45,47,44,40,40,35,34,37,42,32,33,35,33,69,70,66,63,64,60,61,53,51,56,54,44,49,43,33,35,34,31,35,43,33,34,67,66,59,61,60,67,62,59,52,47,42,49,51,43,40,36,27,28,31,35,30,41,67,66,65,70,63,64,60,61,51,50,48,39,46,43,41,31,29,27,26,34,25,23,64,61,72,74,68,57,62,46,59,49,48,40,41,40,29,30,26,29,32,28,29,31,63,63,70,72,70,61,65,45,57,49,49,38,44,40,30,31,26,30,29,28,30,32],
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
