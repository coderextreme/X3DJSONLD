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
        texture=ImageTexture(url=['../../images/5/newport20-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.32952841188842,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[21,24,24,20,25,25,31,33,32,33,30,26,25,25,27,31,30,27,20,13,2,0,24,20,21,20,24,27,31,37,33,33,29,24,25,27,29,33,31,28,24,17,11,11,19,23,24,23,22,27,30,31,29,30,30,28,28,27,32,31,32,30,26,20,11,9,20,21,20,22,25,26,31,31,30,29,28,29,27,29,31,35,32,32,27,22,17,15,18,21,20,24,23,27,29,32,34,30,28,31,30,31,33,37,34,35,33,26,20,18,22,21,24,23,28,27,30,35,34,32,31,31,33,33,35,34,36,36,36,30,25,25,18,23,26,26,26,27,31,32,32,33,36,37,37,39,41,38,36,37,37,34,31,31,14,25,29,31,29,28,29,32,31,35,35,37,38,39,39,39,41,40,41,39,34,32,20,20,26,29,28,30,30,31,32,35,35,36,40,41,41,41,40,42,45,46,41,40,19,20,25,26,29,31,35,30,33,33,35,38,41,44,42,43,44,46,49,50,47,44,16,20,26,28,29,31,28,28,31,38,42,40,42,44,44,45,47,49,54,55,53,49,12,16,22,28,29,29,29,28,32,35,41,45,48,44,46,49,48,49,54,55,56,54,5,14,18,27,25,25,29,30,31,30,38,45,46,46,46,48,48,51,54,56,58,56,0,3,12,16,23,24,27,27,28,28,34,39,39,44,46,49,47,50,53,57,60,60,0,0,0,6,14,21,24,25,24,27,29,33,39,38,45,44,47,49,55,56,58,60,0,0,0,0,8,14,20,24,26,30,29,38,37,40,40,39,43,49,55,57,57,57,0,0,0,0,7,13,21,25,28,30,32,32,37,36,37,36,46,46,52,57,55,54,0,0,0,0,7,14,23,29,29,32,31,32,34,37,37,40,44,44,52,56,53,50,0,0,0,0,8,12,20,29,34,30,31,33,31,34,38,37,39,45,50,52,50,46,0,0,0,0,8,15,20,29,31,34,32,31,33,35,31,37,36,42,46,47,48,44,0,0,0,0,0,11,19,20,28,34,32,32,32,33,35,36,36,41,41,42,44,42,0,0,0,0,0,0,16,20,24,32,32,32,33,29,34,35,35,34,41,43,39,37,0,0,0,0,0,0,6,14,22,29,34,33,35,31,32,32,37,35,38,38,33,29,0,0,0,0,0,0,4,14,22,29,33,33,34,31,31,32,36,34,38,39,32,29],
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
