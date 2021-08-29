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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA10-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.70874997802892,-77.6179999829996,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[60,59,58,51,50,45,46,43,40,34,37,29,29,40,41,44,43,43,44,42,44,44,61,60,51,42,42,36,45,48,40,39,34,35,38,36,39,42,41,37,39,42,40,33,48,53,54,54,44,41,32,38,38,38,33,37,37,37,36,36,37,35,35,34,28,28,67,53,51,51,41,35,37,41,36,32,38,34,38,33,33,31,27,24,28,27,32,33,64,56,52,44,41,50,48,42,44,27,34,30,35,33,36,28,25,24,22,25,25,23,68,57,42,49,44,48,52,49,48,43,37,31,34,32,36,25,25,21,28,23,23,26,52,52,53,46,44,43,48,44,41,32,29,29,29,31,31,29,26,24,30,24,22,25,59,51,48,50,44,40,31,32,38,38,39,28,29,26,29,25,26,25,24,26,26,26,55,55,53,41,42,37,42,42,37,46,51,40,35,28,32,28,32,35,21,27,30,26,61,53,50,43,35,43,48,51,52,52,54,44,38,38,39,38,30,42,23,41,30,31,51,50,46,43,35,39,48,42,51,48,45,49,42,37,43,41,40,38,37,41,36,27,61,53,46,38,39,49,43,47,55,49,48,40,42,40,42,39,40,38,47,45,34,31,47,46,45,39,47,61,49,53,54,46,47,43,44,43,42,41,41,41,30,23,28,30,50,43,44,35,45,52,48,49,52,46,40,44,41,42,43,39,40,41,34,40,34,39,38,35,46,48,52,54,48,50,52,54,41,39,37,39,46,35,34,36,40,46,36,34,47,50,50,44,50,50,52,49,52,54,50,50,43,37,30,31,37,31,36,42,36,41,53,53,55,52,56,47,51,47,45,47,48,46,45,41,35,44,37,35,41,34,31,39,55,46,52,53,56,49,50,53,52,36,50,40,39,36,45,38,40,46,38,32,37,40,46,51,47,55,65,52,51,49,56,44,58,43,40,41,47,45,45,46,48,41,31,39,48,50,61,55,57,58,50,51,52,49,48,47,41,41,47,50,46,48,55,39,34,35,41,40,47,51,54,55,51,55,47,59,49,45,51,43,52,41,46,47,36,35,36,35,40,51,52,52,49,51,49,47,49,53,50,51,50,51,53,45,48,41,40,41,34,42,39,49,54,51,50,50,49,46,51,55,50,50,47,51,55,48,50,45,42,39,36,40],
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
