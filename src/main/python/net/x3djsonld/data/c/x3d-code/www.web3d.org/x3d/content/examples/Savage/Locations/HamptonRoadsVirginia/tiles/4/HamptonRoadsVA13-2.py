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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA13-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.42749997121862,-77.7429999860264,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[70,70,67,64,63,56,47,42,42,43,42,42,44,39,32,43,41,44,46,45,43,43,63,63,64,68,60,59,48,46,42,43,41,40,45,42,36,40,42,35,43,40,44,45,61,67,70,66,61,53,50,46,49,35,37,47,44,42,38,31,37,42,37,36,42,40,57,60,63,60,56,59,55,50,45,41,45,43,43,42,44,42,33,35,36,32,38,38,55,61,62,69,56,51,52,47,46,37,42,46,42,48,42,38,32,36,34,35,40,43,61,57,55,50,47,49,50,47,44,40,43,44,46,43,44,41,33,37,32,36,40,39,51,51,52,46,46,50,48,45,39,40,43,45,44,41,42,40,35,35,36,35,42,40,55,45,41,39,48,52,45,41,39,42,43,44,50,39,42,37,35,39,35,32,37,36,48,59,51,56,51,51,43,32,34,34,37,49,41,39,35,39,39,40,32,40,36,37,57,59,50,53,45,50,43,44,39,42,37,44,36,43,33,35,39,47,36,35,36,34,53,53,48,46,46,45,39,44,42,45,36,40,47,39,38,40,32,41,37,37,28,28,53,48,48,51,41,44,41,40,40,39,34,35,43,40,42,38,31,38,36,35,31,28,50,38,45,45,45,44,42,40,39,35,36,33,34,40,43,39,41,37,34,30,32,28,41,45,51,35,43,43,44,40,48,41,37,30,29,34,38,35,31,31,34,35,31,27,44,43,45,41,40,44,43,40,38,42,34,33,29,32,38,35,28,37,26,35,26,29,49,47,42,41,43,42,46,40,40,53,44,34,29,30,36,36,35,33,33,27,34,31,51,49,44,39,43,41,40,32,35,37,36,34,28,27,36,32,34,26,26,30,44,41,47,44,42,39,35,41,36,35,35,34,32,38,31,32,32,37,28,32,30,33,36,37,43,38,42,40,33,33,39,33,40,37,33,41,28,29,31,37,28,33,24,33,32,35,35,43,32,37,37,35,36,28,41,36,35,33,27,34,35,38,36,30,26,31,39,39,42,47,35,38,34,33,26,31,32,43,37,38,28,27,34,34,32,34,26,32,41,38,41,44,34,36,33,34,25,30,35,42,37,39,27,26,34,34,32,33,24,33,39,36],
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
