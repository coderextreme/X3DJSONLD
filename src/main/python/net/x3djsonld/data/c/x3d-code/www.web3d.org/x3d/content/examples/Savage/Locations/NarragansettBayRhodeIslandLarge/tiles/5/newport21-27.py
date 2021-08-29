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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/5/newport21-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.19761628762797,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,4,15,18,22,28,31,33,28,28,36,36,34,42,53,57,61,64,61,59,58,0,8,24,35,40,35,30,33,39,40,41,38,44,42,42,43,50,57,62,62,59,59,20,18,26,35,43,48,39,37,41,44,48,49,47,49,51,53,50,51,56,61,59,58,7,18,27,42,48,51,54,48,48,47,50,53,52,54,57,58,58,54,51,54,56,57,9,11,16,27,43,52,53,56,54,50,46,52,56,58,61,61,58,55,54,50,47,46,10,12,17,22,28,34,39,50,56,53,50,50,55,59,60,60,60,56,53,48,48,47,12,12,13,19,22,25,31,43,47,48,46,48,55,58,57,57,59,59,54,50,47,46,16,14,18,27,26,22,24,28,34,41,46,51,57,59,59,58,56,54,51,48,46,46,22,14,23,31,34,25,22,23,29,31,38,55,58,59,59,57,51,50,46,44,44,44,20,21,29,33,35,30,28,24,30,28,34,44,59,62,56,51,50,48,47,43,42,42,26,20,29,30,32,33,35,26,26,28,40,49,60,61,55,49,47,44,42,41,41,41,28,23,29,31,33,32,32,26,30,30,37,50,62,59,51,44,40,40,40,40,40,40,29,27,29,30,31,31,33,28,33,35,37,45,47,43,41,41,40,40,40,40,40,40,32,31,31,31,32,32,29,29,32,39,43,43,42,43,41,40,40,40,40,40,41,41,38,39,35,32,32,32,29,33,36,49,51,51,46,41,40,40,40,40,40,40,41,42,44,44,43,34,33,32,36,41,40,54,56,54,49,41,40,40,40,44,49,47,50,50,51,47,41,38,42,34,44,51,44,52,59,55,50,43,41,41,41,48,50,47,46,46,48,47,41,47,47,44,55,54,47,54,60,55,49,44,42,43,49,54,48,46,46,46,43,47,47,56,46,60,58,59,52,59,61,55,48,45,43,43,49,58,48,46,50,51,47,50,60,64,63,66,58,55,53,62,61,55,51,48,44,43,44,49,44,51,55,54,57,58,58,61,67,66,60,54,55,63,60,55,53,53,46,47,43,43,45,53,59,58,66,68,56,72,67,67,65,55,57,61,58,53,53,54,48,48,46,44,51,65,63,62,67,68,58,70,68,65,62,57,59,62,57,53,53,53,51,52,47,46,57,70,67,65,67,65,60,71,69,65,62,57,59,62,57,53,53,52,52,53,47,47,56,69,67,66],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
