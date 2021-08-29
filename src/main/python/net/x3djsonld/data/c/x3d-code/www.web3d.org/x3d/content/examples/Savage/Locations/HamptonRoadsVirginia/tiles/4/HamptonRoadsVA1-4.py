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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA1-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.55249999845981,-77.49299997997281,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[65,56,58,63,60,42,36,42,33,29,27,28,29,29,31,17,4,6,6,18,24,36,63,64,58,57,57,55,53,40,40,44,41,23,39,26,24,24,11,4,6,12,18,20,59,53,62,62,62,60,55,50,45,50,40,42,44,38,25,21,20,8,2,6,14,19,68,65,58,56,55,46,45,43,46,41,53,49,44,34,33,36,35,31,7,5,6,10,63,56,56,52,52,42,46,38,42,46,49,46,40,39,37,39,24,25,6,4,2,6,62,61,65,51,50,49,41,56,37,34,38,36,43,50,34,30,31,19,8,2,3,5,65,57,55,54,47,58,53,59,31,40,36,27,33,38,43,30,24,18,15,16,1,1,63,61,65,45,60,55,52,49,32,57,43,38,27,22,22,15,24,25,21,13,9,15,65,59,61,58,58,53,58,50,34,46,52,53,49,28,37,44,38,28,21,14,6,7,60,62,58,58,56,59,56,54,44,46,51,54,36,51,47,44,38,23,10,1,1,1,70,69,59,57,63,50,55,45,42,49,56,55,47,53,42,33,25,20,1,3,1,2,59,65,59,51,46,56,50,48,56,52,59,61,60,48,46,44,40,36,1,2,1,5,68,62,55,55,61,61,55,47,56,53,60,60,58,59,51,51,52,40,47,29,2,5,65,66,63,59,53,60,50,60,53,57,46,57,46,52,47,50,46,52,47,50,41,44,70,60,63,59,57,60,55,58,57,56,48,59,51,48,40,57,49,56,49,50,40,40,57,58,56,60,59,61,53,58,51,45,46,46,44,47,53,56,58,57,56,54,47,51,59,62,56,57,65,58,58,52,53,51,50,47,50,36,43,45,55,52,49,63,52,53,57,59,62,61,67,58,62,64,57,47,51,59,39,39,33,43,38,40,35,52,49,59,55,59,66,61,64,59,44,47,57,56,58,54,53,49,39,24,33,32,39,57,51,46,58,56,61,61,58,61,49,54,44,43,56,58,48,41,42,39,38,48,48,46,50,37,51,52,55,48,65,61,53,57,58,48,52,54,52,57,48,32,36,36,41,41,32,30,36,45,51,52,60,55,61,65,61,49,47,40,43,50,52,37,13,30,34,25,22,18,36,47,51,52,61,55,62,66,60,49,45,40,38,51,53,37,13,26,33,23,19,16],
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
