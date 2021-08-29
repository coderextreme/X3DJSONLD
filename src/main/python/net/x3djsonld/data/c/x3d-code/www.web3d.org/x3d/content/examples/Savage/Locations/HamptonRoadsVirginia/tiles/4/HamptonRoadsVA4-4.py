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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA4-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.27124999164951,-77.49299997997281,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[49,52,54,41,54,53,45,49,46,41,45,51,47,52,50,50,50,53,56,56,45,51,47,56,48,43,46,46,44,59,51,34,53,50,53,51,55,52,51,56,57,53,50,53,56,55,45,45,41,42,46,52,61,44,45,48,57,52,50,58,50,56,54,53,49,49,56,52,58,49,43,41,40,37,32,38,43,53,53,55,57,55,47,50,54,53,53,47,61,54,62,46,44,35,37,31,50,48,53,47,59,57,59,49,51,54,54,51,48,55,54,52,57,48,37,42,34,33,51,52,53,52,54,55,47,50,45,55,47,48,49,43,58,47,49,51,42,45,34,32,45,59,45,51,55,49,57,52,50,50,57,55,53,41,43,42,40,40,45,45,47,36,48,47,50,45,55,48,53,55,50,50,46,52,53,56,51,51,50,44,40,36,31,42,48,54,42,53,57,53,48,50,52,49,50,50,54,47,57,48,44,40,38,34,39,45,49,46,53,52,51,56,56,51,51,42,42,50,48,51,54,51,50,43,39,35,42,47,55,57,43,41,51,53,47,48,44,48,39,48,48,48,55,55,47,40,38,31,36,42,46,50,39,47,46,52,48,50,50,50,50,53,56,49,52,47,40,39,40,33,33,33,37,47,44,46,43,51,48,51,49,53,51,38,33,37,49,57,47,48,42,32,35,30,46,47,42,38,38,47,49,51,53,40,38,42,52,45,49,51,52,44,41,34,32,28,34,48,45,38,35,52,50,52,42,53,49,52,50,51,54,57,60,49,45,37,32,34,33,35,44,39,40,50,46,56,54,47,55,50,43,44,56,49,46,54,37,31,43,29,31,34,39,37,46,46,50,45,50,48,45,43,50,43,51,52,46,41,40,39,44,32,28,26,35,32,38,42,51,42,41,55,49,47,48,42,46,52,51,54,43,46,46,30,28,27,28,36,37,36,52,36,46,49,49,46,50,50,41,51,49,51,46,54,40,45,37,31,27,28,23,42,45,32,45,48,49,41,47,43,54,44,47,52,55,50,48,48,41,39,32,28,36,40,51,28,47,43,41,41,43,41,53,45,47,51,53,50,47,49,42,40,32,29,37,40,52,27,46,42,40,40,44,40],
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
