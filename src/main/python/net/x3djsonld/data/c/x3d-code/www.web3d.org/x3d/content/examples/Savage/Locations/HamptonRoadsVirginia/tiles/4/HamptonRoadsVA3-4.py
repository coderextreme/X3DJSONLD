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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA3-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.36499999391961,-77.49299997997281,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[53,58,53,52,39,40,40,46,45,33,33,31,12,24,28,21,26,26,25,27,32,35,39,35,35,34,40,42,27,21,20,20,17,20,29,25,24,22,18,24,25,43,37,40,58,55,53,49,56,42,40,44,36,31,32,37,36,29,25,23,27,31,27,37,42,39,61,58,59,49,44,44,49,49,45,41,35,31,34,34,40,37,45,23,41,44,41,36,65,58,53,50,48,50,37,34,47,45,41,44,46,45,45,41,34,33,47,51,55,43,58,57,58,58,45,39,46,56,48,43,45,47,56,45,41,45,48,44,48,51,49,47,59,54,54,55,41,50,52,51,50,41,48,51,54,46,52,57,42,51,47,51,51,51,62,64,48,49,53,55,53,56,45,43,41,56,56,59,57,55,38,54,48,48,40,43,57,51,51,50,60,47,48,46,50,39,40,46,51,52,50,54,41,56,53,56,52,54,55,51,55,55,51,50,41,51,40,44,42,47,46,52,52,52,55,50,60,51,54,54,59,60,57,51,51,58,53,45,49,47,59,51,55,54,53,58,51,52,59,57,51,56,56,64,62,64,57,57,51,53,45,52,52,52,53,52,49,50,53,52,50,50,52,51,57,55,59,54,50,47,51,59,60,49,62,52,57,59,56,51,54,51,57,58,52,51,54,56,59,56,60,51,50,51,50,49,54,55,61,57,56,51,57,55,52,52,51,53,64,60,61,60,55,49,50,43,50,50,50,53,55,63,55,50,47,46,52,53,52,52,68,50,55,65,53,53,43,50,37,45,49,59,58,52,45,59,53,49,48,51,50,50,53,58,48,57,51,55,54,52,48,54,52,53,56,45,51,59,58,48,52,45,45,41,46,60,48,55,52,51,54,49,46,51,54,50,54,55,51,61,60,56,57,54,55,55,48,62,51,54,53,52,52,52,51,42,49,52,52,44,52,50,50,52,51,56,51,52,48,57,55,47,52,46,47,51,58,37,44,47,57,46,52,49,51,50,49,50,49,51,53,58,53,49,48,51,44,54,54,48,37,47,38,50,48,52,48,50,49,50,52,51,49,50,53,42,54,54,45,51,49,40,44,51,46,53,50,51,51,54,53,56,46,52,49,52,54,41,54,53,45,49,46,41,45,51,47,52,50,50,50,53,56,56,45,51],
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
