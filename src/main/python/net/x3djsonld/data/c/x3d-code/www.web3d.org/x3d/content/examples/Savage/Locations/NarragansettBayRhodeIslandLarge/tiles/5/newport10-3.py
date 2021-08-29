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
        texture=ImageTexture(url=['../../images/5/newport10-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.35539950857997,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[28,25,27,26,21,15,11,15,11,1,2,3,1,3,4,3,2,4,9,12,12,12,32,34,38,37,25,16,13,11,16,10,9,10,5,4,5,4,4,5,8,10,11,12,38,38,36,31,23,22,20,20,20,23,20,14,9,8,7,6,8,10,10,10,11,11,48,45,37,37,34,26,22,25,26,27,21,16,13,17,17,16,15,14,11,12,13,13,48,44,40,40,34,26,33,28,32,21,22,25,18,24,26,23,18,22,17,27,23,22,44,48,43,44,44,38,32,35,33,31,25,32,25,27,35,29,25,21,22,29,25,26,48,51,48,47,43,37,31,39,36,33,41,37,24,26,29,34,25,23,25,26,26,26,48,50,51,47,47,41,30,37,37,31,36,37,33,35,26,35,32,29,25,27,39,40,53,50,47,40,43,42,35,37,31,30,33,37,32,35,30,32,37,30,27,41,43,41,56,50,42,41,45,39,39,44,39,33,32,29,28,31,30,31,33,30,30,33,35,34,52,52,47,42,43,40,37,37,36,29,34,27,25,28,32,26,32,26,31,39,39,38,58,56,52,49,50,40,35,36,38,37,32,28,28,32,30,29,32,34,31,32,38,39,60,58,53,49,47,41,39,39,36,33,30,30,33,31,31,38,38,40,37,32,39,39,62,62,57,53,46,39,38,34,33,32,31,30,28,26,27,34,37,40,36,34,33,32,65,61,52,42,42,42,38,33,33,31,30,32,30,27,28,24,26,27,28,28,28,29,67,61,54,48,47,51,49,42,34,33,34,37,36,28,24,22,23,29,30,30,27,27,65,61,56,47,41,44,43,39,36,33,33,35,35,30,25,21,21,25,27,28,27,27,60,57,58,50,38,36,42,37,32,31,31,32,30,27,22,26,24,20,24,29,25,23,60,51,45,39,37,36,33,32,30,29,30,29,25,23,21,25,23,17,21,22,22,22,54,43,42,42,39,30,28,24,21,20,24,25,24,21,22,23,19,15,20,21,22,23,46,39,38,33,28,26,24,24,23,21,21,20,21,21,22,21,18,17,21,21,19,19,36,34,35,33,31,28,25,24,23,21,19,19,18,19,20,20,20,17,20,19,21,21,34,34,36,36,37,34,29,26,25,21,20,21,19,18,19,19,17,17,17,20,21,21,34,35,36,36,38,35,30,26,25,21,20,22,20,18,19,17,17,17,16,19,21,21],
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
