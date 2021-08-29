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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA3-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.36499999391961,-77.24299997391921,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[41,35,47,40,41,39,42,37,42,42,37,25,33,35,29,21,21,37,37,40,34,35,40,38,44,47,45,46,47,36,40,37,28,39,45,37,34,22,19,23,38,38,36,31,44,38,40,45,46,47,42,47,41,35,37,34,39,43,32,14,41,41,38,40,37,32,42,48,32,43,46,40,41,53,46,37,37,39,40,34,30,22,37,43,35,39,26,20,47,42,30,46,47,42,41,39,40,41,45,43,38,38,35,29,35,37,32,32,23,20,44,41,42,35,47,41,40,40,42,42,48,36,31,44,35,29,34,44,40,26,19,19,41,45,46,39,44,39,37,39,43,39,48,43,39,35,22,33,41,37,35,25,21,22,46,34,39,40,32,36,34,36,43,38,47,40,36,33,26,34,38,30,35,24,30,28,33,32,28,29,37,39,42,48,45,51,46,46,41,43,28,39,42,37,38,28,31,24,29,33,32,29,39,44,50,43,43,43,44,40,43,40,23,38,41,40,36,28,24,25,36,40,32,31,35,36,49,42,45,46,42,45,44,35,28,31,44,37,34,34,25,20,45,37,32,32,31,41,47,47,45,40,41,45,40,35,34,33,41,40,27,25,28,24,40,42,28,32,37,42,35,36,37,39,42,43,43,42,44,37,42,39,33,31,31,32,37,38,38,33,37,38,35,42,33,42,42,39,45,39,40,45,42,36,40,36,30,30,40,41,37,29,30,42,35,39,33,34,35,43,43,41,43,44,42,40,46,38,40,45,43,44,36,29,34,40,45,39,37,38,45,35,42,51,44,39,45,42,36,38,36,45,41,47,35,31,32,33,41,31,38,38,46,49,46,45,40,41,45,41,40,35,43,41,37,38,41,35,28,31,43,34,41,40,39,43,46,48,34,42,33,42,46,41,44,43,35,40,42,37,31,26,31,34,33,42,46,51,37,44,40,48,42,43,47,44,44,47,30,32,39,38,30,39,24,27,43,42,43,48,41,47,41,40,42,34,45,44,44,46,37,35,30,34,27,27,30,28,32,35,38,37,39,37,34,42,43,39,34,41,34,39,45,35,32,34,34,34,31,25,24,39,40,37,39,39,39,35,38,46,41,43,36,33,44,35,34,36,35,34,33,25,22,37,42,36,39,40,38,35,37,46,41,42,37,34],
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
