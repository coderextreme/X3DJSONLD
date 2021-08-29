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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA9-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.80249998029902,-77.6179999829996,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[63,63,70,72,70,61,65,45,57,49,49,38,44,40,30,31,26,30,29,28,30,32,56,62,53,66,61,67,62,59,49,49,38,43,44,39,36,36,27,31,28,32,25,25,51,52,45,44,46,59,63,53,52,51,46,51,47,46,40,37,33,33,25,27,25,26,58,69,47,51,52,54,56,52,61,51,48,50,43,43,42,36,30,33,28,27,26,26,67,74,63,58,49,48,56,52,53,48,55,49,46,41,42,38,36,32,30,25,32,31,66,74,73,63,61,51,47,46,58,53,45,53,42,48,38,36,38,32,29,30,30,36,65,72,66,60,55,48,53,52,54,51,46,49,46,41,40,42,32,36,38,39,31,28,71,74,66,64,63,45,52,52,52,50,50,49,42,43,39,45,34,35,38,33,33,36,70,71,65,58,51,54,53,47,45,53,54,48,44,48,37,36,36,34,39,37,36,33,67,70,64,63,61,51,51,46,48,47,50,54,50,46,41,38,31,34,30,32,35,33,67,62,62,64,60,62,45,56,49,46,51,48,49,44,47,50,43,37,31,38,30,34,66,70,65,65,61,51,53,45,38,45,43,47,48,40,44,43,43,36,35,33,30,29,66,58,63,60,48,48,52,44,43,45,43,45,52,47,51,46,44,42,35,37,31,27,70,60,57,50,51,57,49,48,45,46,39,40,51,50,51,52,43,45,41,35,30,34,67,67,65,64,54,53,56,42,40,42,45,40,48,48,45,47,43,42,44,40,36,33,73,67,61,60,66,54,48,43,39,35,36,42,46,49,44,46,43,43,45,41,35,36,65,66,62,57,56,45,46,37,-32,41,39,45,46,43,42,49,47,43,41,37,37,41,56,55,56,57,55,48,43,47,-57,43,38,37,37,44,46,43,42,40,37,34,36,34,51,52,54,55,54,50,49,45,52,37,39,31,37,46,50,48,46,50,45,38,37,33,68,68,55,44,39,51,54,42,38,44,39,39,31,44,44,48,43,46,39,42,42,38,61,61,56,52,51,46,46,43,39,35,35,29,28,39,41,43,44,46,46,42,45,42,60,59,58,51,50,45,46,43,40,34,37,29,29,40,41,44,43,43,44,42,44,44],
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
